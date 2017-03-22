#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <stdint.h>

/*
 * general car information
 */
typedef struct{
	uint8_t powerMemter;
    uint8_t carSpeed;
    uint32_t ODO:24,
        stalls:3,
        stallsError:1,
        powerStatus:4;
    uint16_t tripA;
    uint16_t tripB;
    uint16_t surplusMileage;
	uint32_t dateTime;
    uint8_t leftFrontDoor:1,
        leftBehindDoor:1,
        rightFrontDoor:1,
        rightBehindDoor:1,
        hood:1,
        trunk:1,
        instrumentInterface:2;
    uint8_t speedAlarm;
    uint8_t brakeFluidLow:1,
        parkError:1,
        insulationError:1,
        motorError:1,
        leaveCar:1,
        startPStalls:1,
        drivingMode:2;

    uint8_t takeBrakeStart:1,
        driveMotorError:1,
        remain1:1,
        remain2:1,
        quickChangeInterface:1,
        quickChangeInterfaceInfo:3;
    uint8_t brakeLightError:1,
        illegalINvasion:1,
        backLightError:1,
        frontLIghtError:1,
        rightTurnLightError:1,
        leftTurnLightError:1,
        turnSteeringWheel:1,
        steeringColumStartError:1;
    uint8_t steeringColumLockErr:1,
         keylessStartError:1,
         remain3:1,
         noSmartKey:1,
         smartKeyInCar:1,
         remain4:1,
         keyBatteryLow:1,
         elecSteeringLockUnlock:1;

    uint8_t soc;

    uint8_t wholeTheftIndication: 1,
        okBtn: 1,
        leftRotateBtn: 1,
        rightRotateBtn: 1,
        brakeEnergyRecoverIcon:1,
        energyRecoverStalls:3;
    uint8_t batteryWarningIndication:1,
        readyIndication:1,
        remoteIndication:1,
        highVoltageIndication:1,
        tirePressureError:1,
        seatBeltWarning:1,
        brakeSystemError:1,
        EBDError:1;
    uint8_t batteryTemperture:4,
        hanbrake:1,
        motorHotError:1,
        chargingRemind:1,
        timeFormat:1;
    uint16_t maintenanceMileage;
    uint8_t leftFrontTirePressure;
    uint8_t leftRearTirePressure;
    uint8_t rightFrontTirePressure;
    uint8_t rightRearTirePressure;
    uint8_t tirePressureStatus:1,
        leftFrontTPStatus:3,
        LCDScreen:4;
    uint8_t rightFrontTPStatus:3,
        batteryError:1,
        leftRearTPStatus:3,
        frontFogLightError:1;
    uint8_t rightRearTPStatus:3,
        chargeStatus:4,
        backFogLightError:1;
    uint16_t chargeCurrent;
    uint8_t chargeMode:2,
        chargeHotStatus:2,
        smartKeyNotInCar:1,
        airbagError:1,
        rearviewMirrorFold:1,
        EPSError:1;
    uint8_t mcuVer1;
    uint8_t mcuVer2;
    uint8_t mcuVer3;
    uint8_t closeTime;
}__attribute__((packed)) CarInfo;

/*
 * frame sent by MCU
 */
typedef struct{
	uint8_t head;
	uint8_t length;
	uint8_t frameTypes;
	CarInfo carInfo;
	uint16_t crc;
	uint8_t tail;
}__attribute__((packed)) DownFrame;

/*
 * setting information
 */
typedef struct{
    uint32_t datatime;
	uint8_t tripAClear: 1,
        tripBClear:1,
        resetMaintenanceMileage:1,
        recoverOrigin:1,
        rearviewMirrorFold:2,
        timeFormate:2;
    uint8_t  setLCDScreen:4,
        Interface:2,
        remain:2;
    uint8_t overSpeed;
}__attribute__((packed)) SettingsInfo;

/*
 * frame sent by C50
 */
typedef struct{
	uint8_t head;
	uint8_t length;
	uint8_t frameTypes;
	SettingsInfo settingsInfo;
	uint16_t crc;
	uint8_t tail;
}__attribute__((packed)) UpFrame;

/*
 * C50 version
 */
#define C50VERSION_INFO "V 3.0"

/*
 * byte length for up and down frame
 */
#define UPFRAME_BYTELEN		(const int)(sizeof(UpFrame))
#define DOWNFRAME_BYTELEN	(const int)(sizeof(DownFrame))

/*
 * update frequency for up and down frame
 */
#define UPFRAME_FREQ 500
#define DOWNFRAME_FREQ 100

/*
 * baud rate for serial
 */
#define BAUD_RATE    QSerialPort::Baud115200
/*
 * crc16 check
 */
uint16_t crc16Check(uint8_t *ptr,uint8_t len);

#endif // PROTOCOL_H
