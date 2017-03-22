import QtQuick 2.2
import QtQuick.Window 2.1
import QtQuick.Controls 1.2

Rectangle {
    width: 800+200
    height: 600+200

	AllHave {
		id: allHave
		x: 10
		y: 10
	}

	NotAllHave {
		id: notAllHave
        x: 310+50
		y: 10
	}

	CheckBox {
		id: checkBox
		x: 650
		y: 50
		text: "autoSend"
	}

	Button {
		x: 650
		y: 70
		text: "send"
		width: 100
		onClicked: SerialTran.sendDownFrame()
	}

	Timer {
		id: timer
        interval: 20;//间隔20ms
		running: checkBox.checked;
		repeat: true
        //触发的;
		onTriggered: {
			SerialTran.sendDownFrame()
		}
	}


	Recv {
		id: recv
		x: 550
		y: 590
	}
}
