import QtQuick 2.0

Grid{//网格分布
	property alias mtext1: text1.text
	property string mtext2;
	property alias mtext3: text3.text;
//    property color color1;      //默认颜色黑色
    property color color1:"blue"

    rows: 1;//这个属性保存在网格的行数。rows:2
	Text {
		id: text1
		color:color1
	}

	Text {
		id: text2
		color: "#e53473"
		text: mtext2 + ";  "
	}

	Text {
		id: text3
		color: "#2ccc1e"
	}
}
