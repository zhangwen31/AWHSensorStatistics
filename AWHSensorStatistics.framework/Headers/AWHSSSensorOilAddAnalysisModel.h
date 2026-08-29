//
//  AWHSSSensorOilAddAnalysisModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2026/1/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AWHSSLeakingOilRefuelingType) {
    /// 漏油分析
    AWHSSLeakingOilRefuelingTypeLeakingOil          = 0,
    /// 加油分析
    AWHSSLeakingOilRefuelingTypeRefueling           = 1,
};

@interface AWHSSSensorOilAddAnalysisModel : NSObject

@property (nonatomic, strong) NSString *id;
/// 车牌号码
@property (nonatomic, strong) NSString *plate;
/// 总加油量
@property (nonatomic, strong) NSString *totalOil;
/// 加油次数
@property (nonatomic, assign) NSInteger count;

@end

NS_ASSUME_NONNULL_END
