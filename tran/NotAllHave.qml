import QtQuick 2.2
import QtQuick.Controls 1.2

GroupBox {
	title: "Not All Car Have"

	Column {
		spacing: 2

        CheckBox {
            text: "takeBrakeStart"
            onClicked: SerialTran.takeBrakeStart = checked
        }

        CheckBox {
            text: "driveMotorError"
            onClicked: SerialTran.driveMotorError = checked
        }

        CheckBox {
            text: "quickChangeInterface"
            onClicked: SerialTran.quickChangeInterface = checked
        }
        Row{
            Text{
                text:"quickChangeInterfaceInfo(0-7)"
            }
            TextField{
                id:quickChangeInterfaceInfo
                Component.onCompleted: text=0
                onTextChanged: SerialTran.quickChangeInterfaceInfo = text* 1
            }
        }

        CheckBox {
            text: "brakeLightError"
            onClicked: SerialTran.brakeLightError = checked
        }

        CheckBox {
            text: "illegalINvasion"
            onClicked: SerialTran.illegalINvasion = checked
        }

        CheckBox {
            text: "backLightError"
            onClicked: SerialTran.backLightError = checked
        }

        CheckBox {
            text: "frontLIghtError"
            onClicked: SerialTran.frontLIghtError = checked
        }

        CheckBox {
            text: "rightTurnLightError"
            onClicked: SerialTran.rightTurnLightError = checked
        }

        CheckBox {
            text: "leftTurnLightError"
            onClicked: SerialTran.leftTurnLightError = checked
        }

        CheckBox {
            text: "turnSteeringWheel"
            onClicked: SerialTran.turnSteeringWheel = checked
        }

        CheckBox {
            text: "steeringColumStartError"
            onClicked: SerialTran.steeringColumStartError = checked
        }

        CheckBox {
            text: "steeringColumLockErr"
            onClicked: SerialTran.steeringColumLockErr = checked
        }

        CheckBox {
            text: "keylessStartError"
            onClicked: SerialTran.keylessStartError = checked
        }

        CheckBox {
            text: "noSmartKey"
            onClicked: SerialTran.noSmartKey = checked
        }

        CheckBox {
            text: "smartKeyInCar"
            onClicked: SerialTran.smartKeyInCar = checked
        }

        CheckBox {
            text: "keyBatteryLow"
            onClicked: SerialTran.keyBatteryLow = checked
        }

        CheckBox {
            text: "elecSteeringLockUnlock"
            onClicked: SerialTran.elecSteeringLockUnlock = checked
        }
        Row {
            Text {
                text: "soc(0-250): "
            }
            TextField {
                id: soc
                Component.onCompleted: text = 0
                onTextChanged: SerialTran.soc = text * 1/*tran一启动，不注释，就会发现文本改变，
                setsoc（）里的qDebug的内容就会输出，若注释了qDebug就不会输出*/

                //emit socChanged告诉qmlsoc属性发生的变化，说属性发生了改变，qml中用到此属性的就去执行READ后的函数。
            }
        }

        CheckBox {
            text: "wholeTheftIndication"
            onClicked: SerialTran.wholeTheftIndication = checked
        }

        CheckBox {
            text: "okBtn"
            onClicked: SerialTran.okBtn = checked
        }
        CheckBox {
            text: "leftRotateBtn"
            onClicked: SerialTran.leftRotateBtn = checked
            //bool leftRotateBtn()const { return m_leftRotateBtn; }
        }
        CheckBox {
            text: "rightRotateBtn"
            onClicked: SerialTran.rightRotateBtn = checked
        }

        CheckBox {
            text: "brakeEnergyRecoverIcon"
            onClicked: SerialTran.brakeEnergyRecoverIcon = checked
        }
        Row{
            Text{
                text:"energyRecoverStalls(0-7)"
            }
            TextField{
                id:energyRecoverStalls
                Component.onCompleted: text=0
                onTextChanged: SerialTran.energyRecoverStalls = text* 1
            }
        }

        CheckBox {
            text: "batteryWarningIndication"
            onClicked: SerialTran.batteryWarningIndication = checked
        }

        CheckBox {
            text: "readyIndication"
            onClicked: SerialTran.readyIndication = checked
        }

        CheckBox {
            text: "remoteIndication"
            onClicked: SerialTran.remoteIndication = checked
        }

        CheckBox {
            text: "highVoltageIndication"
            onClicked: SerialTran.highVoltageIndication = checked
        }
        CheckBox {
            text: "tirePressureError"
            onClicked: SerialTran.tirePressureError = checked
        }
        CheckBox {
            text: "seatBeltWarning"
            onClicked: SerialTran.seatBeltWarning = checked
        }
        CheckBox {
            text: "brakeSystemError"
            onClicked: SerialTran.brakeSystemError = checked
        }
        CheckBox {
            text: "EBDError"
            onClicked: SerialTran.EBDError = checked
        }
        Row{
            Text{
                text:"batteryTemperture(0-15)"
            }
            TextField{
                id:batteryTemperture
                Component.onCompleted: text=0
                onTextChanged: SerialTran.batteryTemperture = text* 1
            }
        }
        CheckBox {
            text: "hanbrake"
            onClicked: SerialTran.hanbrake = checked
        }
        CheckBox {
            text: "motorHotError"
            onClicked: SerialTran.motorHotError = checked
        }
        CheckBox {
            text: "chargingRemind"
            onClicked: SerialTran.chargingRemind = checked
        }
        CheckBox {
            text: "timeFormat"
            onClicked: SerialTran.timeFormat = checked
        }
        Row{
            Text{
                text:"maintenanceMileage(0-65535)"
            }
            TextField{
                id:maintenanceMileage
                Component.onCompleted: text=0
                onTextChanged: SerialTran.maintenanceMileage = text* 1
            }
        }
        Row{
            Text{
                text:"leftFrontTirePressure(0-65535)"
            }
            TextField{
                id:leftFrontTirePressure
                Component.onCompleted: text=0
                onTextChanged: SerialTran.leftFrontTirePressure = text* 1
            }
        }
        Row{
            Text{
                text:"leftRearTirePressure(0-65535)"
            }
            TextField{
                id:leftRearTirePressure
                Component.onCompleted: text=0
                onTextChanged: SerialTran.leftRearTirePressure = text* 1
            }
        }
        Row{
            Text{
                text:"rightFrontTirePressure(0-65535)"
            }
            TextField{
                id:rightFrontTirePressure
                Component.onCompleted: text=0
                onTextChanged: SerialTran.rightFrontTirePressure = text* 1
            }
        }
        Row{
            Text{
                text:"rightRearTirePressure(0-65535)"
            }
            TextField{
                id:rightRearTirePressure
                Component.onCompleted: text=0
                onTextChanged: SerialTran.rightRearTirePressure = text* 1
            }
        }


        CheckBox {
            text: "tirePressureStatus"
            onClicked: SerialTran.tirePressureStatus = checked
        }
        Row{
            Text{
                text:"leftFrontTPStatus(0-65535)"
            }
            TextField{
                id:leftFrontTPStatus
                Component.onCompleted: text=0
                onTextChanged: SerialTran.leftFrontTPStatus = text* 1
            }
        }
        Row{
            Text{
                text:"LCDScreen(0-65535)"
            }
            TextField{
                id:lCDScreen
                Component.onCompleted: text=0
                onTextChanged: SerialTran.LCDScreen = text* 1
            }
        }

        CheckBox {
            text: "batteryError"
            onClicked: SerialTran.batteryError = checked
        }
        Row{
            Text{
                text:"leftRearTPStatus(0-7)"
            }
            TextField{
                id:leftRearTPStatus
                Component.onCompleted: text=0
                onTextChanged: SerialTran.leftRearTPStatus = text* 1
            }
        }
        CheckBox {
            text: "frontFogLightError"
            onClicked: SerialTran.frontFogLightError = checked
        }
        Row{
            Text{
                text:"rightRearTPStatus(0-7)"
            }
            TextField{
                id:rightRearTPStatus
                Component.onCompleted: text=0
                onTextChanged: SerialTran.rightRearTPStatus = text* 1
            }
        }
        Row{
            Text{
                text:"chargeStatus(0-7)"
            }
            TextField{
                id:chargeStatus
                Component.onCompleted: text=0
                onTextChanged: SerialTran.chargeStatus = text* 1
            }
        }
        CheckBox {
            text: "backFogLightError"
            onClicked: SerialTran.backFogLightError = checked
        }

        Row{
            Text{
                text:"chargeCurrent(0-65535)"
            }
            TextField{
                id:chargeCurrent
                Component.onCompleted: text=0
                onTextChanged: SerialTran.chargeCurrent = text* 1
            }
        }

        Row{
            Text{
                text:"chargeMode(0-3)"
            }
            TextField{
                id:chargeMode
                Component.onCompleted: text=0
                onTextChanged: SerialTran.chargeMode = text* 1
            }
        }

        Row{
            Text{
                text:"chargeHotStatus(0-3)"
            }
            TextField{
                id:chargeHotStatus
                Component.onCompleted: text=0
                onTextChanged: SerialTran.chargeHotStatus = text* 1
            }
        }

		CheckBox {
            text: "smartKeyNotInCar"
            onClicked: SerialTran.smartKeyNotInCar = checked
		}

        CheckBox {
            text: "airbagError"
            onClicked: SerialTran.airbagError = checked
        }

        CheckBox {
            text: "rearviewMirrorFold"
            onClicked: SerialTran.rearviewMirrorFold = checked
        }

        CheckBox {
            text: "EPSError"
            onClicked: SerialTran.EPSError = checked
        }
//---------------------------key-------------------------------------------------------
		Row {
			Text {
				text: "McuVersion(0-4): "
			}
			TextField {
				id: mcuVer1
				Component.onCompleted: text = 0
				onTextChanged: SerialTran.mcuVer1 = text * 1
			}
			TextField {
				id: mcuVer2
				Component.onCompleted: text = 0
				onTextChanged: SerialTran.mcuVer2 = text * 1
			}
			TextField {
				id: mcuVer3
				Component.onCompleted: text = 0
				onTextChanged: SerialTran.mcuVer3 = text * 1
			}
		}
	}
}
