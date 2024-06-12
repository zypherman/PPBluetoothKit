//
//  PPUserRecentBodyData.h
//  PPBluetoothKit
//
//  Created by lefu on 2024/4/30
//  


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PPUserBodyDataType) {
    PPUserBodyDataTypeWeight,
    PPUserBodyDataTypeBMI,
    PPUserBodyDataTypeFat,
    PPUserBodyDataTypeWaterPercentage,
    PPUserBodyDataTypeMusclePercentage,
};

@interface PPUserRecentBodyData : NSObject

@property (nonatomic, assign) NSInteger value; // 重量：放大100倍,如：60.5kg 传 6550； 其他指标放大10倍，如：29.0% 传290
@property (nonatomic, assign) double timeStamp; // 时间戳

@end

NS_ASSUME_NONNULL_END
