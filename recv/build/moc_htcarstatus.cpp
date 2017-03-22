/****************************************************************************
** Meta object code from reading C++ file 'htcarstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../serial/htcarstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htcarstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HtCarStatus_t {
    QByteArrayData data[139];
    char stringdata0[2662];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HtCarStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HtCarStatus_t qt_meta_stringdata_HtCarStatus = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HtCarStatus"
QT_MOC_LITERAL(1, 12, 21), // "takeBrakeStartChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "driveMotorErrorChanged"
QT_MOC_LITERAL(4, 58, 27), // "quickChangeInterfaceChanged"
QT_MOC_LITERAL(5, 86, 31), // "quickChangeInterfaceInfoChanged"
QT_MOC_LITERAL(6, 118, 22), // "brakeLightErrorChanged"
QT_MOC_LITERAL(7, 141, 22), // "illegalINvasionChanged"
QT_MOC_LITERAL(8, 164, 21), // "backLightErrorChanged"
QT_MOC_LITERAL(9, 186, 22), // "frontLIghtErrorChanged"
QT_MOC_LITERAL(10, 209, 26), // "rightTurnLightErrorChanged"
QT_MOC_LITERAL(11, 236, 25), // "leftTurnLightErrorChanged"
QT_MOC_LITERAL(12, 262, 24), // "turnSteeringWheelChanged"
QT_MOC_LITERAL(13, 287, 30), // "steeringColumStartErrorChanged"
QT_MOC_LITERAL(14, 318, 27), // "steeringColumLockErrChanged"
QT_MOC_LITERAL(15, 346, 24), // "keylessStartErrorChanged"
QT_MOC_LITERAL(16, 371, 17), // "noSmartKeyChanged"
QT_MOC_LITERAL(17, 389, 20), // "smartKeyInCarChanged"
QT_MOC_LITERAL(18, 410, 20), // "keyBatteryLowChanged"
QT_MOC_LITERAL(19, 431, 29), // "elecSteeringLockUnlockChanged"
QT_MOC_LITERAL(20, 461, 10), // "socChanged"
QT_MOC_LITERAL(21, 472, 27), // "wholeTheftIndicationChanged"
QT_MOC_LITERAL(22, 500, 29), // "brakeEnergyRecoverIconChanged"
QT_MOC_LITERAL(23, 530, 26), // "energyRecoverStallsChanged"
QT_MOC_LITERAL(24, 557, 31), // "batteryWarningIndicationChanged"
QT_MOC_LITERAL(25, 589, 22), // "readyIndicationChanged"
QT_MOC_LITERAL(26, 612, 23), // "remoteIndicationChanged"
QT_MOC_LITERAL(27, 636, 28), // "highVoltageIndicationChanged"
QT_MOC_LITERAL(28, 665, 24), // "tirePressureErrorChanged"
QT_MOC_LITERAL(29, 690, 22), // "seatBeltWarningChanged"
QT_MOC_LITERAL(30, 713, 23), // "brakeSystemErrorChanged"
QT_MOC_LITERAL(31, 737, 15), // "EBDErrorChanged"
QT_MOC_LITERAL(32, 753, 24), // "batteryTempertureChanged"
QT_MOC_LITERAL(33, 778, 15), // "hanbrakeChanged"
QT_MOC_LITERAL(34, 794, 20), // "motorHotErrorChanged"
QT_MOC_LITERAL(35, 815, 21), // "chargingRemindChanged"
QT_MOC_LITERAL(36, 837, 17), // "timeFormatChanged"
QT_MOC_LITERAL(37, 855, 25), // "maintenanceMileageChanged"
QT_MOC_LITERAL(38, 881, 28), // "leftFrontTirePressureChanged"
QT_MOC_LITERAL(39, 910, 27), // "leftRearTirePressureChanged"
QT_MOC_LITERAL(40, 938, 29), // "rightFrontTirePressureChanged"
QT_MOC_LITERAL(41, 968, 28), // "rightRearTirePressureChanged"
QT_MOC_LITERAL(42, 997, 25), // "tirePressureStatusChanged"
QT_MOC_LITERAL(43, 1023, 24), // "leftFrontTPStatusChanged"
QT_MOC_LITERAL(44, 1048, 16), // "LCDScreenChanged"
QT_MOC_LITERAL(45, 1065, 25), // "rightFrontTPStatusChanged"
QT_MOC_LITERAL(46, 1091, 19), // "batteryErrorChanged"
QT_MOC_LITERAL(47, 1111, 23), // "leftRearTPStatusChanged"
QT_MOC_LITERAL(48, 1135, 25), // "frontFogLightErrorChanged"
QT_MOC_LITERAL(49, 1161, 24), // "rightRearTPStatusChanged"
QT_MOC_LITERAL(50, 1186, 19), // "chargeStatusChanged"
QT_MOC_LITERAL(51, 1206, 24), // "backFogLightErrorChanged"
QT_MOC_LITERAL(52, 1231, 20), // "chargeCurrentChanged"
QT_MOC_LITERAL(53, 1252, 17), // "chargeModeChanged"
QT_MOC_LITERAL(54, 1270, 22), // "chargeHotStatusChanged"
QT_MOC_LITERAL(55, 1293, 23), // "smartKeyNotInCarChanged"
QT_MOC_LITERAL(56, 1317, 18), // "airbagErrorChanged"
QT_MOC_LITERAL(57, 1336, 25), // "rearviewMirrorFoldChanged"
QT_MOC_LITERAL(58, 1362, 15), // "EPSErrorChanged"
QT_MOC_LITERAL(59, 1378, 14), // "versionChanged"
QT_MOC_LITERAL(60, 1393, 16), // "closeTimeChanged"
QT_MOC_LITERAL(61, 1410, 17), // "tripAClearChanged"
QT_MOC_LITERAL(62, 1428, 18), // "buttonRightChanged"
QT_MOC_LITERAL(63, 1447, 17), // "buttonLeftChanged"
QT_MOC_LITERAL(64, 1465, 15), // "buttonOkChanged"
QT_MOC_LITERAL(65, 1481, 22), // "buttonRightShowChanged"
QT_MOC_LITERAL(66, 1504, 21), // "buttonLeftShowChanged"
QT_MOC_LITERAL(67, 1526, 19), // "buttonOkShowChanged"
QT_MOC_LITERAL(68, 1546, 9), // "setSerial"
QT_MOC_LITERAL(69, 1556, 9), // "getSerial"
QT_MOC_LITERAL(70, 1566, 7), // "CarInfo"
QT_MOC_LITERAL(71, 1574, 4), // "date"
QT_MOC_LITERAL(72, 1579, 15), // "buttonRightDeal"
QT_MOC_LITERAL(73, 1595, 14), // "buttonLeftDeal"
QT_MOC_LITERAL(74, 1610, 12), // "buttonOkDeal"
QT_MOC_LITERAL(75, 1623, 11), // "sendUpFrame"
QT_MOC_LITERAL(76, 1635, 14), // "takeBrakeStart"
QT_MOC_LITERAL(77, 1650, 15), // "driveMotorError"
QT_MOC_LITERAL(78, 1666, 20), // "quickChangeInterface"
QT_MOC_LITERAL(79, 1687, 24), // "quickChangeInterfaceInfo"
QT_MOC_LITERAL(80, 1712, 15), // "brakeLightError"
QT_MOC_LITERAL(81, 1728, 15), // "illegalINvasion"
QT_MOC_LITERAL(82, 1744, 14), // "backLightError"
QT_MOC_LITERAL(83, 1759, 15), // "frontLIghtError"
QT_MOC_LITERAL(84, 1775, 19), // "rightTurnLightError"
QT_MOC_LITERAL(85, 1795, 18), // "leftTurnLightError"
QT_MOC_LITERAL(86, 1814, 17), // "turnSteeringWheel"
QT_MOC_LITERAL(87, 1832, 23), // "steeringColumStartError"
QT_MOC_LITERAL(88, 1856, 20), // "steeringColumLockErr"
QT_MOC_LITERAL(89, 1877, 17), // "keylessStartError"
QT_MOC_LITERAL(90, 1895, 10), // "noSmartKey"
QT_MOC_LITERAL(91, 1906, 13), // "smartKeyInCar"
QT_MOC_LITERAL(92, 1920, 13), // "keyBatteryLow"
QT_MOC_LITERAL(93, 1934, 22), // "elecSteeringLockUnlock"
QT_MOC_LITERAL(94, 1957, 3), // "soc"
QT_MOC_LITERAL(95, 1961, 20), // "wholeTheftIndication"
QT_MOC_LITERAL(96, 1982, 22), // "brakeEnergyRecoverIcon"
QT_MOC_LITERAL(97, 2005, 19), // "energyRecoverStalls"
QT_MOC_LITERAL(98, 2025, 24), // "batteryWarningIndication"
QT_MOC_LITERAL(99, 2050, 15), // "readyIndication"
QT_MOC_LITERAL(100, 2066, 16), // "remoteIndication"
QT_MOC_LITERAL(101, 2083, 21), // "highVoltageIndication"
QT_MOC_LITERAL(102, 2105, 17), // "tirePressureError"
QT_MOC_LITERAL(103, 2123, 15), // "seatBeltWarning"
QT_MOC_LITERAL(104, 2139, 16), // "brakeSystemError"
QT_MOC_LITERAL(105, 2156, 8), // "EBDError"
QT_MOC_LITERAL(106, 2165, 17), // "batteryTemperture"
QT_MOC_LITERAL(107, 2183, 8), // "hanbrake"
QT_MOC_LITERAL(108, 2192, 13), // "motorHotError"
QT_MOC_LITERAL(109, 2206, 14), // "chargingRemind"
QT_MOC_LITERAL(110, 2221, 10), // "timeFormat"
QT_MOC_LITERAL(111, 2232, 18), // "maintenanceMileage"
QT_MOC_LITERAL(112, 2251, 21), // "leftFrontTirePressure"
QT_MOC_LITERAL(113, 2273, 20), // "leftRearTirePressure"
QT_MOC_LITERAL(114, 2294, 22), // "rightFrontTirePressure"
QT_MOC_LITERAL(115, 2317, 21), // "rightRearTirePressure"
QT_MOC_LITERAL(116, 2339, 18), // "tirePressureStatus"
QT_MOC_LITERAL(117, 2358, 17), // "leftFrontTPStatus"
QT_MOC_LITERAL(118, 2376, 9), // "LCDScreen"
QT_MOC_LITERAL(119, 2386, 18), // "rightFrontTPStatus"
QT_MOC_LITERAL(120, 2405, 12), // "batteryError"
QT_MOC_LITERAL(121, 2418, 16), // "leftRearTPStatus"
QT_MOC_LITERAL(122, 2435, 18), // "frontFogLightError"
QT_MOC_LITERAL(123, 2454, 17), // "rightRearTPStatus"
QT_MOC_LITERAL(124, 2472, 12), // "chargeStatus"
QT_MOC_LITERAL(125, 2485, 17), // "backFogLightError"
QT_MOC_LITERAL(126, 2503, 13), // "chargeCurrent"
QT_MOC_LITERAL(127, 2517, 10), // "chargeMode"
QT_MOC_LITERAL(128, 2528, 15), // "chargeHotStatus"
QT_MOC_LITERAL(129, 2544, 16), // "smartKeyNotInCar"
QT_MOC_LITERAL(130, 2561, 11), // "airbagError"
QT_MOC_LITERAL(131, 2573, 18), // "rearviewMirrorFold"
QT_MOC_LITERAL(132, 2592, 8), // "EPSError"
QT_MOC_LITERAL(133, 2601, 9), // "closeTime"
QT_MOC_LITERAL(134, 2611, 10), // "tripAClear"
QT_MOC_LITERAL(135, 2622, 11), // "buttonRight"
QT_MOC_LITERAL(136, 2634, 10), // "buttonLeft"
QT_MOC_LITERAL(137, 2645, 8), // "buttonOk"
QT_MOC_LITERAL(138, 2654, 7) // "version"

    },
    "HtCarStatus\0takeBrakeStartChanged\0\0"
    "driveMotorErrorChanged\0"
    "quickChangeInterfaceChanged\0"
    "quickChangeInterfaceInfoChanged\0"
    "brakeLightErrorChanged\0illegalINvasionChanged\0"
    "backLightErrorChanged\0frontLIghtErrorChanged\0"
    "rightTurnLightErrorChanged\0"
    "leftTurnLightErrorChanged\0"
    "turnSteeringWheelChanged\0"
    "steeringColumStartErrorChanged\0"
    "steeringColumLockErrChanged\0"
    "keylessStartErrorChanged\0noSmartKeyChanged\0"
    "smartKeyInCarChanged\0keyBatteryLowChanged\0"
    "elecSteeringLockUnlockChanged\0socChanged\0"
    "wholeTheftIndicationChanged\0"
    "brakeEnergyRecoverIconChanged\0"
    "energyRecoverStallsChanged\0"
    "batteryWarningIndicationChanged\0"
    "readyIndicationChanged\0remoteIndicationChanged\0"
    "highVoltageIndicationChanged\0"
    "tirePressureErrorChanged\0"
    "seatBeltWarningChanged\0brakeSystemErrorChanged\0"
    "EBDErrorChanged\0batteryTempertureChanged\0"
    "hanbrakeChanged\0motorHotErrorChanged\0"
    "chargingRemindChanged\0timeFormatChanged\0"
    "maintenanceMileageChanged\0"
    "leftFrontTirePressureChanged\0"
    "leftRearTirePressureChanged\0"
    "rightFrontTirePressureChanged\0"
    "rightRearTirePressureChanged\0"
    "tirePressureStatusChanged\0"
    "leftFrontTPStatusChanged\0LCDScreenChanged\0"
    "rightFrontTPStatusChanged\0batteryErrorChanged\0"
    "leftRearTPStatusChanged\0"
    "frontFogLightErrorChanged\0"
    "rightRearTPStatusChanged\0chargeStatusChanged\0"
    "backFogLightErrorChanged\0chargeCurrentChanged\0"
    "chargeModeChanged\0chargeHotStatusChanged\0"
    "smartKeyNotInCarChanged\0airbagErrorChanged\0"
    "rearviewMirrorFoldChanged\0EPSErrorChanged\0"
    "versionChanged\0closeTimeChanged\0"
    "tripAClearChanged\0buttonRightChanged\0"
    "buttonLeftChanged\0buttonOkChanged\0"
    "buttonRightShowChanged\0buttonLeftShowChanged\0"
    "buttonOkShowChanged\0setSerial\0getSerial\0"
    "CarInfo\0date\0buttonRightDeal\0"
    "buttonLeftDeal\0buttonOkDeal\0sendUpFrame\0"
    "takeBrakeStart\0driveMotorError\0"
    "quickChangeInterface\0quickChangeInterfaceInfo\0"
    "brakeLightError\0illegalINvasion\0"
    "backLightError\0frontLIghtError\0"
    "rightTurnLightError\0leftTurnLightError\0"
    "turnSteeringWheel\0steeringColumStartError\0"
    "steeringColumLockErr\0keylessStartError\0"
    "noSmartKey\0smartKeyInCar\0keyBatteryLow\0"
    "elecSteeringLockUnlock\0soc\0"
    "wholeTheftIndication\0brakeEnergyRecoverIcon\0"
    "energyRecoverStalls\0batteryWarningIndication\0"
    "readyIndication\0remoteIndication\0"
    "highVoltageIndication\0tirePressureError\0"
    "seatBeltWarning\0brakeSystemError\0"
    "EBDError\0batteryTemperture\0hanbrake\0"
    "motorHotError\0chargingRemind\0timeFormat\0"
    "maintenanceMileage\0leftFrontTirePressure\0"
    "leftRearTirePressure\0rightFrontTirePressure\0"
    "rightRearTirePressure\0tirePressureStatus\0"
    "leftFrontTPStatus\0LCDScreen\0"
    "rightFrontTPStatus\0batteryError\0"
    "leftRearTPStatus\0frontFogLightError\0"
    "rightRearTPStatus\0chargeStatus\0"
    "backFogLightError\0chargeCurrent\0"
    "chargeMode\0chargeHotStatus\0smartKeyNotInCar\0"
    "airbagError\0rearviewMirrorFold\0EPSError\0"
    "closeTime\0tripAClear\0buttonRight\0"
    "buttonLeft\0buttonOk\0version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtCarStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
      63,  586, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      66,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  374,    2, 0x06 /* Public */,
       3,    1,  377,    2, 0x06 /* Public */,
       4,    1,  380,    2, 0x06 /* Public */,
       5,    1,  383,    2, 0x06 /* Public */,
       6,    1,  386,    2, 0x06 /* Public */,
       7,    1,  389,    2, 0x06 /* Public */,
       8,    1,  392,    2, 0x06 /* Public */,
       9,    1,  395,    2, 0x06 /* Public */,
      10,    1,  398,    2, 0x06 /* Public */,
      11,    1,  401,    2, 0x06 /* Public */,
      12,    1,  404,    2, 0x06 /* Public */,
      13,    1,  407,    2, 0x06 /* Public */,
      14,    1,  410,    2, 0x06 /* Public */,
      15,    1,  413,    2, 0x06 /* Public */,
      16,    1,  416,    2, 0x06 /* Public */,
      17,    1,  419,    2, 0x06 /* Public */,
      18,    1,  422,    2, 0x06 /* Public */,
      19,    1,  425,    2, 0x06 /* Public */,
      20,    1,  428,    2, 0x06 /* Public */,
      21,    1,  431,    2, 0x06 /* Public */,
      22,    1,  434,    2, 0x06 /* Public */,
      23,    1,  437,    2, 0x06 /* Public */,
      24,    1,  440,    2, 0x06 /* Public */,
      25,    1,  443,    2, 0x06 /* Public */,
      26,    1,  446,    2, 0x06 /* Public */,
      27,    1,  449,    2, 0x06 /* Public */,
      28,    1,  452,    2, 0x06 /* Public */,
      29,    1,  455,    2, 0x06 /* Public */,
      30,    1,  458,    2, 0x06 /* Public */,
      31,    1,  461,    2, 0x06 /* Public */,
      32,    1,  464,    2, 0x06 /* Public */,
      33,    1,  467,    2, 0x06 /* Public */,
      34,    1,  470,    2, 0x06 /* Public */,
      35,    1,  473,    2, 0x06 /* Public */,
      36,    1,  476,    2, 0x06 /* Public */,
      37,    1,  479,    2, 0x06 /* Public */,
      38,    1,  482,    2, 0x06 /* Public */,
      39,    1,  485,    2, 0x06 /* Public */,
      40,    1,  488,    2, 0x06 /* Public */,
      41,    1,  491,    2, 0x06 /* Public */,
      42,    1,  494,    2, 0x06 /* Public */,
      43,    1,  497,    2, 0x06 /* Public */,
      44,    1,  500,    2, 0x06 /* Public */,
      45,    1,  503,    2, 0x06 /* Public */,
      46,    1,  506,    2, 0x06 /* Public */,
      47,    1,  509,    2, 0x06 /* Public */,
      48,    1,  512,    2, 0x06 /* Public */,
      49,    1,  515,    2, 0x06 /* Public */,
      50,    1,  518,    2, 0x06 /* Public */,
      51,    1,  521,    2, 0x06 /* Public */,
      52,    1,  524,    2, 0x06 /* Public */,
      53,    1,  527,    2, 0x06 /* Public */,
      54,    1,  530,    2, 0x06 /* Public */,
      55,    1,  533,    2, 0x06 /* Public */,
      56,    1,  536,    2, 0x06 /* Public */,
      57,    1,  539,    2, 0x06 /* Public */,
      58,    1,  542,    2, 0x06 /* Public */,
      59,    1,  545,    2, 0x06 /* Public */,
      60,    1,  548,    2, 0x06 /* Public */,
      61,    1,  551,    2, 0x06 /* Public */,
      62,    1,  554,    2, 0x06 /* Public */,
      63,    1,  557,    2, 0x06 /* Public */,
      64,    1,  560,    2, 0x06 /* Public */,
      65,    1,  563,    2, 0x06 /* Public */,
      66,    1,  566,    2, 0x06 /* Public */,
      67,    1,  569,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      68,    0,  572,    2, 0x08 /* Private */,
      69,    1,  573,    2, 0x08 /* Private */,
      72,    1,  576,    2, 0x08 /* Private */,
      73,    1,  579,    2, 0x08 /* Private */,
      74,    1,  582,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      75,    0,  585,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      76, QMetaType::Bool, 0x00495003,
      77, QMetaType::Bool, 0x00495003,
      78, QMetaType::Bool, 0x00495003,
      79, QMetaType::UInt, 0x00495003,
      80, QMetaType::Bool, 0x00495003,
      81, QMetaType::Bool, 0x00495003,
      82, QMetaType::Bool, 0x00495003,
      83, QMetaType::Bool, 0x00495003,
      84, QMetaType::Bool, 0x00495003,
      85, QMetaType::Bool, 0x00495003,
      86, QMetaType::Bool, 0x00495003,
      87, QMetaType::Bool, 0x00495003,
      88, QMetaType::Bool, 0x00495003,
      89, QMetaType::Bool, 0x00495003,
      90, QMetaType::Bool, 0x00495003,
      91, QMetaType::Bool, 0x00495003,
      92, QMetaType::Bool, 0x00495003,
      93, QMetaType::Bool, 0x00495003,
      94, QMetaType::UInt, 0x00495003,
      95, QMetaType::Bool, 0x00495003,
      96, QMetaType::Bool, 0x00495003,
      97, QMetaType::UInt, 0x00495003,
      98, QMetaType::Bool, 0x00495003,
      99, QMetaType::Bool, 0x00495003,
     100, QMetaType::Bool, 0x00495003,
     101, QMetaType::Bool, 0x00495003,
     102, QMetaType::Bool, 0x00495003,
     103, QMetaType::Bool, 0x00495003,
     104, QMetaType::Bool, 0x00495003,
     105, QMetaType::Bool, 0x00495003,
     106, QMetaType::UInt, 0x00495003,
     107, QMetaType::Bool, 0x00495003,
     108, QMetaType::Bool, 0x00495003,
     109, QMetaType::Bool, 0x00495003,
     110, QMetaType::Bool, 0x00495003,
     111, QMetaType::UInt, 0x00495003,
     112, QMetaType::UInt, 0x00495003,
     113, QMetaType::UInt, 0x00495003,
     114, QMetaType::UInt, 0x00495003,
     115, QMetaType::UInt, 0x00495003,
     116, QMetaType::Bool, 0x00495003,
     117, QMetaType::UInt, 0x00495003,
     118, QMetaType::UInt, 0x00495003,
     119, QMetaType::UInt, 0x00495003,
     120, QMetaType::Bool, 0x00495003,
     121, QMetaType::UInt, 0x00495003,
     122, QMetaType::Bool, 0x00495003,
     123, QMetaType::UInt, 0x00495003,
     124, QMetaType::UInt, 0x00495003,
     125, QMetaType::Bool, 0x00495003,
     126, QMetaType::UInt, 0x00495003,
     127, QMetaType::UInt, 0x00495003,
     128, QMetaType::UInt, 0x00495003,
     129, QMetaType::Bool, 0x00495003,
     130, QMetaType::Bool, 0x00495003,
     131, QMetaType::Bool, 0x00495003,
     132, QMetaType::Bool, 0x00495003,
     133, QMetaType::UInt, 0x00495003,
     134, QMetaType::Bool, 0x00495003,
     135, QMetaType::Bool, 0x00495003,
     136, QMetaType::Bool, 0x00495003,
     137, QMetaType::QString, 0x00495003,
     138, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      56,
      58,
      59,
      63,
      64,
      65,
      57,

       0        // eod
};

void HtCarStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HtCarStatus *_t = static_cast<HtCarStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->takeBrakeStartChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->driveMotorErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->quickChangeInterfaceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->quickChangeInterfaceInfoChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->brakeLightErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->illegalINvasionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->backLightErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->frontLIghtErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->rightTurnLightErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->leftTurnLightErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->turnSteeringWheelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->steeringColumStartErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->steeringColumLockErrChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->keylessStartErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->noSmartKeyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->smartKeyInCarChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->keyBatteryLowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->elecSteeringLockUnlockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->socChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 19: _t->wholeTheftIndicationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->brakeEnergyRecoverIconChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->energyRecoverStallsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 22: _t->batteryWarningIndicationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->readyIndicationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->remoteIndicationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->highVoltageIndicationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->tirePressureErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->seatBeltWarningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->brakeSystemErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->EBDErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->batteryTempertureChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 31: _t->hanbrakeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->motorHotErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->chargingRemindChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->timeFormatChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->maintenanceMileageChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 36: _t->leftFrontTirePressureChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 37: _t->leftRearTirePressureChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 38: _t->rightFrontTirePressureChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 39: _t->rightRearTirePressureChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 40: _t->tirePressureStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->leftFrontTPStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 42: _t->LCDScreenChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 43: _t->rightFrontTPStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: _t->batteryErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->leftRearTPStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: _t->frontFogLightErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->rightRearTPStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 48: _t->chargeStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 49: _t->backFogLightErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->chargeCurrentChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 51: _t->chargeModeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 52: _t->chargeHotStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 53: _t->smartKeyNotInCarChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->airbagErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->rearviewMirrorFoldChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->EPSErrorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->versionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 58: _t->closeTimeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 59: _t->tripAClearChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->buttonRightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->buttonLeftChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->buttonOkChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->buttonRightShowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->buttonLeftShowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->buttonOkShowChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 66: _t->setSerial(); break;
        case 67: _t->getSerial((*reinterpret_cast< CarInfo(*)>(_a[1]))); break;
        case 68: _t->buttonRightDeal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: _t->buttonLeftDeal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->buttonOkDeal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->sendUpFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::takeBrakeStartChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::driveMotorErrorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::quickChangeInterfaceChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::quickChangeInterfaceInfoChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::brakeLightErrorChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::illegalINvasionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::backLightErrorChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::frontLIghtErrorChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::rightTurnLightErrorChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::leftTurnLightErrorChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::turnSteeringWheelChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::steeringColumStartErrorChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::steeringColumLockErrChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::keylessStartErrorChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::noSmartKeyChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::smartKeyInCarChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::keyBatteryLowChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::elecSteeringLockUnlockChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::socChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::wholeTheftIndicationChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::brakeEnergyRecoverIconChanged)) {
                *result = 20;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::energyRecoverStallsChanged)) {
                *result = 21;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::batteryWarningIndicationChanged)) {
                *result = 22;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::readyIndicationChanged)) {
                *result = 23;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::remoteIndicationChanged)) {
                *result = 24;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::highVoltageIndicationChanged)) {
                *result = 25;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::tirePressureErrorChanged)) {
                *result = 26;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::seatBeltWarningChanged)) {
                *result = 27;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::brakeSystemErrorChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::EBDErrorChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::batteryTempertureChanged)) {
                *result = 30;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::hanbrakeChanged)) {
                *result = 31;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::motorHotErrorChanged)) {
                *result = 32;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::chargingRemindChanged)) {
                *result = 33;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::timeFormatChanged)) {
                *result = 34;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::maintenanceMileageChanged)) {
                *result = 35;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::leftFrontTirePressureChanged)) {
                *result = 36;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::leftRearTirePressureChanged)) {
                *result = 37;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::rightFrontTirePressureChanged)) {
                *result = 38;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::rightRearTirePressureChanged)) {
                *result = 39;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::tirePressureStatusChanged)) {
                *result = 40;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::leftFrontTPStatusChanged)) {
                *result = 41;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::LCDScreenChanged)) {
                *result = 42;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::rightFrontTPStatusChanged)) {
                *result = 43;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::batteryErrorChanged)) {
                *result = 44;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::leftRearTPStatusChanged)) {
                *result = 45;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::frontFogLightErrorChanged)) {
                *result = 46;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::rightRearTPStatusChanged)) {
                *result = 47;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::chargeStatusChanged)) {
                *result = 48;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::backFogLightErrorChanged)) {
                *result = 49;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::chargeCurrentChanged)) {
                *result = 50;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::chargeModeChanged)) {
                *result = 51;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::chargeHotStatusChanged)) {
                *result = 52;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::smartKeyNotInCarChanged)) {
                *result = 53;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::airbagErrorChanged)) {
                *result = 54;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::rearviewMirrorFoldChanged)) {
                *result = 55;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::EPSErrorChanged)) {
                *result = 56;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::versionChanged)) {
                *result = 57;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::closeTimeChanged)) {
                *result = 58;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::tripAClearChanged)) {
                *result = 59;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::buttonRightChanged)) {
                *result = 60;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::buttonLeftChanged)) {
                *result = 61;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::buttonOkChanged)) {
                *result = 62;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::buttonRightShowChanged)) {
                *result = 63;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::buttonLeftShowChanged)) {
                *result = 64;
            }
        }
        {
            typedef void (HtCarStatus::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtCarStatus::buttonOkShowChanged)) {
                *result = 65;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HtCarStatus *_t = static_cast<HtCarStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->m_takeBrakeStart; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->m_driveMotorError; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->m_quickChangeInterface; break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->m_quickChangeInterfaceInfo; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->m_brakeLightError; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->m_illegalINvasion; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->m_backLightError; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_frontLIghtError; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->m_rightTurnLightError; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->m_leftTurnLightError; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->m_turnSteeringWheel; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->m_steeringColumStartError; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->m_steeringColumLockErr; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->m_keylessStartError; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->m_noSmartKey; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->m_smartKeyInCar; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->m_keyBatteryLow; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->m_elecSteeringLockUnlock; break;
        case 18: *reinterpret_cast< uint*>(_v) = _t->m_soc; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->m_wholeTheftIndication; break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->m_brakeEnergyRecoverIcon; break;
        case 21: *reinterpret_cast< uint*>(_v) = _t->m_energyRecoverStalls; break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->m_batteryWarningIndication; break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->m_readyIndication; break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->m_remoteIndication; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->m_highVoltageIndication; break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->m_tirePressureError; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->m_seatBeltWarning; break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->m_brakeSystemError; break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->m_EBDError; break;
        case 30: *reinterpret_cast< uint*>(_v) = _t->m_batteryTemperture; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->m_hanbrake; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->m_motorHotError; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->m_chargingRemind; break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->m_timeFormat; break;
        case 35: *reinterpret_cast< uint*>(_v) = _t->m_maintenanceMileage; break;
        case 36: *reinterpret_cast< uint*>(_v) = _t->m_leftFrontTirePressure; break;
        case 37: *reinterpret_cast< uint*>(_v) = _t->m_leftRearTirePressure; break;
        case 38: *reinterpret_cast< uint*>(_v) = _t->m_rightFrontTirePressure; break;
        case 39: *reinterpret_cast< uint*>(_v) = _t->m_rightRearTirePressure; break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->m_tirePressureStatus; break;
        case 41: *reinterpret_cast< uint*>(_v) = _t->m_leftFrontTPStatus; break;
        case 42: *reinterpret_cast< uint*>(_v) = _t->m_LCDScreen; break;
        case 43: *reinterpret_cast< uint*>(_v) = _t->m_rightFrontTPStatus; break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->m_batteryError; break;
        case 45: *reinterpret_cast< uint*>(_v) = _t->m_leftRearTPStatus; break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->m_frontFogLightError; break;
        case 47: *reinterpret_cast< uint*>(_v) = _t->m_rightRearTPStatus; break;
        case 48: *reinterpret_cast< uint*>(_v) = _t->m_chargeStatus; break;
        case 49: *reinterpret_cast< bool*>(_v) = _t->m_backFogLightError; break;
        case 50: *reinterpret_cast< uint*>(_v) = _t->m_chargeCurrent; break;
        case 51: *reinterpret_cast< uint*>(_v) = _t->m_chargeMode; break;
        case 52: *reinterpret_cast< uint*>(_v) = _t->m_chargeHotStatus; break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->m_smartKeyNotInCar; break;
        case 54: *reinterpret_cast< bool*>(_v) = _t->m_airbagError; break;
        case 55: *reinterpret_cast< bool*>(_v) = _t->m_rearviewMirrorFold; break;
        case 56: *reinterpret_cast< bool*>(_v) = _t->m_EPSError; break;
        case 57: *reinterpret_cast< uint*>(_v) = _t->m_closeTime; break;
        case 58: *reinterpret_cast< bool*>(_v) = _t->m_tripAClear; break;
        case 59: *reinterpret_cast< bool*>(_v) = _t->m_buttonRight; break;
        case 60: *reinterpret_cast< bool*>(_v) = _t->m_buttonLeft; break;
        case 61: *reinterpret_cast< QString*>(_v) = _t->m_buttonOk; break;
        case 62: *reinterpret_cast< QString*>(_v) = _t->m_version; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HtCarStatus *_t = static_cast<HtCarStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_takeBrakeStart != *reinterpret_cast< bool*>(_v)) {
                _t->m_takeBrakeStart = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->takeBrakeStartChanged(_t->m_takeBrakeStart);
            }
            break;
        case 1:
            if (_t->m_driveMotorError != *reinterpret_cast< bool*>(_v)) {
                _t->m_driveMotorError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->driveMotorErrorChanged(_t->m_driveMotorError);
            }
            break;
        case 2:
            if (_t->m_quickChangeInterface != *reinterpret_cast< bool*>(_v)) {
                _t->m_quickChangeInterface = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->quickChangeInterfaceChanged(_t->m_quickChangeInterface);
            }
            break;
        case 3:
            if (_t->m_quickChangeInterfaceInfo != *reinterpret_cast< uint*>(_v)) {
                _t->m_quickChangeInterfaceInfo = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->quickChangeInterfaceInfoChanged(_t->m_quickChangeInterfaceInfo);
            }
            break;
        case 4:
            if (_t->m_brakeLightError != *reinterpret_cast< bool*>(_v)) {
                _t->m_brakeLightError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->brakeLightErrorChanged(_t->m_brakeLightError);
            }
            break;
        case 5:
            if (_t->m_illegalINvasion != *reinterpret_cast< bool*>(_v)) {
                _t->m_illegalINvasion = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->illegalINvasionChanged(_t->m_illegalINvasion);
            }
            break;
        case 6:
            if (_t->m_backLightError != *reinterpret_cast< bool*>(_v)) {
                _t->m_backLightError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->backLightErrorChanged(_t->m_backLightError);
            }
            break;
        case 7:
            if (_t->m_frontLIghtError != *reinterpret_cast< bool*>(_v)) {
                _t->m_frontLIghtError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->frontLIghtErrorChanged(_t->m_frontLIghtError);
            }
            break;
        case 8:
            if (_t->m_rightTurnLightError != *reinterpret_cast< bool*>(_v)) {
                _t->m_rightTurnLightError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->rightTurnLightErrorChanged(_t->m_rightTurnLightError);
            }
            break;
        case 9:
            if (_t->m_leftTurnLightError != *reinterpret_cast< bool*>(_v)) {
                _t->m_leftTurnLightError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->leftTurnLightErrorChanged(_t->m_leftTurnLightError);
            }
            break;
        case 10:
            if (_t->m_turnSteeringWheel != *reinterpret_cast< bool*>(_v)) {
                _t->m_turnSteeringWheel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->turnSteeringWheelChanged(_t->m_turnSteeringWheel);
            }
            break;
        case 11:
            if (_t->m_steeringColumStartError != *reinterpret_cast< bool*>(_v)) {
                _t->m_steeringColumStartError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->steeringColumStartErrorChanged(_t->m_steeringColumStartError);
            }
            break;
        case 12:
            if (_t->m_steeringColumLockErr != *reinterpret_cast< bool*>(_v)) {
                _t->m_steeringColumLockErr = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->steeringColumLockErrChanged(_t->m_steeringColumLockErr);
            }
            break;
        case 13:
            if (_t->m_keylessStartError != *reinterpret_cast< bool*>(_v)) {
                _t->m_keylessStartError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->keylessStartErrorChanged(_t->m_keylessStartError);
            }
            break;
        case 14:
            if (_t->m_noSmartKey != *reinterpret_cast< bool*>(_v)) {
                _t->m_noSmartKey = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->noSmartKeyChanged(_t->m_noSmartKey);
            }
            break;
        case 15:
            if (_t->m_smartKeyInCar != *reinterpret_cast< bool*>(_v)) {
                _t->m_smartKeyInCar = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->smartKeyInCarChanged(_t->m_smartKeyInCar);
            }
            break;
        case 16:
            if (_t->m_keyBatteryLow != *reinterpret_cast< bool*>(_v)) {
                _t->m_keyBatteryLow = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->keyBatteryLowChanged(_t->m_keyBatteryLow);
            }
            break;
        case 17:
            if (_t->m_elecSteeringLockUnlock != *reinterpret_cast< bool*>(_v)) {
                _t->m_elecSteeringLockUnlock = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->elecSteeringLockUnlockChanged(_t->m_elecSteeringLockUnlock);
            }
            break;
        case 18:
            if (_t->m_soc != *reinterpret_cast< uint*>(_v)) {
                _t->m_soc = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->socChanged(_t->m_soc);
            }
            break;
        case 19:
            if (_t->m_wholeTheftIndication != *reinterpret_cast< bool*>(_v)) {
                _t->m_wholeTheftIndication = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->wholeTheftIndicationChanged(_t->m_wholeTheftIndication);
            }
            break;
        case 20:
            if (_t->m_brakeEnergyRecoverIcon != *reinterpret_cast< bool*>(_v)) {
                _t->m_brakeEnergyRecoverIcon = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->brakeEnergyRecoverIconChanged(_t->m_brakeEnergyRecoverIcon);
            }
            break;
        case 21:
            if (_t->m_energyRecoverStalls != *reinterpret_cast< uint*>(_v)) {
                _t->m_energyRecoverStalls = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->energyRecoverStallsChanged(_t->m_energyRecoverStalls);
            }
            break;
        case 22:
            if (_t->m_batteryWarningIndication != *reinterpret_cast< bool*>(_v)) {
                _t->m_batteryWarningIndication = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->batteryWarningIndicationChanged(_t->m_batteryWarningIndication);
            }
            break;
        case 23:
            if (_t->m_readyIndication != *reinterpret_cast< bool*>(_v)) {
                _t->m_readyIndication = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->readyIndicationChanged(_t->m_readyIndication);
            }
            break;
        case 24:
            if (_t->m_remoteIndication != *reinterpret_cast< bool*>(_v)) {
                _t->m_remoteIndication = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->remoteIndicationChanged(_t->m_remoteIndication);
            }
            break;
        case 25:
            if (_t->m_highVoltageIndication != *reinterpret_cast< bool*>(_v)) {
                _t->m_highVoltageIndication = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->highVoltageIndicationChanged(_t->m_highVoltageIndication);
            }
            break;
        case 26:
            if (_t->m_tirePressureError != *reinterpret_cast< bool*>(_v)) {
                _t->m_tirePressureError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->tirePressureErrorChanged(_t->m_tirePressureError);
            }
            break;
        case 27:
            if (_t->m_seatBeltWarning != *reinterpret_cast< bool*>(_v)) {
                _t->m_seatBeltWarning = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->seatBeltWarningChanged(_t->m_seatBeltWarning);
            }
            break;
        case 28:
            if (_t->m_brakeSystemError != *reinterpret_cast< bool*>(_v)) {
                _t->m_brakeSystemError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->brakeSystemErrorChanged(_t->m_brakeSystemError);
            }
            break;
        case 29:
            if (_t->m_EBDError != *reinterpret_cast< bool*>(_v)) {
                _t->m_EBDError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->EBDErrorChanged(_t->m_EBDError);
            }
            break;
        case 30:
            if (_t->m_batteryTemperture != *reinterpret_cast< uint*>(_v)) {
                _t->m_batteryTemperture = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->batteryTempertureChanged(_t->m_batteryTemperture);
            }
            break;
        case 31:
            if (_t->m_hanbrake != *reinterpret_cast< bool*>(_v)) {
                _t->m_hanbrake = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->hanbrakeChanged(_t->m_hanbrake);
            }
            break;
        case 32:
            if (_t->m_motorHotError != *reinterpret_cast< bool*>(_v)) {
                _t->m_motorHotError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->motorHotErrorChanged(_t->m_motorHotError);
            }
            break;
        case 33:
            if (_t->m_chargingRemind != *reinterpret_cast< bool*>(_v)) {
                _t->m_chargingRemind = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->chargingRemindChanged(_t->m_chargingRemind);
            }
            break;
        case 34:
            if (_t->m_timeFormat != *reinterpret_cast< bool*>(_v)) {
                _t->m_timeFormat = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->timeFormatChanged(_t->m_timeFormat);
            }
            break;
        case 35:
            if (_t->m_maintenanceMileage != *reinterpret_cast< uint*>(_v)) {
                _t->m_maintenanceMileage = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->maintenanceMileageChanged(_t->m_maintenanceMileage);
            }
            break;
        case 36:
            if (_t->m_leftFrontTirePressure != *reinterpret_cast< uint*>(_v)) {
                _t->m_leftFrontTirePressure = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->leftFrontTirePressureChanged(_t->m_leftFrontTirePressure);
            }
            break;
        case 37:
            if (_t->m_leftRearTirePressure != *reinterpret_cast< uint*>(_v)) {
                _t->m_leftRearTirePressure = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->leftRearTirePressureChanged(_t->m_leftRearTirePressure);
            }
            break;
        case 38:
            if (_t->m_rightFrontTirePressure != *reinterpret_cast< uint*>(_v)) {
                _t->m_rightFrontTirePressure = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->rightFrontTirePressureChanged(_t->m_rightFrontTirePressure);
            }
            break;
        case 39:
            if (_t->m_rightRearTirePressure != *reinterpret_cast< uint*>(_v)) {
                _t->m_rightRearTirePressure = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->rightRearTirePressureChanged(_t->m_rightRearTirePressure);
            }
            break;
        case 40:
            if (_t->m_tirePressureStatus != *reinterpret_cast< bool*>(_v)) {
                _t->m_tirePressureStatus = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->tirePressureStatusChanged(_t->m_tirePressureStatus);
            }
            break;
        case 41:
            if (_t->m_leftFrontTPStatus != *reinterpret_cast< uint*>(_v)) {
                _t->m_leftFrontTPStatus = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->leftFrontTPStatusChanged(_t->m_leftFrontTPStatus);
            }
            break;
        case 42:
            if (_t->m_LCDScreen != *reinterpret_cast< uint*>(_v)) {
                _t->m_LCDScreen = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->LCDScreenChanged(_t->m_LCDScreen);
            }
            break;
        case 43:
            if (_t->m_rightFrontTPStatus != *reinterpret_cast< uint*>(_v)) {
                _t->m_rightFrontTPStatus = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->rightFrontTPStatusChanged(_t->m_rightFrontTPStatus);
            }
            break;
        case 44:
            if (_t->m_batteryError != *reinterpret_cast< bool*>(_v)) {
                _t->m_batteryError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->batteryErrorChanged(_t->m_batteryError);
            }
            break;
        case 45:
            if (_t->m_leftRearTPStatus != *reinterpret_cast< uint*>(_v)) {
                _t->m_leftRearTPStatus = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->leftRearTPStatusChanged(_t->m_leftRearTPStatus);
            }
            break;
        case 46:
            if (_t->m_frontFogLightError != *reinterpret_cast< bool*>(_v)) {
                _t->m_frontFogLightError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->frontFogLightErrorChanged(_t->m_frontFogLightError);
            }
            break;
        case 47:
            if (_t->m_rightRearTPStatus != *reinterpret_cast< uint*>(_v)) {
                _t->m_rightRearTPStatus = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->rightRearTPStatusChanged(_t->m_rightRearTPStatus);
            }
            break;
        case 48:
            if (_t->m_chargeStatus != *reinterpret_cast< uint*>(_v)) {
                _t->m_chargeStatus = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->chargeStatusChanged(_t->m_chargeStatus);
            }
            break;
        case 49:
            if (_t->m_backFogLightError != *reinterpret_cast< bool*>(_v)) {
                _t->m_backFogLightError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->backFogLightErrorChanged(_t->m_backFogLightError);
            }
            break;
        case 50:
            if (_t->m_chargeCurrent != *reinterpret_cast< uint*>(_v)) {
                _t->m_chargeCurrent = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->chargeCurrentChanged(_t->m_chargeCurrent);
            }
            break;
        case 51:
            if (_t->m_chargeMode != *reinterpret_cast< uint*>(_v)) {
                _t->m_chargeMode = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->chargeModeChanged(_t->m_chargeMode);
            }
            break;
        case 52:
            if (_t->m_chargeHotStatus != *reinterpret_cast< uint*>(_v)) {
                _t->m_chargeHotStatus = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->chargeHotStatusChanged(_t->m_chargeHotStatus);
            }
            break;
        case 53:
            if (_t->m_smartKeyNotInCar != *reinterpret_cast< bool*>(_v)) {
                _t->m_smartKeyNotInCar = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->smartKeyNotInCarChanged(_t->m_smartKeyNotInCar);
            }
            break;
        case 54:
            if (_t->m_airbagError != *reinterpret_cast< bool*>(_v)) {
                _t->m_airbagError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->airbagErrorChanged(_t->m_airbagError);
            }
            break;
        case 55:
            if (_t->m_rearviewMirrorFold != *reinterpret_cast< bool*>(_v)) {
                _t->m_rearviewMirrorFold = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->rearviewMirrorFoldChanged(_t->m_rearviewMirrorFold);
            }
            break;
        case 56:
            if (_t->m_EPSError != *reinterpret_cast< bool*>(_v)) {
                _t->m_EPSError = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->EPSErrorChanged(_t->m_EPSError);
            }
            break;
        case 57:
            if (_t->m_closeTime != *reinterpret_cast< uint*>(_v)) {
                _t->m_closeTime = *reinterpret_cast< uint*>(_v);
                Q_EMIT _t->closeTimeChanged(_t->m_closeTime);
            }
            break;
        case 58:
            if (_t->m_tripAClear != *reinterpret_cast< bool*>(_v)) {
                _t->m_tripAClear = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->tripAClearChanged(_t->m_tripAClear);
            }
            break;
        case 59:
            if (_t->m_buttonRight != *reinterpret_cast< bool*>(_v)) {
                _t->m_buttonRight = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->buttonRightShowChanged(_t->m_buttonRight);
            }
            break;
        case 60:
            if (_t->m_buttonLeft != *reinterpret_cast< bool*>(_v)) {
                _t->m_buttonLeft = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->buttonLeftShowChanged(_t->m_buttonLeft);
            }
            break;
        case 61:
            if (_t->m_buttonOk != *reinterpret_cast< QString*>(_v)) {
                _t->m_buttonOk = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->buttonOkShowChanged(_t->m_buttonOk);
            }
            break;
        case 62:
            if (_t->m_version != *reinterpret_cast< QString*>(_v)) {
                _t->m_version = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->versionChanged(_t->m_version);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HtCarStatus::staticMetaObject = {
    { &CarStatus::staticMetaObject, qt_meta_stringdata_HtCarStatus.data,
      qt_meta_data_HtCarStatus,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HtCarStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtCarStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HtCarStatus.stringdata0))
        return static_cast<void*>(const_cast< HtCarStatus*>(this));
    return CarStatus::qt_metacast(_clname);
}

int HtCarStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CarStatus::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 72;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 63;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 63;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 63;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 63;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 63;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HtCarStatus::takeBrakeStartChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HtCarStatus::driveMotorErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HtCarStatus::quickChangeInterfaceChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HtCarStatus::quickChangeInterfaceInfoChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HtCarStatus::brakeLightErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HtCarStatus::illegalINvasionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HtCarStatus::backLightErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HtCarStatus::frontLIghtErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HtCarStatus::rightTurnLightErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HtCarStatus::leftTurnLightErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HtCarStatus::turnSteeringWheelChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HtCarStatus::steeringColumStartErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HtCarStatus::steeringColumLockErrChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HtCarStatus::keylessStartErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void HtCarStatus::noSmartKeyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void HtCarStatus::smartKeyInCarChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void HtCarStatus::keyBatteryLowChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void HtCarStatus::elecSteeringLockUnlockChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void HtCarStatus::socChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void HtCarStatus::wholeTheftIndicationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void HtCarStatus::brakeEnergyRecoverIconChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void HtCarStatus::energyRecoverStallsChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void HtCarStatus::batteryWarningIndicationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void HtCarStatus::readyIndicationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void HtCarStatus::remoteIndicationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void HtCarStatus::highVoltageIndicationChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void HtCarStatus::tirePressureErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void HtCarStatus::seatBeltWarningChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void HtCarStatus::brakeSystemErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void HtCarStatus::EBDErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void HtCarStatus::batteryTempertureChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void HtCarStatus::hanbrakeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void HtCarStatus::motorHotErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void HtCarStatus::chargingRemindChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void HtCarStatus::timeFormatChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void HtCarStatus::maintenanceMileageChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void HtCarStatus::leftFrontTirePressureChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void HtCarStatus::leftRearTirePressureChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void HtCarStatus::rightFrontTirePressureChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void HtCarStatus::rightRearTirePressureChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void HtCarStatus::tirePressureStatusChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void HtCarStatus::leftFrontTPStatusChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void HtCarStatus::LCDScreenChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void HtCarStatus::rightFrontTPStatusChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void HtCarStatus::batteryErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void HtCarStatus::leftRearTPStatusChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void HtCarStatus::frontFogLightErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void HtCarStatus::rightRearTPStatusChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void HtCarStatus::chargeStatusChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void HtCarStatus::backFogLightErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void HtCarStatus::chargeCurrentChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void HtCarStatus::chargeModeChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void HtCarStatus::chargeHotStatusChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void HtCarStatus::smartKeyNotInCarChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void HtCarStatus::airbagErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void HtCarStatus::rearviewMirrorFoldChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void HtCarStatus::EPSErrorChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void HtCarStatus::versionChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void HtCarStatus::closeTimeChanged(uint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void HtCarStatus::tripAClearChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void HtCarStatus::buttonRightChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void HtCarStatus::buttonLeftChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void HtCarStatus::buttonOkChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void HtCarStatus::buttonRightShowChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void HtCarStatus::buttonLeftShowChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void HtCarStatus::buttonOkShowChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}
QT_END_MOC_NAMESPACE
