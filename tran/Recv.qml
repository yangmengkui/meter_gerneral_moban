import QtQuick 2.2
import QtQuick.Controls 1.2

GroupBox {
	title: "Settings"

	Column {
		spacing: 2

		MText {
            mtext1: "tripAClear: "//自己增加的属性
			mtext2: SerialTran.tripAClear
            //bool tripAClear()const { return m_tripAClear; }
		}
	}
}
