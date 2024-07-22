//
//  PPBluetoothDefine.h
//  PPBluetoothKIt
//
//  Created by 彭思远 on 2023/3/27.
//

#ifndef PPBluetoothDefine_h
#define PPBluetoothDefine_h

#import <PPBaseKit/PPBaseDefine.h>

#define kBLEAdvDataManufacturerData @"kCBAdvDataManufacturerData"
#define kBLEAdvDataLocalName @"kCBAdvDataLocalName"
#define kBLEAdvDataIsConnectable @"kCBAdvDataIsConnectable"

typedef NS_ENUM(NSInteger, PPBluetoothState) {
    PPBluetoothStateUnknown = 0,
    PPBluetoothStateResetting,
    PPBluetoothStateUnsupported,
    PPBluetoothStateUnauthorized,
    PPBluetoothStatePoweredOff,
    PPBluetoothStatePoweredOn,
} ;

// 设备类型
typedef NS_ENUM(NSUInteger, PPDeviceConnectType) {
    
    PPDeviceConnectTypeUnknow = 0, // 未知
    PPDeviceConnectTypeBleAdv, // 蓝牙广播秤
    PPDeviceConnectTypeBleConnect, // 蓝牙连接秤
    PPDeviceConnectTypeLTE, // 4G-LTE
};

// 设备类型
typedef NS_ENUM(NSUInteger, PPDeviceType) {
    
    PPDeviceTypeUnknow = 0, // 未知
    PPDeviceTypeCF, // 体脂秤
    PPDeviceTypeCE, //体重秤
    PPDeviceTypeCB, // 婴儿秤
    PPDeviceTypeCA, // 厨房秤
};

// 设备蓝牙协议版本
typedef NS_ENUM(NSUInteger, PPDeviceProtocolType) {
    
    PPDeviceProtocolTypeUnknow = 0, // 未知
    PPDeviceProtocolTypeV2, // 2.x版本
    PPDeviceProtocolTypeV3, // 3.x版本
    PPDeviceProtocolTypeTorre, // torre版本
    PPDeviceProtocolTypeV4, // 4.x版本
};


// 设备供电方式
typedef NS_ENUM(NSUInteger, PPDevicePowerType) {
    
    PPDevicePowerTypeUnknow = 0, // 未知
    PPDevicePowerTypeBattery, // 电池
    PPDevicePowerTypeSolar, // 太阳能
    PPDevicePowerTypeCharge, // 充电
};

// 设备功能类型
typedef NS_OPTIONS(NSUInteger, PPDeviceFuncType) {
    
    PPDeviceFuncTypeWeight = 1 << 0, // 称重
    PPDeviceFuncTypeFat = 1 << 1, // 测脂
    PPDeviceFuncTypeHeartRate = 1 << 2, // 心律
    PPDeviceFuncTypeHistory = 1 << 3, // 历史
    PPDeviceFuncTypeSafe = 1 << 4, // 孕妇
    PPDeviceFuncTypeBMDJ = 1 << 5, // 闭目单脚
    PPDeviceFuncTypeBaby = 1 << 6, // 抱婴模式
    PPDeviceFuncTypeWifi = 1 << 7, // wifi配网
    PPDeviceFuncTypeTime = 1 << 8, // 时钟
    PPDeviceFuncTypeKeyVoice = 1 << 9, // 按键音量
    PPDeviceFuncTypeBidirectional = 1 << 10, // 双向广播


};

// 设备精度
typedef NS_ENUM(NSUInteger, PPDeviceAccuracyType) {
    
    PPDeviceAccuracyTypeUnknow = 0, // 未知
    PPDeviceAccuracyTypePoint01, // 0.1KG精度
    PPDeviceAccuracyTypePoint005, // 0.05KG精度
    PPDeviceAccuracyTypePointG, // 1G精度
    PPDeviceAccuracyTypePoint01G, // 0.1G精度
    PPDeviceAccuracyTypePoint001, // 0.01KG精度

};



// 配网错误状态状态
typedef NS_ENUM(NSUInteger, PPWIFIConfigState) {
    
    PPWIFIConfigStateUnknow,
    PPWIFIConfigStateStartFailed,
    PPWIFIConfigStateDomainSendFailed,
    PPWIFIConfigStateDomainSendCodeFailed,
    PPWIFIConfigStateSSIDSendFailed,
    PPWIFIConfigStateSSIDSendCodeFailed,
    PPWIFIConfigStatePasswordSendFailed,
    PPWIFIConfigStatePasswordSendCodeFailed,
    PPWIFIConfigStateRegistSuccess,
    PPWIFIConfigStateRegistFailedTimeOut,
    PPWIFIConfigStateRegistFailedConnect,
    PPWIFIConfigStateRegistFailedHTTP,
    PPWIFIConfigStateRegistFailedHTTPS,
    PPWIFIConfigStateRegistFailedRegist,
    PPWIFIConfigStateRegistFailedCommand,
};


/**
 * 设备分组类型
 */
typedef NS_ENUM(NSUInteger, PPDevicePeripheralType) {
    //2.x /连接 /人体秤
    PPDevicePeripheralTypePeripheralApple,
    //2.x /广播 /人体秤
    PPDevicePeripheralTypePeripheralBanana,
    //3.x /连接 /人体秤
    PPDevicePeripheralTypePeripheralCoconut,
    //2.x /设备端计算的连接 /人体秤
    PPDevicePeripheralTypePeripheralDurian,
    //2.x /连接 /厨房秤
    PPDevicePeripheralTypePeripheralEgg,
    //3.x /连接 /厨房秤
    PPDevicePeripheralTypePeripheralFish,
    //2.x /广播 /厨房秤
    PPDevicePeripheralTypePeripheralGrapes,
    //3.x /广播 /厨房秤
    PPDevicePeripheralTypePeripheralHamburger,
    //torre /连接 /人体秤
    PPDevicePeripheralTypePeripheralTorre,
    //ice //CF597 /连接 /人体秤
    PPDevicePeripheralTypePeripheralIce,
    // Jambul 3.x /广播 /人体秤
    PPDevicePeripheralTypePeripheralJambul,
    // 4G LET设备
    PPDevicePeripheralTypePeripheralKiwifruit
};

#endif /* PPBluetoothDefine_h */
