#include <QDebug>
#include <QQuickView>
#include <QQmlEngine>
#include <QQmlContext>
#include <QGuiApplication>
#include <QCommandLineParser>
#include <QQmlApplicationEngine>
#include <carstatus.h>

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);

	QCommandLineParser parser;
	QCommandLineOption serialOption(QStringList() << "s" << "serial port device name", "specify serial port device", "serial", "ttyS2");
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

//       QCommandLineParser: option not defined: "serialOption"
//       p is
//       QCommandLineParser: option not defined: "serialOption"
//       ()

    //-----------------------------------------------------------------------------------------



	QString serial = "ttyS2";
	if (parser.isSet(serialOption))
		serial = parser.value(serialOption);

    CarStatus carStatus(serial);

	QQuickView viewer;
    //创建QML运行时，把这个类的一个对象设置为QML引擎上下文的属性：
    viewer.rootContext()->setContextProperty("CarStatus", &carStatus);
    // viewer.engine()->rootContext()->setContextProperty("msgBoard", &msgBoard);
    //  QQmlContext::setContextProperty(const QString & name, QObject * value)
	viewer.setSource(QUrl("qrc:///main.qml"));
    app.connect(viewer.engine(),&QQmlEngine::quit, &QGuiApplication::quit);
    //QMetaObject::Connection QObject::connect(const QObject * sender, const char * signal, const char * method, Qt::ConnectionType type = Qt::AutoConnection) const
    //viewer.engine()返回一个指针，用于实例QML组件的QQmlEngine。
    //QQmlEngine::quit()  This signal is emitted when the QML loaded by the engine would like to quit.
	viewer.show();

	return app.exec();
}
