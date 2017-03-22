import QtQuick 2.2
import QtQuick.Controls 1.2

GroupBox {
	title: "Settings"

	Column {
		spacing: 2

		CheckBox {
			text: "tripAClear"
            onClicked: CarStatus.tripAClear = checked//默认cehecked：的属性为false，即前面方框里的勾不会显示出来
            Component.onCompleted: CarStatus.tripAClear = checked
            //如果这句话被注释，setTripAClear()函数里的qDebug将不会被执行到
		}
		Button {
			text: "send"
			width: 100
            onClicked: CarStatus.sendUpFrame()
		}
	}
}
