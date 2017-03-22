#include <QDebug>
#include <QDateTime>
#include <serial.h>
#include <carstatus.h>

//   ##name代替前面的name
#define ValueChangeSet(name, v) do{if(m_##name!=(v)){m_##name=(v); emit name##Changed(v); qDebug()<<QString(#name)<<(v);}}while(0)
//这里的emit发出的信号emit powerMemterChanged（）可以理解为他的connect是这个 Q_PROPERTY(uint powerMemter READ powerMemter NOTIFY powerMemterChanged)
//这里的emit name##Changed(v)是发给QML的，他的connect就相当于 Q_PROPERTY(uint powerMemter READ powerMemter NOTIFY powerMemterChanged)
CarStatus::CarStatus(const QString &serialDev, QObject *parent) :
    QObject(parent)
{
    initValues();
    m_serial = new Serial(serialDev, this);
#ifdef TIMER_FREQ
    //find the document ,you can find instructions.
    startTimer(UPFRAME_FREQ);//启动定时器，到了一定的时间，就会调用void HtCarStatus::timerEvent(QTimerEvent *event)这个函数
#endif
    connect(this, SIGNAL(buttonRightChanged(bool)), this, SLOT(buttonRightDeal(bool)));
    connect(this, SIGNAL(buttonLeftChanged(bool)), this, SLOT(buttonLeftDeal(bool)));
    connect(this, SIGNAL(buttonOkChanged(bool)), this, SLOT(buttonOkDeal(bool)));
    connect(m_serial, SIGNAL(serialChanged(CarInfo)), this, SLOT(getSerial(CarInfo)));
}

// all have
void CarStatus::setTime(uint v)
{
    QDateTime time;
    time.setTimeSpec(Qt::UTC);
    time.setTime_t(v);
    m_time = time.toString("hh:mm");
    emit timeChanged(m_time);
}

void CarStatus::setDate(uint v)
{/*setTime_t(v)设定日期和时间给予的自1970-01-01T00已通过秒数：00：00，协调世界时（Qt的:: UTC）。
    在不支持时区此功能的行为就好像本地时间是Qt的:: UTC系统。*/

    QDateTime date;
    date.setTimeSpec(Qt::UTC);
    date.setTime_t(v);
    m_date = date.toString("yyyy-MM-dd");//返回日期时间为一个字符串。 format参数决定了结果字符串的格式。
    emit dateChanged(m_date);
}

void CarStatus::initValues()
{
    m_active = true;
    qDebug()<<"1111111111111";
    // all have
    ValueChangeSet(powerMemter, 0);
    ValueChangeSet(tripA, 0);
    ValueChangeSet(leftFrontDoor,0);

    m_time = "14:00";
    m_date = "2000-01-01";
    emit dateChanged(m_date);//元对象系统，moc_
    emit timeChanged(m_time);

    // not all have
    m_soc=10;//因为初始化时，在构造函数时，加载main.qml之前就执行了..第一次运行程序时，要READ soc 的，将m_soc 返回到qml中去
    ValueChangeSet(surplusMileage,0);
    ValueChangeSet(instrumentInterface,1);
    setVersion(0, 0, 0);

    // settings info
    m_tripAClear = false; //    m_tripAClear = true;
    m_tripAClearFlag = false;
    m_buttonRightStep = 0;
    m_buttonLeftStep = 0;
    m_buttonOkStep = 0;
    m_buttonOkStepFlag = false;

#ifdef HUATAI_DEBUG
    m_buttonRight = false;
    m_buttonLeft = false;
    m_buttonOk = "NONE";
#endif
}

void CarStatus::setVersion(uint v1, uint v2, uint v3)
{
    QString mcuVersion, version;
    mcuVersion = QString("%1.%2.%3").arg(v1).arg(v2).arg(v3);
    if (m_mcuVersion == mcuVersion)
        return;
    m_version = C50VERSION_INFO + QString("/") + mcuVersion;
    qDebug()<<m_version;
    emit versionChanged(m_version);
}

#ifdef HUATAI_DEBUG
void CarStatus::setButtonRight(bool v)
{
    if (m_buttonRight == v)
        return;
    m_buttonRight = v;
    emit buttonRightShowChanged(v);
}

void CarStatus::setButtonLeft(bool v)
{
    if (m_buttonLeft == v)
        return;
    m_buttonLeft = v;
    emit buttonLeftShowChanged(v);
}

void CarStatus::setButtonOk(QString v)
{
    if (m_buttonOk == v)
        return;
    m_buttonOk = v;
    emit buttonOkShowChanged(v);
}
#endif

void CarStatus::sendButtonRight(bool v)
{
    emit buttonRightChanged(v);
}

void CarStatus::sendButtonLeft(bool v)
{
    emit buttonLeftChanged(v);
}

void CarStatus::sendButtonOk(bool v)
{
    emit buttonOkChanged(v);
}

void CarStatus::buttonRightDeal(bool v)
{
    if (m_buttonRightStep == 0 && v)
        ++m_buttonRightStep;
    // key debounce
    if (m_buttonRightStep >= 1 && m_buttonRightStep < KEY_DEBOUNCE_TIME) {
        if (!v) {
            m_buttonRightStep = 0;
        }
        ++m_buttonRightStep;
    }

    if (m_buttonRightStep == KEY_DEBOUNCE_TIME && v) {
        // the key is LeftButton
        ++m_buttonRightStep;
#ifdef HUATAI_DEBUG
        setButtonRight(true);
#else
        emit buttonRight();
#endif
    }

    if (m_buttonRightStep == KEY_DEBOUNCE_TIME + 1 && !v) {
        m_buttonRightStep = 0;
#ifdef HUATAI_DEBUG
        setButtonRight(false);
#endif
    }
}

void CarStatus::buttonLeftDeal(bool v)
{
    //初始化时，m_buttonLeftStep = 0，   m_leftRotateBtn = false;
    // downFrame.carInfo.leftRotateBtn = m_leftRotateBtn;
    //sendButtonLeft(data.leftRotateBtn);
    if (m_buttonLeftStep == 0 && v)
        ++m_buttonLeftStep;

    // key debounce
    if (m_buttonLeftStep >= 1 && m_buttonLeftStep < KEY_DEBOUNCE_TIME) {
        if (!v) {
            m_buttonLeftStep = 0;
        }
        ++m_buttonLeftStep;
    }

    if (m_buttonLeftStep == KEY_DEBOUNCE_TIME && v) {
        // the key is LeftButton
        ++m_buttonLeftStep;
#ifdef HUATAI_DEBUG
        setButtonLeft(true);
#else
        emit buttonLeft();
#endif
    }

    if (m_buttonLeftStep == KEY_DEBOUNCE_TIME + 1 && !v) {
        m_buttonLeftStep = 0;
#ifdef HUATAI_DEBUG
        setButtonLeft(false);
#endif
    }
}

//我们按下按钮时，会给MCU发送1，MCU收到1时，就会给HMI发送数据
//参数v可以通过qml界面上的checkBox来让其是true或者是false
void CarStatus::buttonOkDeal(bool v)//getSerial 获得串口信息时，要设置按钮
{
    if (m_buttonOkStep == 0 && v)
        ++m_buttonOkStep;

    // key debounce
    if (m_buttonOkStep >= 1 && m_buttonOkStep < KEY_DEBOUNCE_TIME) {
        if(!v) {
            m_buttonOkStep = 0;//这里面是会执行的.      v是false时，抖动一次后，m_buttonOkStep为1，
            //再收到MCU发来的数据后，
        }
        ++m_buttonOkStep;
    }

    // LongKey deal
    if (m_buttonOkStep >= KEY_DEBOUNCE_TIME && m_buttonOkStep < KEY_LONG_TIME) {
        if (!v) {
            if (m_buttonOkStepFlag) {
                // the key is shortButton
                m_buttonOkStep = 0;
#ifdef HUATAI_DEBUG
                setButtonOk("ShortButton");
#else
                emit buttonShort();
#endif
            }
            m_buttonOkStepFlag = true;
        }
        else {
            m_buttonOkStepFlag = false;
        }
        ++m_buttonOkStep;
    }

    if (m_buttonOkStep == KEY_LONG_TIME && v) {
        // the key is LongButton
        ++m_buttonOkStep;
#ifdef HUATAI_DEBUG
        setButtonOk("LongButton");
#else
        emit buttonLong();
#endif
    }

    if (m_buttonOkStep == KEY_LONG_TIME + 1 && !v) {
        m_buttonOkStep = 0;
#ifdef HUATAI_DEBUG
        setButtonOk("NONE");
#endif
    }
}

void CarStatus::setActive(bool v)
{
    if (m_active == v)
        return;
    m_active = v;
    qDebug()<<"22222222222222";
    m_soc = 110;
    //无用的，这里不像初始化里的吗m_soc=10,因为初始化时，第一次运行程序时，要READ soc 的，将m_soc 返回到qml中去
    if (m_active) {/*emit activeChanged(m_active);*///two !       emit activeChanged
        qDebug()<<"333333333333333333";
        qDebug()<<m_active;

        emit powerMemterChanged(m_powerMemter);
        emit leftFrontDoorChanged(m_leftFrontDoor);
        emit instrumentInterfaceChanged(m_instrumentInterface);
        emit tripAChanged(m_tripA);
        emit dateChanged(m_date);
        emit timeChanged(m_time);

        // not all have
       //这里的emit socChanged(v)是发给QML的,	可以理解为他的connect是这个Q_PROPERTY(uint soc READ soc NOTIFY socChanged)
        emit surplusMileageChanged(m_surplusMileage);
        emit versionChanged(m_version);
    }
}

//这里主要实现两个模拟器之间的数据传送，tran写，recv那边就能显示出来
void CarStatus::getSerial(CarInfo data)
{
    if (m_active) {
        //  initValues       m_tripAClearFlag = false;

        if (m_tripAClearFlag) {
            if (data.tripA <= 1) {
                m_tripAClearFlag = false;
                m_tripAClear = false;
            }
        }

        //All Have
        ValueChangeSet(powerMemter, data.powerMemter);
        ValueChangeSet(carSpeed, data.carSpeed);
        ValueChangeSet(ODO, data.ODO);
        ValueChangeSet(stalls, data.stalls);
        ValueChangeSet(stallsError, data.stallsError);
        ValueChangeSet(powerStatus, data.powerStatus);
        ValueChangeSet(tripA, data.tripA);
        ValueChangeSet(tripB, data.tripB);
        ValueChangeSet(surplusMileage, data.surplusMileage);

        setDate(data.dateTime);//the time will be display
        setTime(data.dateTime);

        ValueChangeSet(leftFrontDoor, data.leftFrontDoor);
        ValueChangeSet(leftBehindDoor, data.leftBehindDoor);
        ValueChangeSet(rightFrontDoor, data.rightFrontDoor);
        ValueChangeSet(rightBehindDoor, data.rightBehindDoor);
        ValueChangeSet(hood, data.hood);
        ValueChangeSet(trunk, data.trunk);
        ValueChangeSet(instrumentInterface, data.instrumentInterface);
        ValueChangeSet(speedAlarm, data.speedAlarm);
        ValueChangeSet(brakeFluidLow, data.brakeFluidLow);
        ValueChangeSet(parkError, data.parkError);
        ValueChangeSet(insulationError, data.insulationError);
        ValueChangeSet(motorError, data.motorError);

        ValueChangeSet(leaveCar,data.leaveCar);
        ValueChangeSet(startPStalls,data.startPStalls);
        ValueChangeSet(drivingMode,data.drivingMode);
        //这里的ValueChangeSet(instrumentInterface,data.instrumentInterface)
        //相当于setInstrumentInterface(instrumentInterface,data.instrumentInterface)

        // not all have
        ValueChangeSet(takeBrakeStart, data.takeBrakeStart);//这里主要实现两个模拟器之间的数据传送，(tran写，recv那边就能显示出来)
        ValueChangeSet(driveMotorError, data.driveMotorError);
        ValueChangeSet(quickChangeInterface, data.quickChangeInterface);
        ValueChangeSet(quickChangeInterfaceInfo, data.quickChangeInterfaceInfo);
        ValueChangeSet(brakeLightError,data.brakeLightError);
        ValueChangeSet(illegalINvasion, data.illegalINvasion);
        ValueChangeSet(backLightError, data.backLightError);
        ValueChangeSet(frontLIghtError, data.frontLIghtError);
        ValueChangeSet(rightTurnLightError, data.rightTurnLightError);
        ValueChangeSet(leftTurnLightError, data.leftTurnLightError);
        ValueChangeSet(turnSteeringWheel, data.turnSteeringWheel);
        ValueChangeSet(steeringColumStartError, data.steeringColumStartError);
        ValueChangeSet(steeringColumLockErr, data.steeringColumLockErr);
        ValueChangeSet(keylessStartError, data.keylessStartError);
        ValueChangeSet(noSmartKey, data.noSmartKey);
        ValueChangeSet(smartKeyInCar, data.smartKeyInCar);
        ValueChangeSet(keyBatteryLow, data.keyBatteryLow);
        ValueChangeSet(elecSteeringLockUnlock, data.elecSteeringLockUnlock);
        ValueChangeSet(soc, data.soc);
        ValueChangeSet(wholeTheftIndication, data.wholeTheftIndication);

        sendButtonRight(data.rightRotateBtn);
        sendButtonLeft(data.leftRotateBtn);
        sendButtonOk(data.okBtn);

        ValueChangeSet(brakeEnergyRecoverIcon, data.brakeEnergyRecoverIcon);
        ValueChangeSet(energyRecoverStalls, data.energyRecoverStalls);
        ValueChangeSet(batteryWarningIndication, data.batteryWarningIndication);
        ValueChangeSet(readyIndication, data.readyIndication);
        ValueChangeSet(remoteIndication, data.remoteIndication);
        ValueChangeSet(highVoltageIndication, data.highVoltageIndication);
        ValueChangeSet(tirePressureError, data.tirePressureError);
        ValueChangeSet(seatBeltWarning, data.seatBeltWarning);
        ValueChangeSet(brakeSystemError, data.brakeSystemError);
        ValueChangeSet(EBDError, data.EBDError);
        ValueChangeSet(batteryTemperture, data.batteryTemperture);
        ValueChangeSet(hanbrake, data.hanbrake);
        ValueChangeSet(motorHotError, data.motorHotError);
        ValueChangeSet(chargingRemind, data.chargingRemind);

        ValueChangeSet(timeFormat, data.timeFormat);

        ValueChangeSet(maintenanceMileage, data.maintenanceMileage);
        ValueChangeSet(leftFrontTirePressure, data.leftFrontTirePressure);
        ValueChangeSet(leftRearTirePressure, data.leftRearTirePressure);
        ValueChangeSet(rightFrontTirePressure, data.rightFrontTirePressure);
        ValueChangeSet(rightRearTirePressure, data.rightRearTirePressure);
        ValueChangeSet(tirePressureStatus, data.tirePressureStatus);
        ValueChangeSet(leftFrontTPStatus, data.leftFrontTPStatus);
        ValueChangeSet(LCDScreen, data.LCDScreen);
        ValueChangeSet(rightFrontTPStatus, data.rightFrontTPStatus);
        ValueChangeSet(batteryError, data.batteryError);
        ValueChangeSet(leftRearTPStatus, data.leftRearTPStatus);
        ValueChangeSet(frontFogLightError, data.frontFogLightError);
        ValueChangeSet(rightRearTPStatus, data.rightRearTPStatus);
        ValueChangeSet(chargeStatus, data.chargeStatus);
        ValueChangeSet(backFogLightError, data.backFogLightError);
        ValueChangeSet(chargeCurrent, data.chargeCurrent);
        ValueChangeSet(chargeMode, data.chargeMode);
        ValueChangeSet(chargeHotStatus, data.chargeHotStatus);
        ValueChangeSet(smartKeyNotInCar, data.smartKeyNotInCar);
        ValueChangeSet(airbagError, data.airbagError);
        ValueChangeSet(rearviewMirrorFold, data.rearviewMirrorFold);
        ValueChangeSet(EPSError, data.EPSError);
        setVersion(data.mcuVer1, data.mcuVer2, data.mcuVer3);
    }
}

#ifdef HUATAI_DEBUG
void CarStatus::sendUpFrame()
{
    setSerial();
}
#endif

void CarStatus::setSerial()
{
    UpFrame upFrame;
    memset(&upFrame, 0, sizeof(UpFrame));
    upFrame.head = 0xAA;
    upFrame.length = sizeof(SettingsInfo) + 2;
    upFrame.settingsInfo.tripAClear = m_tripAClear;
    upFrame.crc = crc16Check((uint8_t *)(&(upFrame.settingsInfo)), sizeof(SettingsInfo));
    upFrame.tail = 0x55;
    qDebug()<<"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    m_serial->sendSerial(QByteArray((char *)&upFrame, sizeof(UpFrame)));
}

#ifdef TIMER_FREQ
void CarStatus::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
    qDebug()<<"999999999999999";
    //Q_UNUSED() 没有实质性的作用，用来避免编译器警告.例如声明定义一个变量时，但未去使用它
    setSerial();/*就是这个原因导致recv一直在发数据，tran端一直在收数据，所以两个模拟器都开时，串口被打开，
    tran端setTripAClear就会隔一段时间，输出qDebug的内容     */
    //若注释了。recv点击send一下，发送一下,输出一次
    //或者注释recv.pro里的DEFINES += TIMER_FREQ，再把.h里出现的的对应内容也给注释掉，就不会报错
}
#endif
