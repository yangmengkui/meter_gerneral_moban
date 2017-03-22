#ifndef CARSTATUS_H
#define CARSTATUS_H

#include <QString>
#include <QTimer>
#include <QTimerEvent>
#include<QDebug>
#include <serial.h>

/*
 * times for key debounce and long button
 */
#define KEY_DEBOUNCE_TIME 2     // 2 * 20ms = 40ms
#define KEY_LONG_TIME 50		// 50 * 20ms = 1000ms

class CarStatus : public QObject
{
	Q_OBJECT

	// all have

    /*Qt提供类似于一些编译器厂商提供的那些复杂的产权制度。然而，作为一个反编译与平台无关的库，
     * Qt不依赖于非标准的编译器功能，如__property或[属性]。
     *  Qt的解决方案，适用于任何标准C ++每一个平台Qt支持的编译器。
     * 它是基于元对象系统也提供经由信号和槽对象间通信。*/
    Q_PROPERTY(uint powerMemter  MEMBER m_powerMemter   NOTIFY powerMemterChanged)
    Q_PROPERTY(uint carSpeed MEMBER m_carSpeed  NOTIFY carSpeedChanged)
    Q_PROPERTY(uint ODO MEMBER m_ODO  NOTIFY ODOChanged)
    Q_PROPERTY(uint stalls MEMBER m_stalls  NOTIFY stallsChanged)
    Q_PROPERTY(bool stallsError MEMBER m_stallsError   NOTIFY stallsErrorChanged)
    Q_PROPERTY(uint powerStatus MEMBER m_powerStatus   NOTIFY powerStatusChanged)
    Q_PROPERTY(uint tripA MEMBER m_tripA NOTIFY tripAChanged)
    Q_PROPERTY(uint tripB MEMBER m_tripB   NOTIFY tripBChanged)
    Q_PROPERTY(uint surplusMileage MEMBER m_surplusMileage   NOTIFY surplusMileageChanged)

    Q_PROPERTY(QString date MEMBER m_date NOTIFY dateChanged)
    Q_PROPERTY(QString time MEMBER m_time NOTIFY timeChanged)

    Q_PROPERTY(bool leftFrontDoor MEMBER m_leftFrontDoor   NOTIFY leftFrontDoorChanged)
    Q_PROPERTY(bool leftBehindDoor MEMBER m_leftBehindDoor   NOTIFY leftBehindDoorChanged)
    Q_PROPERTY(bool rightFrontDoor MEMBER m_rightFrontDoor   NOTIFY rightFrontDoorChanged)
    Q_PROPERTY(bool rightBehindDoor MEMBER m_rightBehindDoor   NOTIFY rightBehindDoorChanged)
    Q_PROPERTY(bool hood MEMBER m_hood   NOTIFY hoodChanged)
    Q_PROPERTY(bool trunk MEMBER m_trunk   NOTIFY trunkChanged)
    Q_PROPERTY(uint instrumentInterface MEMBER m_instrumentInterface   NOTIFY instrumentInterfaceChanged)
    Q_PROPERTY(uint speedAlarm MEMBER m_speedAlarm   NOTIFY speedAlarmChanged)
    Q_PROPERTY(bool brakeFluidLow MEMBER m_brakeFluidLow   NOTIFY brakeFluidLowChanged)
    Q_PROPERTY(bool parkError MEMBER m_parkError   NOTIFY parkErrorChanged)
    Q_PROPERTY(bool insulationError MEMBER m_insulationError   NOTIFY insulationErrorChanged)
    Q_PROPERTY(bool motorError MEMBER m_motorError   NOTIFY motorErrorChanged)
    Q_PROPERTY(bool leaveCar MEMBER m_leaveCar   NOTIFY leaveCarChanged)
    Q_PROPERTY(bool startPStalls MEMBER m_startPStalls   NOTIFY startPStallsChanged)
    Q_PROPERTY(uint drivingMode MEMBER m_drivingMode   NOTIFY drivingModeChanged)

    Q_PROPERTY(bool active MEMBER m_active  NOTIFY activeChanged)

    // not all have
    Q_PROPERTY(bool takeBrakeStart MEMBER m_takeBrakeStart NOTIFY takeBrakeStartChanged)
    Q_PROPERTY(bool driveMotorError MEMBER m_driveMotorError NOTIFY driveMotorErrorChanged)
    Q_PROPERTY(bool quickChangeInterface MEMBER m_quickChangeInterface NOTIFY quickChangeInterfaceChanged)
    Q_PROPERTY(uint quickChangeInterfaceInfo MEMBER m_quickChangeInterfaceInfo NOTIFY quickChangeInterfaceInfoChanged)
    Q_PROPERTY(bool brakeLightError MEMBER m_brakeLightError NOTIFY brakeLightErrorChanged)
    Q_PROPERTY(bool illegalINvasion MEMBER m_illegalINvasion NOTIFY illegalINvasionChanged)
    Q_PROPERTY(bool backLightError MEMBER m_backLightError NOTIFY backLightErrorChanged)
    Q_PROPERTY(bool frontLIghtError MEMBER m_frontLIghtError NOTIFY frontLIghtErrorChanged)
    Q_PROPERTY(bool rightTurnLightError MEMBER m_rightTurnLightError NOTIFY rightTurnLightErrorChanged)
    Q_PROPERTY(bool leftTurnLightError MEMBER m_leftTurnLightError NOTIFY leftTurnLightErrorChanged)
    Q_PROPERTY(bool turnSteeringWheel MEMBER m_turnSteeringWheel NOTIFY turnSteeringWheelChanged)
    Q_PROPERTY(bool steeringColumStartError MEMBER m_steeringColumStartError NOTIFY steeringColumStartErrorChanged)
    Q_PROPERTY(bool steeringColumLockErr MEMBER m_steeringColumLockErr NOTIFY steeringColumLockErrChanged)
    Q_PROPERTY(bool keylessStartError MEMBER m_keylessStartError NOTIFY keylessStartErrorChanged)
    Q_PROPERTY(bool noSmartKey MEMBER m_noSmartKey NOTIFY noSmartKeyChanged)
    Q_PROPERTY(bool smartKeyInCar MEMBER m_smartKeyInCar NOTIFY smartKeyInCarChanged)
    Q_PROPERTY(bool keyBatteryLow MEMBER m_keyBatteryLow NOTIFY keyBatteryLowChanged)
    Q_PROPERTY(bool elecSteeringLockUnlock MEMBER m_elecSteeringLockUnlock NOTIFY elecSteeringLockUnlockChanged)
    Q_PROPERTY(uint soc MEMBER m_soc /*WRITE setSoc*/ NOTIFY socChanged)
    Q_PROPERTY(bool wholeTheftIndication MEMBER m_wholeTheftIndication NOTIFY wholeTheftIndicationChanged)
    Q_PROPERTY(bool brakeEnergyRecoverIcon MEMBER m_brakeEnergyRecoverIcon NOTIFY brakeEnergyRecoverIconChanged)
    Q_PROPERTY(uint energyRecoverStalls MEMBER m_energyRecoverStalls NOTIFY energyRecoverStallsChanged)
    Q_PROPERTY(bool batteryWarningIndication MEMBER m_batteryWarningIndication NOTIFY batteryWarningIndicationChanged)
    Q_PROPERTY(bool readyIndication MEMBER m_readyIndication NOTIFY readyIndicationChanged)
    Q_PROPERTY(bool remoteIndication MEMBER m_remoteIndication NOTIFY remoteIndicationChanged)
    Q_PROPERTY(bool highVoltageIndication MEMBER m_highVoltageIndication NOTIFY highVoltageIndicationChanged)
    Q_PROPERTY(bool tirePressureError MEMBER m_tirePressureError NOTIFY tirePressureErrorChanged)
    Q_PROPERTY(bool seatBeltWarning MEMBER m_seatBeltWarning NOTIFY seatBeltWarningChanged)
    Q_PROPERTY(bool brakeSystemError MEMBER m_brakeSystemError NOTIFY brakeSystemErrorChanged)
    Q_PROPERTY(bool EBDError MEMBER m_EBDError NOTIFY EBDErrorChanged)
    Q_PROPERTY(uint batteryTemperture MEMBER m_batteryTemperture NOTIFY batteryTempertureChanged)
    Q_PROPERTY(bool hanbrake MEMBER m_hanbrake NOTIFY hanbrakeChanged)
    Q_PROPERTY(bool motorHotError MEMBER m_motorHotError NOTIFY motorHotErrorChanged)
    Q_PROPERTY(bool chargingRemind MEMBER m_chargingRemind NOTIFY chargingRemindChanged)
    Q_PROPERTY(bool timeFormat MEMBER m_timeFormat NOTIFY timeFormatChanged)
    Q_PROPERTY(uint maintenanceMileage MEMBER m_maintenanceMileage NOTIFY maintenanceMileageChanged)
    Q_PROPERTY(uint leftFrontTirePressure MEMBER m_leftFrontTirePressure NOTIFY leftFrontTirePressureChanged)
    Q_PROPERTY(uint leftRearTirePressure MEMBER m_leftRearTirePressure NOTIFY leftRearTirePressureChanged)
    Q_PROPERTY(uint rightFrontTirePressure MEMBER m_rightFrontTirePressure NOTIFY rightFrontTirePressureChanged)
    Q_PROPERTY(uint rightRearTirePressure MEMBER m_rightRearTirePressure NOTIFY rightRearTirePressureChanged)
    Q_PROPERTY(bool tirePressureStatus MEMBER m_tirePressureStatus NOTIFY tirePressureStatusChanged)
    Q_PROPERTY(uint leftFrontTPStatus MEMBER m_leftFrontTPStatus NOTIFY leftFrontTPStatusChanged)
    Q_PROPERTY(uint LCDScreen MEMBER m_LCDScreen NOTIFY LCDScreenChanged)
    Q_PROPERTY(uint rightFrontTPStatus MEMBER m_rightFrontTPStatus NOTIFY rightFrontTPStatusChanged)
    Q_PROPERTY(bool batteryError MEMBER m_batteryError NOTIFY batteryErrorChanged)
    Q_PROPERTY(uint leftRearTPStatus MEMBER m_leftRearTPStatus NOTIFY leftRearTPStatusChanged)
    Q_PROPERTY(bool frontFogLightError MEMBER m_frontFogLightError NOTIFY frontFogLightErrorChanged)
    Q_PROPERTY(uint rightRearTPStatus MEMBER m_rightRearTPStatus NOTIFY rightRearTPStatusChanged)
    Q_PROPERTY(uint chargeStatus MEMBER m_chargeStatus NOTIFY chargeStatusChanged)
    Q_PROPERTY(bool backFogLightError MEMBER m_backFogLightError NOTIFY backFogLightErrorChanged)
    Q_PROPERTY(uint chargeCurrent MEMBER m_chargeCurrent NOTIFY chargeCurrentChanged)
    Q_PROPERTY(uint chargeMode MEMBER m_chargeMode  NOTIFY chargeModeChanged)
    Q_PROPERTY(uint chargeHotStatus MEMBER m_chargeHotStatus NOTIFY chargeHotStatusChanged)
    Q_PROPERTY(bool smartKeyNotInCar MEMBER m_smartKeyNotInCar NOTIFY smartKeyNotInCarChanged)
    Q_PROPERTY(bool airbagError MEMBER m_airbagError NOTIFY airbagErrorChanged)
    Q_PROPERTY(bool rearviewMirrorFold MEMBER m_rearviewMirrorFold NOTIFY rearviewMirrorFoldChanged)
    Q_PROPERTY(bool EPSError MEMBER m_EPSError NOTIFY EPSErrorChanged)
    Q_PROPERTY(uint closeTime MEMBER m_closeTime NOTIFY closeTimeChanged)

//    Q_PROPERTY(uint surplusMileage READ surplusMileage /*WRITE setSurplusMileage*/ NOTIFY surplusMileageChanged)
    // settings info
    Q_PROPERTY(bool tripAClear MEMBER m_tripAClear  NOTIFY tripAClearChanged)

#ifdef HUATAI_DEBUG
    Q_PROPERTY(bool buttonRight MEMBER m_buttonRight NOTIFY buttonRightShowChanged)
    Q_PROPERTY(bool buttonLeft MEMBER m_buttonLeft NOTIFY buttonLeftShowChanged)
    Q_PROPERTY(QString buttonOk MEMBER m_buttonOk NOTIFY buttonOkShowChanged)
#endif
    Q_PROPERTY(QString version MEMBER m_version NOTIFY versionChanged)
public:
    explicit CarStatus(const QString &serialDev, QObject *parent = 0);
    void setActive(bool);
    // settings info
    void setTripAClear(bool);
    // button info
    void sendButtonRight(bool);
    void sendButtonLeft(bool);
    void sendButtonOk(bool);

#ifdef HUATAI_DEBUG
    void setButtonRight(bool);
    void setButtonLeft(bool);
    void setButtonOk(QString);
#endif

#ifdef HUATAI_DEBUG
    Q_INVOKABLE void sendUpFrame();
#endif
    void setVersion(uint, uint, uint);

protected:
#ifdef TIMER_FREQ
    void timerEvent(QTimerEvent *event);
#endif

signals:
	// all have
	void powerMemterChanged(uint);
    void carSpeedChanged(uint);
    void ODOChanged(uint);
    void stallsChanged(uint);
    void stallsErrorChanged(bool);
    void powerStatusChanged(uint);
    void tripAChanged(uint);
    void tripBChanged(uint);
    void surplusMileageChanged(uint);
    void timeChanged(QString);
    void dateChanged(QString);
    void leftFrontDoorChanged(bool);
    void leftBehindDoorChanged(bool);
    void rightFrontDoorChanged(bool);
    void rightBehindDoorChanged(bool);
    void hoodChanged(bool);
    void trunkChanged(bool);
    void instrumentInterfaceChanged(uint);
    void speedAlarmChanged(uint);
    void brakeFluidLowChanged(bool);
    void parkErrorChanged(bool);
    void insulationErrorChanged(bool);
    void motorErrorChanged(bool);
    void leaveCarChanged(bool);
    void startPStallsChanged(bool);
    void drivingModeChanged(uint);

	void activeChanged(bool);

    // not all have
    void takeBrakeStartChanged(bool);
    void driveMotorErrorChanged(bool);
    void quickChangeInterfaceChanged(bool);
    void quickChangeInterfaceInfoChanged(uint);
    void brakeLightErrorChanged(bool);
    void illegalINvasionChanged(bool);
    void backLightErrorChanged(bool);
    void frontLIghtErrorChanged(bool);
    void rightTurnLightErrorChanged(bool);
    void leftTurnLightErrorChanged(bool);
    void turnSteeringWheelChanged(bool);
    void steeringColumStartErrorChanged(bool);
    void steeringColumLockErrChanged(bool);
    void keylessStartErrorChanged(bool);
    void noSmartKeyChanged(bool);
    void smartKeyInCarChanged(bool);
    void keyBatteryLowChanged(bool);
    void elecSteeringLockUnlockChanged(bool);
    void socChanged(uint);
    void wholeTheftIndicationChanged(bool);
    void brakeEnergyRecoverIconChanged(bool);
    void energyRecoverStallsChanged(uint);
    void batteryWarningIndicationChanged(bool);
    void readyIndicationChanged(bool);
    void remoteIndicationChanged(bool);
    void highVoltageIndicationChanged(bool);
    void tirePressureErrorChanged(bool);
    void seatBeltWarningChanged(bool);
    void brakeSystemErrorChanged(bool);
    void EBDErrorChanged(bool);
    void batteryTempertureChanged(uint);
    void hanbrakeChanged(bool);
    void motorHotErrorChanged(bool);
    void chargingRemindChanged(bool);
    void timeFormatChanged(bool);
    void maintenanceMileageChanged(uint);
    void leftFrontTirePressureChanged(uint);
    void leftRearTirePressureChanged(uint);
    void rightFrontTirePressureChanged(uint);
    void rightRearTirePressureChanged(uint);
    void tirePressureStatusChanged(bool);
    void leftFrontTPStatusChanged(uint);
    void LCDScreenChanged(uint);
    void rightFrontTPStatusChanged(uint);
    void batteryErrorChanged(bool);
    void leftRearTPStatusChanged(uint);
    void frontFogLightErrorChanged(bool);
    void rightRearTPStatusChanged(uint);
    void chargeStatusChanged(uint);
    void backFogLightErrorChanged(bool);
    void chargeCurrentChanged(uint);
    void chargeModeChanged(uint);
    void chargeHotStatusChanged(uint);
    void smartKeyNotInCarChanged(bool);
    void airbagErrorChanged(bool);
    void rearviewMirrorFoldChanged(bool);
    void EPSErrorChanged(bool);

    void versionChanged(QString);
    void closeTimeChanged(uint);


    // settings info
    void tripAClearChanged(bool);
    void buttonRightChanged(bool);
    void buttonLeftChanged(bool);
    void buttonOkChanged(bool);

#ifdef HUATAI_DEBUG
    void buttonRightShowChanged(bool);
    void buttonLeftShowChanged(bool);
    void buttonOkShowChanged(QString);
#else
    Q_INVOKABLE void buttonLeft();
    Q_INVOKABLE void buttonRight();
    Q_INVOKABLE void buttonShort();
    Q_INVOKABLE void buttonLong();
#endif

protected slots:
//	virtual void setSerial() = 0;
//	virtual void getSerial(CarInfo data) = 0;

    void setSerial();
    void getSerial(CarInfo date);

    // button info
    void buttonRightDeal(bool);
    void buttonLeftDeal(bool);
    void buttonOkDeal(bool);

protected:
    void initValues();
	// set date and time to string
	void setTime(uint);
	void setDate(uint);
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

	QString m_time;
	QString m_date;
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
	bool m_active;

	Serial *m_serial;

    // not all have
    bool  m_takeBrakeStart;
    bool  m_driveMotorError;
    bool  m_quickChangeInterface;
    uint   m_quickChangeInterfaceInfo;
    bool  m_brakeLightError;
    bool   m_illegalINvasion;
    bool   m_backLightError;
    bool   m_frontLIghtError;
    bool   m_rightTurnLightError;
    bool m_leftTurnLightError;
    bool   m_turnSteeringWheel;
    bool  m_steeringColumStartError;
    bool  m_steeringColumLockErr;
    bool  m_keylessStartError;
    bool  m_noSmartKey;
    bool  m_smartKeyInCar;
    bool  m_keyBatteryLow;
    bool  m_elecSteeringLockUnlock;
    uint  m_soc;
    bool  m_wholeTheftIndication;

    bool  m_brakeEnergyRecoverIcon;
    uint  m_energyRecoverStalls;
    bool  m_batteryWarningIndication;
    bool  m_readyIndication;
    bool  m_remoteIndication;
    bool  m_highVoltageIndication;
    bool  m_tirePressureError;
    bool m_seatBeltWarning;
    bool  m_brakeSystemError;
    bool  m_EBDError;
    uint  m_batteryTemperture;
    bool  m_hanbrake;
    bool  m_motorHotError;
    bool  m_chargingRemind;
    bool  m_timeFormat;
    uint  m_maintenanceMileage;
    uint m_leftFrontTirePressure;
    uint  m_leftRearTirePressure;
    uint  m_rightFrontTirePressure;
    uint  m_rightRearTirePressure;
    bool  m_tirePressureStatus;
    uint  m_leftFrontTPStatus;
    uint  m_LCDScreen;
    uint  m_rightFrontTPStatus;
    bool  m_batteryError;
    uint  m_leftRearTPStatus;
    bool  m_frontFogLightError;
    uint  m_rightRearTPStatus;
    uint  m_chargeStatus;
    uint  m_backFogLightError;
    uint  m_chargeCurrent;
    uint  m_chargeMode;
    uint  m_chargeHotStatus;
    bool  m_smartKeyNotInCar;
    bool  m_airbagError;
    bool  m_rearviewMirrorFold;
    bool m_EPSError;


     uint  m_mcuVer1;
     uint  m_mcuVer2;
     uint m_mcuVer3;
     uint  m_closeTime;


    QString m_mcuVersion;
    QString m_version;

    // settings info
    bool m_tripAClear;
    bool m_tripAClearFlag;


    uint m_buttonRightStep;
    uint m_buttonLeftStep;
    uint m_buttonOkStep;
    bool m_buttonOkStepFlag;
#ifdef HUATAI_DEBUG
    // button info
    bool m_buttonRight;
    bool m_buttonLeft;
    QString m_buttonOk;
#endif
};

#endif // CARSTATUS_H
