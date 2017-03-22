#include <QDebug>
#include <QTimer>
#include <QQuickView>
#include <QQmlEngine>
#include <QQmlContext>
#include <QGuiApplication>
#include <QCommandLineParser>
#include <QQmlApplicationEngine>

#include <tran.h>

int main(int argc, char *argv[])
{

	QGuiApplication app(argc, argv);

	QCommandLineParser parser;

    //通过QCommandLineOption类定义可能的命令行选项
    //Any argument that isn't an option (i.e. doesn't start with a -) is stored as a "positional argument".
	QCommandLineOption serialOption(QStringList() << "s" << "serial port device name", "specify serial port device", "serial", "ttyS2");

    //通过app.arguments()返回一系列的命令行参数
    //parser.parse(app.arguments());
    parser.addOption(serialOption);

    parser.process(app);

    //---------------------------------------------------------------------------------
//    //通过parser来解析一系列命令行参数
//       QString strValue = parser.value("serialOption");
//       //qCritical() << "p is" << strValue;
//       //打印出解析出来的命令行参数
//       printf("p is %s\n",strValue.toUtf8().data());
//       //表示的是language
//       strValue = parser.value("serialOption");
//       qDebug() << parser.positionalArguments();

//       Fail to open serial port:  "pt/25"
//        "No such file or directory"

    //-----------------------------------------------------------------------------------------


	QString serial = "ttyS2";
	if (parser.isSet(serialOption))
		serial = parser.value(serialOption);

    SerialTran serialTran(serial);//构造SerialTRan时，在其内部构造了串口
    qDebug()<<"5555555555555555";

	QQuickView viewer;
    viewer.rootContext()->setContextProperty("SerialTran", &serialTran);

	viewer.setSource(QUrl("qrc:///main.qml"));
	viewer.show();

	return app.exec();
   /* tran端一运行
    1111112222222
    Fail to open serial port:  "ttyS2"
     "Permission denied"
    5555555555555555
    777777777777777
    但先运行sudo python vserial.py，在运行tran时，就不会出现上面的代码*/
}
