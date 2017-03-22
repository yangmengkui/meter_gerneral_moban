#include <QDebug>
#include <QByteArray>

#include <tran.h>
#include <serial.h>
#include <protocol.h>

#define ValueChangeSet(name, v) do{if(m_##name!=(v)){m_##name=(v); emit name##Changed(v); qDebug()<<QString(#name)<<(v);}}while(0)
//构造函数
SerialTran::SerialTran(const QString &serialDev, QObject *parent)
    : QObject(parent)
{qDebug()<<"1111112222222";
    // all have
     m_powerMemter = 0;
     m_carSpeed = 0;
     m_ODO = 0;
     m_stalls = 0;
     m_stallsError = false;
     m_powerStatus = 0;
     m_tripA = 0;
     m_tripB = 0;
     m_surplusMileage = 0;

     m_dateTime = 0;

     m_leftFrontDoor = false;
     m_leftBehindDoor = false;
     m_rightFrontDoor = false;
     m_rightBehindDoor = false;
     m_hood = false;
     m_trunk = false;
     m_instrumentInterface = 0;
     m_speedAlarm = 0;
     m_brakeFluidLow = false;
     m_parkError = false;
      m_insulationError = false;
      m_motorError = false;
      m_leaveCar = false;
      m_startPStalls = false;
      m_drivingMode = 0;

//    m_dateTime = 0;

    // not all have
       m_takeBrakeStart=false;
       m_driveMotorError=false;
       m_quickChangeInterface=false;
        m_quickChangeInterfaceInfo=0;
       m_brakeLightError=false;
       m_illegalINvasion=false;
       m_backLightError=false;
       m_frontLIghtError=false;
       m_rightTurnLightError=false;
        m_leftTurnLightError=false;
        m_turnSteeringWheel=false;
       m_steeringColumStartError=false;
        m_steeringColumLockErr=false;
       m_keylessStartError=false;
       m_noSmartKey=false;
          m_smartKeyInCar=false;
        m_keyBatteryLow=false;
       m_elecSteeringLockUnlock=false;
         m_soc=0;
         m_wholeTheftIndication=false;


    m_okBtn = false;
    m_leftRotateBtn = false;
    m_rightRotateBtn = false;

    // settings info
    m_tripAClear = false;


    m_serial = new Serial(serialDev, this);//初始化串口,构造了串口
    connect(m_serial, SIGNAL(serialChanged(SettingsInfo)), this, SLOT(getSerial(SettingsInfo)));
}

//void SerialTran::getSerial(SettingsInfo data)
//{
//	ValueChangeSet(dateTimeSet, data.dateTimeSet);
//	ValueChangeSet(tripClear, data.tripClear);
//	ValueChangeSet(setBackLight, data.setBackLight);
//	ValueChangeSet(setTheme, data.setTheme);
//	ValueChangeSet(setOverSpeed, data.setOverSpeed);
//}


void SerialTran::getSerial(SettingsInfo data)
{
    ValueChangeSet(tripAClear,data.tripAClear);
}

void SerialTran::sendDownFrame()
{
    DownFrame downFrame;
    qDebug()<<"aaaaaaaaaaaaaaaaaaaaaa";//tran一点击发送按钮，就会输出此qDebug的内容
    downFrame.head = 0xAA;
    downFrame.length = sizeof(CarInfo) + 2;
//all have
    downFrame.carInfo.powerMemter = m_powerMemter;
    downFrame.carInfo.carSpeed = m_carSpeed;
    downFrame.carInfo.ODO = m_ODO;
    downFrame.carInfo.stalls = m_stalls;
    downFrame.carInfo.stallsError = m_stallsError;
    downFrame.carInfo.powerStatus = m_powerStatus;
    downFrame.carInfo.tripA = m_tripA;
    downFrame.carInfo.tripB = m_tripB;
    downFrame.carInfo.surplusMileage = m_surplusMileage;
    downFrame.carInfo.dateTime = m_dateTime;
    downFrame.carInfo.leftFrontDoor = m_leftFrontDoor;
    downFrame.carInfo.leftBehindDoor = m_leftBehindDoor;
    downFrame.carInfo.rightFrontDoor = m_rightFrontDoor;
    downFrame.carInfo.rightBehindDoor = m_rightBehindDoor;
    downFrame.carInfo.hood = m_hood;
    downFrame.carInfo.trunk = m_trunk;
    downFrame.carInfo.instrumentInterface = m_instrumentInterface;

    downFrame.carInfo.speedAlarm = m_speedAlarm;
    downFrame.carInfo.brakeFluidLow = m_brakeFluidLow;
    downFrame.carInfo.parkError = m_parkError;
    downFrame.carInfo.insulationError = m_insulationError;
    downFrame.carInfo.motorError = m_motorError;
    downFrame.carInfo.leaveCar = m_leaveCar;
    downFrame.carInfo.startPStalls = m_startPStalls;
    downFrame.carInfo.drivingMode = m_drivingMode;

//not all have


    downFrame.carInfo.takeBrakeStart =m_takeBrakeStart;
    downFrame.carInfo.driveMotorError =m_driveMotorError;
    downFrame.carInfo.quickChangeInterface=m_quickChangeInterface;
            downFrame.carInfo.quickChangeInterfaceInfo=m_quickChangeInterfaceInfo;
            downFrame.carInfo.brakeLightError=m_brakeLightError;
            downFrame.carInfo.illegalINvasion=m_illegalINvasion;
            downFrame.carInfo.backLightError=m_backLightError;
            downFrame.carInfo.frontLIghtError=m_frontLIghtError;
            downFrame.carInfo.rightTurnLightError=m_rightTurnLightError;
            downFrame.carInfo.leftTurnLightError=m_leftTurnLightError;
            downFrame.carInfo.turnSteeringWheel=m_turnSteeringWheel;
            downFrame.carInfo.steeringColumStartError=m_steeringColumStartError;
            downFrame.carInfo.steeringColumLockErr=m_steeringColumLockErr;
            downFrame.carInfo.keylessStartError=m_keylessStartError;
            downFrame.carInfo.noSmartKey=m_noSmartKey;

            downFrame.carInfo.smartKeyInCar=m_smartKeyInCar;

            downFrame.carInfo.keyBatteryLow=m_keyBatteryLow;
            downFrame.carInfo.elecSteeringLockUnlock=m_elecSteeringLockUnlock;
            downFrame.carInfo.soc=m_soc;
            downFrame.carInfo.wholeTheftIndication=m_wholeTheftIndication;
            downFrame.carInfo.okBtn = m_okBtn;
            downFrame.carInfo.leftRotateBtn = m_leftRotateBtn;
            downFrame.carInfo.rightRotateBtn = m_rightRotateBtn;
            downFrame.carInfo.brakeEnergyRecoverIcon=m_brakeEnergyRecoverIcon;
            downFrame.carInfo.energyRecoverStalls=m_energyRecoverStalls;
            downFrame.carInfo.batteryWarningIndication=m_batteryWarningIndication;
            downFrame.carInfo.readyIndication=m_readyIndication;
            downFrame.carInfo.remoteIndication=m_remoteIndication;
            downFrame.carInfo.highVoltageIndication=m_highVoltageIndication;
            downFrame.carInfo.tirePressureError=m_tirePressureError;
            downFrame.carInfo.seatBeltWarning=m_seatBeltWarning;
            downFrame.carInfo.brakeSystemError=m_brakeSystemError;
            downFrame.carInfo.EBDError=m_EBDError;
            downFrame.carInfo.batteryTemperture=m_batteryTemperture;
            downFrame.carInfo.hanbrake=m_hanbrake;
            downFrame.carInfo.motorHotError=m_motorHotError;
            downFrame.carInfo.chargingRemind=m_chargingRemind;
            downFrame.carInfo.timeFormat=m_timeFormat;
            downFrame.carInfo.maintenanceMileage=m_maintenanceMileage;
            downFrame.carInfo.leftFrontTirePressure=m_leftFrontTirePressure;
            downFrame.carInfo.leftRearTirePressure=m_leftRearTirePressure;
            downFrame.carInfo.rightFrontTirePressure=m_rightFrontTirePressure;
            downFrame.carInfo.rightRearTirePressure=m_rightRearTirePressure;
            downFrame.carInfo.tirePressureStatus=m_tirePressureStatus;
            downFrame.carInfo.leftFrontTirePressure=m_leftFrontTirePressure;
            downFrame.carInfo.LCDScreen=m_LCDScreen;
            downFrame.carInfo.rightFrontTirePressure=m_rightFrontTirePressure;
            downFrame.carInfo.batteryError=m_batteryError;
            downFrame.carInfo.leftRearTPStatus=m_leftRearTPStatus;
            downFrame.carInfo.frontFogLightError=m_frontFogLightError;
            downFrame.carInfo.rightRearTPStatus=m_rightRearTPStatus;
            downFrame.carInfo.chargeStatus=m_chargeStatus;
            downFrame.carInfo.backFogLightError=m_backFogLightError;
            downFrame.carInfo.chargeCurrent=m_chargeCurrent;
            downFrame.carInfo.chargeMode=m_chargeMode;
            downFrame.carInfo.chargeHotStatus=m_chargeHotStatus;
            downFrame.carInfo.smartKeyNotInCar=m_smartKeyNotInCar;
            downFrame.carInfo.airbagError=m_airbagError;
            downFrame.carInfo.rearviewMirrorFold=m_rearviewMirrorFold;
            downFrame.carInfo.EPSError=m_EPSError;


    downFrame.carInfo.mcuVer1 = m_mcuVer1;
    downFrame.carInfo.mcuVer2 = m_mcuVer2;
    downFrame.carInfo.mcuVer3 = m_mcuVer3;

    downFrame.crc = crc16Check((uint8_t *)(&(downFrame.carInfo)), sizeof(CarInfo));
    downFrame.tail = 0x55;

    m_serial->sendSerial(QByteArray((char *)&downFrame, sizeof(DownFrame)));
}
