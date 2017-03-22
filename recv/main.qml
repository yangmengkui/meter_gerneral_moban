import QtQuick 2.2
import QtQuick.Window 2.1
import QtQuick.Controls 1.2

Rectangle {
	width: 780
	height: 800

	CheckBox {
		x: 10
		y: 10
        checked: true         //一运行recv，就让openSerial前出现勾
//        checked: false           //一运行recv，让openSerial前没有出现勾

		text: "Open Serial"
        onClicked: CarStatus.active = checked//控制C++代码中的m_active,让其是true还是false
        Component.onCompleted: CarStatus.active = true//默认C++代码中的m_active是true
//        Component.onCompleted: CarStatus.active = false
	}

	AllHave {
		id: allHave
		x: 10
		y: 40
	}

	NotAllHave {
		id: notAllHave
        x: 200+20
		y: 10
	}

	Send {
		id: send
		x: 400
		y: 10
	}
}
