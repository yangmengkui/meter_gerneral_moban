#include <QDebug>
#include <QSerialPort>

#include <serial.h>

#define SERIAL_READ_BUFFER_SIZE 2048	// 2048 Byte

Serial::Serial(const QString &serialDev, QObject *parent) :
	QObject(parent)
{
	m_serial = new QSerialPort(this);
	m_serial->setPortName(serialDev);

	/*
	 * the serial port should be protected against receiving too much data,
	 * which may eventually cause the application to run out of memory.
	 */
	m_serial->setReadBufferSize(SERIAL_READ_BUFFER_SIZE);

    //设置串口参数
	if (m_serial->open(QIODevice::ReadWrite)
			&& m_serial->setBaudRate(BAUD_RATE)
			&& m_serial->setDataBits(QSerialPort::Data8)
			&& m_serial->setParity(QSerialPort::NoParity)
			&& m_serial->setStopBits(QSerialPort::OneStop)
			&& m_serial->setFlowControl(QSerialPort::NoFlowControl)) {
		qDebug() << "Succeed to open serial port.";
	} else {
		qDebug() << "Fail to open serial port: " << serialDev
				 << "\n" << m_serial->errorString();
		return;
	}

    //connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
    //信号和槽函数连接，当串口缓冲区有数据时，进行读串口操作
    connect(m_serial, SIGNAL(readyRead()), this, SLOT(readSerial()));
    //关键一部，QIODevice串口自带的信号readyRead（），当缓冲区有数据时就发射readyRead（）信号
}
//
void Serial::readSerial()
{
	m_recv += m_serial->readAll();

#ifdef HUATAI_RECV

    //如果读取的数据段的长度大于一个帧的长度，则说明有可能存在一个完整的数据帧
	while (m_recv.length() >= (int)sizeof(DownFrame)) {

        //   0xAA:是包头相当于协议的意思

        //遍历读取数据，直到找到好一个开头
		if ((uint8_t)0xAA != (uint8_t)m_recv[0]) {
			bool found0xAA = false;
			for (int i = 0; i < m_recv.length(); ++i) {
				if ((uint8_t)0xAA == (uint8_t)m_recv[i]) {
                    m_recv.remove(0, i);//让数据包的第一位就是开头0XAA
					found0xAA = true;
					break;
				}
			}
//如果遍历了整个数据还没找到开头，则把这段数据段丢弃
			if (!found0xAA) m_recv.clear();
		}
		else {
            //找到了数据包的开头，由于数据的长度一定，那么数据的尾部位置就确定了下来，如果尾部位置不是tail，那么可视为该数据错误
			if ((uint8_t)0x55 != (uint8_t)m_recv[DOWNFRAME_BYTELEN-1]) {
                m_recv.remove(0, 1);
              //数据帧的长度一定，头找到了，且把他弄成吗m_recv[0],所以尾的位置就确定了
                /*执行这句话前提是0XAA==m_recu[0],即已经找到开头了，但是没有找到数据尾，
                                就把数据的头给删掉，然后进入下一个循环，把这个数据帧给舍弃，然后重新找到一个数据头*/
			}
			else {
                /*执行到此，说明找到了一个完整的数据帧，提取该数据帧的数据部分，同时把整个数据段左移一个帧的长度（继续提取）
                                用16位的CRC校验帧的数据部分，如果没有问题，则发送serialChanged信号*/
				QByteArray bf = m_recv.left(DOWNFRAME_BYTELEN);
				m_recv.remove(0, DOWNFRAME_BYTELEN);
				DownFrame *downFrame = (DownFrame *)bf.data();

				qDebug() << bf.toHex();


				if (downFrame->crc == crc16Check((uint8_t *)(&(downFrame->carInfo)), sizeof(CarInfo)))
					emit serialChanged(downFrame->carInfo);
			}
		}
	}
#endif

#ifdef HUATAI_TRAN
	while (m_recv.length() >= (int)sizeof(UpFrame)) {
		if ((uint8_t)0xAA != (uint8_t)m_recv[0]) {
			bool found0xAA = false;
			for (int i = 0; i < m_recv.length(); ++i) {
				if ((uint8_t)0xAA == (uint8_t)m_recv[i]) {
					m_recv.remove(0, i);
					found0xAA = true;
					break;
				}
			}
			if (!found0xAA) m_recv.clear();
		}
		else {
			if ((uint8_t)0x55 != (uint8_t)m_recv[UPFRAME_BYTELEN-1]) {
				m_recv.remove(0, 1);
			}
			else {
				QByteArray bf = m_recv.left(UPFRAME_BYTELEN);
				m_recv.remove(0, UPFRAME_BYTELEN);
				UpFrame *upFrame = (UpFrame *)bf.data();
				if (upFrame->crc == crc16Check((uint8_t *)(&(upFrame->settingsInfo)), sizeof(SettingsInfo)))
					emit serialChanged(upFrame->settingsInfo);
			}
		}
	}
#endif
}

bool Serial::sendSerial(const QByteArray &data)
{
	if (m_serial->write(data) != -1) {
		qDebug() << "Send serial port data succeeded.";
		return true;
	}
	else {
		qDebug() << "Send serial port data failed.";
		return false;
	}
}
