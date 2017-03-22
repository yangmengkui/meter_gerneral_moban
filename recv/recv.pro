# QT Modules
QT += qml quick  serialport

# Target
TARGET = recv#表述了目标文件的名称,即生成的应用程序的名字.qmake工具自动生成的qmake工程文件采用默认方式(TARGET的值为空),即应用程序的名字采用工程文件所在的文件夹的名字TARGET = hello
TEMPLATE = app#模块设置,一般设置为app(生成应用程序,默认),
# Extra Configs
DEFINES += HUATAI_B11
DEFINES += HUATAI_B21
DEFINES += TIMER_FREQ
DEFINES += HUATAI_RECV
DEFINES += HUATAI_DEBUG
#CONFIG(release, debug|release) {
 # DEFINES += QT_NO_DEBUG_OUTPUT
#}

# Sources and Headers
INCLUDEPATH += ../serial
HEADERS += \
    ../serial/serial.h \
    ../serial/protocol.h \
    ../serial/carstatus.h

SOURCES += main.cpp \
    ../serial/serial.cpp \
    ../serial/protocol.cpp \
    ../serial/carstatus.cpp

# Qml Files
OTHER_FILES += main.qml \
    MText.qml \
    AllHave.qml \
    NotAllHave.qml \
    Send.qml

# Resources
RESOURCES += qml.qrc
QMAKE_RESOURCE_FLAGS += -no-compress

target.path = /opt/HuaTai
INSTALLS += target

# Objects Pathes
DESTDIR = bin#指定生成的应用程序放置的目录
UI_DIR = build#指定uic命令将.ui文件转化成ui_*.h文件的存放的目录
MOC_DIR = build#指定moc命令将含Q_OBJECT的头文件转换成标准.h文件的存放目录
RCC_DIR = build#指定rcc命令将.qrc文件转换成qrc_*.h文件的存放目录
OBJECTS_DIR = build #描述了编译/连接应用程序过程中产生的中间文件存放的位置.

