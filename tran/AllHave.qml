import QtQuick 2.2
import QtQuick.Controls 1.2

GroupBox {
	title: "All Car Have"

	Column {
        spacing: 2
		Row {
			Text {
				text: "powerMemter(0-250): "
			}
			TextField {
				id: powerMemter
                Component.onCompleted: text = 0         //text=2
				onTextChanged: SerialTran.powerMemter =  text * 1
			}
		}
        Row {
            Text {
                text: "carSpeed(0-255): "
            }
            TextField {
                id: carSpeed
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.carSpeed =  text * 1
            }
        }
        Row {
            Text {
                text: "ODO(0-9999999): "
            }
            TextField {
                id: odo                                                              //千万不能大写，否则会出现错误，qml界面不会出来
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.ODO =  text * 1
            }
        }
        Row {
            Text {
                text: "stalls(0,1,2): "
            }
            TextField {
                id: stalls
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.stalls =  text * 1
            }
        }
        Row {
            CheckBox {
                id: stallsError
                text:"stallsError"
                onClicked:  SerialTran.stallsError =  checked
            }
        }
        Row {
            Text {
                text: "powerStatus(0,1,2): "
            }
            TextField {
                id: powerStatus
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.powerStatus =  text * 1
            }
        }
        Row {
            Text {
                text: "tripA(0-9999): "
            }
            TextField {
                id: tripA
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.tripA =  text * 1
            }
        }
        Row {
            Text {
                text: "tripB(0-9999): "
            }
            TextField {
                id: tripB
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.tripB =  text * 1
            }
        }
        Row {
            Text {
                text: "surplusMileage(0-5000): "
            }
            TextField {
                id: surplusMileage
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.surplusMileage =  text * 1
            }
        }
        Row {
            Text {
                text: "dateTime: "
            }
            TextField {
                id: dateTime
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.dateTime =  text * 1
            }
        }
        Row {
            CheckBox{
                id:leftFrontDoor
                text:"leftFrontDoor"
                onClicked: SerialTran.leftFrontDoor=checked
            }
        }
        Row {
            CheckBox{
                id:leftBehindDoor
                text:"leftBehindDoor"
                onClicked: SerialTran.leftBehindDoor=checked
            }
        }
        Row {
            CheckBox{
                id:rightFrontDoor
                text:"rightFrontDoor"
                onClicked: SerialTran.rightFrontDoor=checked
            }
        }
        Row {
            CheckBox{
                id:rightBehindDoor
                text:"rightBehindDoor"
                onClicked: SerialTran.rightBehindDoor=checked
            }
        }
        Row {
            CheckBox{
                id:hood
                text:"hood"
                onClicked: SerialTran.hood=checked
            }
        }
        Row {
            CheckBox{
                id:trunk
                text:"trunk"
                onClicked: SerialTran.trunk=checked
            }
        }

        Row {
            Text {
                text: "instrumentInterface(0,1,2,3): "
            }
            TextField {
                id: instrumentInterface
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.instrumentInterface =  text * 1
            }
        }
        Row {
            Text {
                text: "speedAlarm(0,1,2,3): "
            }
            TextField {
                id: speedAlarm
                Component.onCompleted: text = 0         //text=2
                onTextChanged: SerialTran.speedAlarm =  text * 1
            }
        }
        Row {
            CheckBox {
                text: "brakeFluidLow: "
                id: brakeFluidLow
                onClicked:SerialTran.brakeFluidLow =  checked
            }
        }
        Row {
            CheckBox {
                text: "parkError: "
                id: parkError
                onClicked:  SerialTran.parkError = checked
            }
        }
        Row {
            CheckBox {
                text: "insulationError: "
                id: insulationError
                onClicked:  SerialTran.insulationError = checked
            }
        }
        Row {
            CheckBox{
                text: "motorError: "
                id: motorError
               onClicked : SerialTran.motorError =  checked
            }
        }
        Row {
            CheckBox {
                text: "leaveCar: "
                id: leaveCar
                onClicked:  SerialTran.leaveCar =  checked
            }
        }
		Row {
            CheckBox{
                id: startPStalls
                text:"startPStalls"

                onClicked: SerialTran.startPStalls = checked
                //QML可以直接访问改数据元素的属性，该属性由QPROPERTY所申明。
                //    Q_PROPERTY(uint tripA READ tripA WRITE setTripA NOTIFY tripAChanged)
                //访问tripA了,READ，WRITE后的函数就要相应的执行，如果tripA发生了变化，信号也会被触发

                // SerialTran    serialTran(serial);           //defination objiect in mian.cpp
            }
		}

        Row{
            Text{
                text:"drivingMode"
            }
                TextField{
                      id:drivingMode
                      Component.onCompleted: text = 0
                      onTextChanged:SerialTran.drivingMode = text *1
                }
            }
        }
	}
