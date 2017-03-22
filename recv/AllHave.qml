import QtQuick 2.2
import QtQuick.Controls 1.2

GroupBox {
	title: "All Car Have"

	Column {
        spacing: 2//列分布，每行之间的间距

		MText {
			mtext1: "powerMemter: "
            mtext2: CarStatus.powerMemter
		}
        MText {
            mtext1: "carSpeed: "
            mtext2: CarStatus.carSpeed
        }
        MText {
            mtext1: "ODO: "
            mtext2: CarStatus.ODO
        }
        MText {
            mtext1: "stalls: "
            mtext2: CarStatus.stalls
        }
        MText {
            mtext1: "stallsError: "
            mtext2: CarStatus.stallsError
        }
        MText {
            mtext1: "powerStatus: "
            mtext2: CarStatus.powerStatus
        }
        MText {
            mtext1: "tripA: "
            mtext2: CarStatus.tripA
        }
        MText {
            mtext1: "tripB: "
            mtext2: CarStatus.tripB
        }
        MText {
            mtext1: "surplusMileage: "
            mtext2: CarStatus.surplusMileage
        }



        MText {
            mtext1: "date: "
            mtext2: CarStatus.date
        }
        MText {
            mtext1: "time: "
            mtext2: CarStatus.time
        }




        MText {
            mtext1: "leftFrontDoor: "
            mtext2: CarStatus.leftFrontDoor
        }
        MText {
            mtext1: "leftBehindDoor: "
            mtext2: CarStatus.leftBehindDoor
        }
        MText {
            mtext1: "rightFrontDoor: "
            mtext2: CarStatus.rightFrontDoor
        }
        MText {
            mtext1: "rightBehindDoor: "
            mtext2: CarStatus.rightBehindDoor
        }
        MText {
            mtext1: "hood: "
            mtext2: CarStatus.hood
        }
        MText {
            mtext1: "trunk: "
            mtext2: CarStatus.trunk
        }
        MText {
            mtext1: "instrumentInterface: "
            mtext2: CarStatus.instrumentInterface
        }
        MText {
            mtext1: "speedAlarm: "
            mtext2: CarStatus.speedAlarm
        }



		MText {
            mtext1: "brakeFluidLow: "
            mtext2: CarStatus.brakeFluidLow
		}
        MText{
            mtext1: "parkError:"
            mtext2:CarStatus.parkError
        }
        MText{
            mtext1: "insulationError:"
            mtext2:CarStatus.insulationError
        }
        MText{
            mtext1: "motorError:"
            mtext2:CarStatus.motorError
        }
        MText{
            mtext1: "leaveCar:"
            mtext2:CarStatus.leaveCar
        }
        MText{
            mtext1: "startPStalls:"
            mtext2:CarStatus.startPStalls
        }
        MText{
            mtext1: "drivingMode:"
            mtext2:CarStatus.drivingMode
        }
	}
}
