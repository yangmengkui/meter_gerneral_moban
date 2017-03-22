#ifndef SERIALTRAN_H
#define SERIALTRAN_H

#include <QObject>
#include <QString>
#include<QDebug>

#include <serial.h>

class SerialTran : public QObject
{
	Q_OBJECT

    /*Q_PROPERTY 宏用来定义可通过元对象系统访问的属性，通过它定义的属性，
      可以在 QML 中访问、修改，也可以在属性变化时发射特定的信号。
      要想使用 Q_PROPERTY 宏，你的类必须是 QObject 的后裔，
     必须在类首使用 Q_OBJECT 宏。*/



    /*READ 标记，如果你没有为属性指定 MEMBER 标记，则 READ 标记必不可少；
    声明一个读取属性的函数，该函数一般没有参数，返回定义的属性。
    WRITE 标记，可选配置。声明一个设定属性的函数。它指定的函数，只能有一个与属性类型匹配的参数，必须返回 void 。
    NOTIFY 标记，可选配置。给属性关联一个信号（该信号必须是已经在类中声明过的），当属性的值发生变化时就会触发该信号。
   信号的参数，一般就是你定义的属性。*/

    // all have
//	Q_PROPERTY(uint powerMemter READ powerMemter WRITE setPowerMemter NOTIFY powerMemterChanged)
//    Q_PROPERTY(bool leftFrontDoor READ leftFrontDoor WRITE setLeftFrontDoor NOTIFY leftFrontDoorChanged)
//    Q_PROPERTY(uint instrumentInterface READ instrumentInterface WRITE setInstrumentInterface NOTIFY instrumentInterfaceChanged)
//    Q_PROPERTY(uint tripA READ tripA WRITE setTripA NOTIFY tripAChanged)
//	Q_PROPERTY(uint dateTime READ dateTime WRITE setDateTime NOTIFY dateTimeChanged)

    Q_PROPERTY(uint powerMemter MEMBER m_powerMemter  /*NOTIFY powerMemterChanged*/)
    Q_PROPERTY(uint carSpeed MEMBER m_carSpeed   /*NOTIFY carSpeedChanged*/)
    Q_PROPERTY(uint ODO MEMBER m_ODO  /*NOTIFY ODOChanged*/)
    Q_PROPERTY(uint stalls MEMBER m_stalls   /*NOTIFY stallsChanged*/)
    Q_PROPERTY(bool stallsError MEMBER m_stallsError    /*NOTIFY stallsErrorChanged*/)
    Q_PROPERTY(uint powerStatus MEMBER m_powerStatus    /*NOTIFY powerStatusChanged*/)

    Q_PROPERTY(uint tripA MEMBER m_tripA   /*NOTIFY tripAChanged*/)
    Q_PROPERTY(uint tripB MEMBER m_tripB     /*NOTIFY tripBChanged*/)
    Q_PROPERTY(uint surplusMileage MEMBER m_surplusMileage    /*NOTIFY surplusMileageChanged*/)
    Q_PROPERTY(uint dateTime MEMBER m_dateTime   /*NOTIFY dateTimeChanged*/)

    Q_PROPERTY(bool leftFrontDoor MEMBER m_leftFrontDoor    /*NOTIFY leftFrontDoorChanged*/)
    Q_PROPERTY(bool leftBehindDoor MEMBER m_leftBehindDoor    /*NOTIFY leftBehindDoorChanged*/)
    Q_PROPERTY(bool rightFrontDoor MEMBER m_rightFrontDoor     /*NOTIFY rightFrontDoorChanged*/)
    Q_PROPERTY(bool rightBehindDoor MEMBER m_rightBehindDoor   /*NOTIFY rightBehindDoorChanged*/)
    Q_PROPERTY(bool hood MEMBER m_hood   /*NOTIFY hoodChanged*/)
    Q_PROPERTY(bool trunk MEMBER m_trunk    /*NOTIFY trunkChanged*/)
    Q_PROPERTY(uint instrumentInterface MEMBER m_instrumentInterface     /*NOTIFY instrumentInterfaceChanged*/)

    Q_PROPERTY(uint speedAlarm MEMBER m_speedAlarm    /*NOTIFY speedAlarmChanged*/)
    Q_PROPERTY(bool brakeFluidLow MEMBER m_brakeFluidLow  /*  NOTIFY brakeFluidLowChanged*/)
    Q_PROPERTY(bool parkError MEMBER m_parkError     /*NOTIFY parkErrorChanged*/)
    Q_PROPERTY(bool insulationError MEMBER m_insulationError    /*NOTIFY insulationErrorChanged*/)
    Q_PROPERTY(bool motorError MEMBER m_motorError    /*NOTIFY motorErrorChanged*/)
    Q_PROPERTY(bool leaveCar MEMBER m_leaveCar   /*NOTIFY leaveCarChanged*/)
    Q_PROPERTY(bool startPStalls MEMBER m_startPStalls    /*NOTIFY startPStallsChanged*/)
    Q_PROPERTY(uint drivingMode MEMBER m_drivingMode   /* NOTIFY drivingModeChanged*/)




	// not all have
    Q_PROPERTY(bool takeBrakeStart   MEMBER m_takeBrakeStart )
    Q_PROPERTY(bool driveMotorError   MEMBER m_driveMotorError )
    Q_PROPERTY(bool quickChangeInterface   MEMBER m_quickChangeInterface )
    Q_PROPERTY(uint quickChangeInterfaceInfo   MEMBER m_quickChangeInterfaceInfo)
    Q_PROPERTY(bool brakeLightError   MEMBER m_brakeLightError )
    Q_PROPERTY(bool illegalINvasion   MEMBER m_illegalINvasion )
    Q_PROPERTY(bool backLightError   MEMBER m_backLightError )
    Q_PROPERTY(bool frontLIghtError   MEMBER m_frontLIghtError )
    Q_PROPERTY(bool rightTurnLightError   MEMBER m_rightTurnLightError )
    Q_PROPERTY(bool leftTurnLightError   MEMBER m_leftTurnLightError )
    Q_PROPERTY(bool turnSteeringWheel   MEMBER m_turnSteeringWheel )
    Q_PROPERTY(bool steeringColumStartError   MEMBER m_steeringColumStartError )
    Q_PROPERTY(bool steeringColumLockErr   MEMBER m_steeringColumLockErr)
    Q_PROPERTY(bool keylessStartError   MEMBER m_keylessStartError )
    Q_PROPERTY(bool noSmartKey   MEMBER m_noSmartKey )
    Q_PROPERTY(bool smartKeyInCar   MEMBER m_smartKeyInCar )
    Q_PROPERTY(bool keyBatteryLow   MEMBER m_keyBatteryLow )
    Q_PROPERTY(bool elecSteeringLockUnlock   MEMBER m_elecSteeringLockUnlock)
    Q_PROPERTY(uint soc   MEMBER m_soc )
    Q_PROPERTY(bool wholeTheftIndication   MEMBER m_wholeTheftIndication )

    Q_PROPERTY(bool okBtn MEMBER m_okBtn   NOTIFY okBtnChanged)
    Q_PROPERTY(bool leftRotateBtn MEMBER m_leftRotateBtn   NOTIFY leftRotateBtnChanged)
    Q_PROPERTY(bool rightRotateBtn MEMBER m_rightRotateBtn   NOTIFY rightRotateBtnChanged)

    Q_PROPERTY(bool brakeEnergyRecoverIcon   MEMBER m_brakeEnergyRecoverIcon )
    Q_PROPERTY(uint energyRecoverStalls   MEMBER m_energyRecoverStalls )
    Q_PROPERTY(bool batteryWarningIndication   MEMBER m_batteryWarningIndication )
    Q_PROPERTY(bool readyIndication   MEMBER m_readyIndication )
    Q_PROPERTY(bool remoteIndication   MEMBER m_remoteIndication )
    Q_PROPERTY(bool highVoltageIndication   MEMBER m_highVoltageIndication )
    Q_PROPERTY(bool tirePressureError   MEMBER m_tirePressureError )
    Q_PROPERTY(bool seatBeltWarning   MEMBER m_seatBeltWarning )
    Q_PROPERTY(bool brakeSystemError   MEMBER m_brakeSystemError )
    Q_PROPERTY(bool EBDError   MEMBER m_EBDError )
    Q_PROPERTY(uint batteryTemperture   MEMBER m_batteryTemperture)
    Q_PROPERTY(bool hanbrake   MEMBER m_hanbrake )
    Q_PROPERTY(bool motorHotError   MEMBER m_motorHotError )
    Q_PROPERTY(bool chargingRemind   MEMBER m_chargingRemind )
    Q_PROPERTY(bool timeFormat   MEMBER m_timeFormat )
    Q_PROPERTY(uint maintenanceMileage   MEMBER m_maintenanceMileage )
    Q_PROPERTY(uint leftFrontTirePressure   MEMBER m_leftFrontTirePressure )
    Q_PROPERTY(uint leftRearTirePressure   MEMBER m_leftRearTirePressure)
    Q_PROPERTY(uint rightFrontTirePressure   MEMBER m_rightFrontTirePressure)
    Q_PROPERTY(uint rightRearTirePressure   MEMBER m_rightRearTirePressure )
    Q_PROPERTY(bool tirePressureStatus   MEMBER m_tirePressureStatus )
    Q_PROPERTY(uint leftFrontTPStatus   MEMBER m_leftFrontTPStatus )
    Q_PROPERTY(uint LCDScreen   MEMBER m_LCDScreen )
    Q_PROPERTY(uint rightFrontTPStatus   MEMBER m_rightFrontTPStatus )
    Q_PROPERTY(bool batteryError   MEMBER m_batteryError )
    Q_PROPERTY(uint leftRearTPStatus   MEMBER m_leftRearTPStatus )
    Q_PROPERTY(bool frontFogLightError   MEMBER m_frontFogLightError )
    Q_PROPERTY(uint rightRearTPStatus   MEMBER m_rightRearTPStatus )
    Q_PROPERTY(uint chargeStatus   MEMBER m_chargeStatus )
    Q_PROPERTY(bool backFogLightError   MEMBER m_backFogLightError )
    Q_PROPERTY(uint chargeCurrent   MEMBER m_chargeCurrent )
    Q_PROPERTY(uint chargeMode   MEMBER m_chargeMode )
    Q_PROPERTY(uint chargeHotStatus   MEMBER m_chargeHotStatus )
    Q_PROPERTY(bool smartKeyNotInCar   MEMBER m_smartKeyNotInCar )
    Q_PROPERTY(bool airbagError   MEMBER m_airbagError )
    Q_PROPERTY(bool rearviewMirrorFold   MEMBER m_rearviewMirrorFold )
    Q_PROPERTY(bool EPSError   MEMBER m_EPSError )
//    Q_PROPERTY(uint soc /*READ soc*/ WRITE setSoc /*NOTIFY socChanged*/)//参数是qml中的值，即qml传过来的

    Q_PROPERTY(uint mcuVer1 MEMBER m_mcuVer1 NOTIFY mcuVer1Changed)
    Q_PROPERTY(uint mcuVer2 MEMBER m_mcuVer2   NOTIFY mcuVer2Changed)
    Q_PROPERTY(uint mcuVer3 MEMBER m_mcuVer3   NOTIFY mcuVer3Changed)

    Q_PROPERTY(uint closeTime   MEMBER m_closeTime )

	// settings info
    Q_PROPERTY(bool tripAClear MEMBER m_tripAClear   NOTIFY tripAClearChanged)
public:
	explicit SerialTran(const QString &serialDev, QObject *parent = 0);

    //模拟器发送端READ后的函数一般不用写，NOTIFY后的信号也不用写，这样可以省去很多东西

//	// all have
//    uint powerMemter()const { return m_powerMemter; }
//    uint carSpeed()const {return m_carSpeed;}
//    uint ODO()const {return m_ODO;}
//    uint stalls()const {return m_stalls;}
//    bool stallsError()const {return m_stallsError;}
//    uint powerStatus()const {return m_powerStatus;}
//    uint tripA()const {return m_tripA;}
//    uint tripB()const {return m_tripB;}
//    uint surplusMileage()const {return m_surplusMileage;}//为什么这个不写会在moc_里报错呢

//    uint dateTime()const { return m_dateTime; }

//    bool leftFrontDoor()const {return m_leftFrontDoor;}
//    bool leftBehindDoor()const {return m_leftBehindDoor;}
//    bool rightFrontDoor()const {return m_rightFrontDoor;}
//    bool rightBehindDoor()const {return m_rightBehindDoor;}
//    bool hood()const {return m_hood;}
//    bool trunk()const {return m_trunk;}
//    uint instrumentInterface()const{return m_instrumentInterface;}
//    uint speedAlarm()const {return m_speedAlarm;}
//    bool brakeFluidLow()const {return m_brakeFluidLow;}
//    bool parkError()const {return m_parkError;}
//    bool insulationError()const {return m_insulationError;}
//    bool motorError()const {return m_motorError;}
//    bool leaveCar()const {return m_leaveCar;}
//    bool startPStalls()const {return m_startPStalls;}
//    uint drivingMode()const {return m_drivingMode;}



//	// not all have
////    uint soc()const { qDebug()<<"66666666666";  return m_soc; }
//    uint soc();
//    bool okBtn()const { return m_okBtn; }
//	bool leftRotateBtn()const { return m_leftRotateBtn; }
//	bool rightRotateBtn()const { return m_rightRotateBtn; }
//	uint mcuVer1()const { return m_mcuVer1; }
//	uint mcuVer2()const { return m_mcuVer2; }
//	uint mcuVer3()const { return m_mcuVer3; }

//	// settings info
//	bool tripAClear()const { return m_tripAClear; }

	// all have
//	void setPowerMemter(uint);
//    void setCarSpeed(uint);
//    void setODO(uint);
//    void setStalls(uint);
//    void setStallsError(bool);
//    void setPowerStatus(uint);
//    void setTripA(uint);
//    void setTripB(uint);
//    void setSurplusMileage(uint);
//    void setDateTime(uint);
//    void setLeftFrontDoor(bool);
//    void setLeftBehindDoor(bool);
//    void setRightFrontDoor(bool);
//    void setRightBehindDoor(bool);
//    void setHood(bool);
//    void setTrunk(bool);
//    void setInstrumentInterface(uint);
//    void  setSpeedAlarm(uint);
//    void setBrakeFluidLow(bool);
//    void setParkError(bool);
//    void setInsulationError(bool);
//    void setMotorError(bool);
//    void setLeaveCar(bool);
//    void setStartPStalls(bool);
//    void setDrivingMode(bool);


//	// not all have

//   void  setTakeBrakeStart(bool);
//    void  setDriveMotorError (bool);
//    void  setQuickChangeInterface(bool);
//    void  setQuickChangeInterfaceInfo(uint);
//    void  setBrakeLightError(bool);
//    void  setIllegalINvasion(bool);
//    void  setBackLightError(bool);
//    void  setFrontLIghtError(bool);
//    void  setRightTurnLightError(bool);
//    void  setLeftTurnLightError(bool);
//    void  setTurnSteeringWheel(bool);
//    void  setSteeringColumStartError(bool);
//    void  setSteeringColumLockErr(bool);
//    void  setKeylessStartError(bool);
//    void  setNoSmartKey(bool);
//    void  setSmartKeyInCar(bool);
//    void  setKeyBatteryLow(bool);
//    void  setElecSteeringLockUnlock(bool);
//    void  setSoc(uint);
//    void  setWholeTheftIndication(bool);

//    void  setOkBtn(bool) ;
//    void  setLeftRotateBtn(bool);
//    void  setRightRotateBtn(bool);

//    void  setBrakeEnergyRecoverIcon(bool);
//    void  setEnergyRecoverStalls(uint);
//    void  setBatteryWarningIndication(bool);
//    void  setReadyIndication(bool);
//    void  setRemoteIndication(bool);
//    void  setHighVoltageIndication(bool);
//    void  setTirePressureError(bool);
//    void  setSeatBeltWarning(bool);
//    void  setBrakeSystemError(bool);
//    void  setEBDError(bool);
//    void  setBatteryTemperture(uint);
//    void  setHanbrake(bool);
//    void  setMotorHotError(bool);
//    void  setChargingRemind(bool);
//    void  setTimeFormat(bool);
//    void  setMaintenanceMileage(uint);
//    void  setLeftFrontTirePressure(uint);
//    void  setLeftRearTirePressure(uint);
//    void  setRightFrontTirePressure(uint);
//    void  setRightRearTirePressure(uint);
//    void  setTirePressureStatus(bool);
//    void  setLeftFrontTPStatus(uint);
//    void  setLCDScreen(uint);
//    void  setRightFrontTPStatus(uint);
//    void  setBatteryError(bool);
//    void  setLeftRearTPStatus(uint);
//    void  setFrontFogLightError(bool);
//    void  setRightRearTPStatus(uint);
//    void  setChargeStatus(uint);
//    void  setBackFogLightError(bool);
//    void  setChargeCurrent(uint);
//    void  setChargeMode(uint);
//    void  setChargeHotStatus(uint);
//    void  setSmartKeyNotInCar(bool);
//    void  setAirbagError(bool);
//    void  setRearviewMirrorFold(bool);
//    void  setEPSError(bool);

//     void setMcuVer1(uint);
//     void setMcuVer2(uint);
//     void setMcuVer3(uint);

//     void setCloseTime (uint);



//	// settings info
//	void setTripAClear(bool);

	Q_INVOKABLE void sendDownFrame();

signals:
	// all have
	void powerMemterChanged(uint);
    void leftFrontDoorChanged(bool);
    void instrumentInterfaceChanged(bool);
    void tripAChanged(uint);
	void dateTimeChanged(uint);
	// not all have
	void socChanged(uint);
    void surplusMileageChanged(uint);
	void okBtnChanged(bool);
	void leftRotateBtnChanged(bool);
	void rightRotateBtnChanged(bool);

	void mcuVer1Changed(uint);
	void mcuVer2Changed(uint);
	void mcuVer3Changed(uint);

	// settings info
	void tripAClearChanged(bool);
	
private slots:
	void getSerial(SettingsInfo data);

private:
	// all have
    uint m_powerMemter;
    uint m_carSpeed;
    uint m_ODO;
    uint m_stalls;
    bool m_stallsError;
    uint m_powerStatus;
    uint m_tripA;
    uint m_tripB;
    uint m_surplusMileage;

    uint m_dateTime;

    bool m_leftFrontDoor;
    bool m_leftBehindDoor;
    bool m_rightFrontDoor;
    bool m_rightBehindDoor;
    bool m_hood;
    bool m_trunk;
    uint m_instrumentInterface;
    uint m_speedAlarm;
    bool m_brakeFluidLow;
    bool m_parkError;
     bool m_insulationError;
     bool m_motorError;
     bool m_leaveCar;
     bool m_startPStalls;
     uint m_drivingMode;

	// not all have
    bool m_takeBrakeStart;
    bool m_driveMotorError;
    bool m_quickChangeInterface;
    uint  m_quickChangeInterfaceInfo;
    bool m_brakeLightError;
    bool m_illegalINvasion;
    bool m_backLightError;
    bool m_frontLIghtError;
    bool m_rightTurnLightError;
    bool  m_leftTurnLightError;
    bool  m_turnSteeringWheel;
    bool m_steeringColumStartError;
    bool  m_steeringColumLockErr;
    bool m_keylessStartError;
    bool m_noSmartKey;
    bool    m_smartKeyInCar;
    bool  m_keyBatteryLow;
    bool m_elecSteeringLockUnlock;
    uint   m_soc;
    bool   m_wholeTheftIndication;
//------------------------------------------------------------------------------
    bool    m_okBtn;
    bool    m_leftRotateBtn;
    bool   m_rightRotateBtn;

    bool   m_brakeEnergyRecoverIcon;
    uint      m_energyRecoverStalls;
    bool      m_batteryWarningIndication;
    bool           m_readyIndication;
    bool          m_remoteIndication;
    bool           m_highVoltageIndication;
    bool          m_tirePressureError;
    bool           m_seatBeltWarning;
    bool        m_brakeSystemError;
    bool         m_EBDError;
    uint     m_batteryTemperture;
    bool           m_hanbrake;
    bool        m_motorHotError;
    bool         m_chargingRemind;
    bool         m_timeFormat;
    uint        m_maintenanceMileage;
    uint       m_leftFrontTirePressure;
    uint         m_leftRearTirePressure;
    uint          m_rightFrontTirePressure;
    uint          m_rightRearTirePressure;
    bool         m_tirePressureStatus;
    uint           m_leftFrontTPStatus;
    uint           m_LCDScreen;
    uint          m_rightFrontTPStatus;
    bool           m_batteryError;
    uint          m_leftRearTPStatus;
    bool         m_frontFogLightError;
    uint      m_rightRearTPStatus;
    uint        m_chargeStatus;
    bool        m_backFogLightError;
    uint      m_chargeCurrent;
    uint      m_chargeMode;
    uint         m_chargeHotStatus;
    bool           m_smartKeyNotInCar;
    bool       m_airbagError;
    bool        m_rearviewMirrorFold;
    bool        m_EPSError;
    uint      m_mcuVer1;
    uint         m_mcuVer2;
    uint         m_mcuVer3;
    uint         m_closeTime;

	
	// settings info
	bool m_tripAClear;
	Serial *m_serial;
};

#endif // SERIALTRAN_H
