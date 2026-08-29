//
//  AWHSSLeakingOilRefuelingAnalysisViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2026/1/17.
// 漏油分析/加油分析

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHSensorStatistics/AWHSSSensorOilAddAnalysisModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSLeakingOilRefuelingAnalysisViewController : AWHBBBaseViewController

/// 类型
@property (nonatomic, assign) AWHSSLeakingOilRefuelingType type;

@end

NS_ASSUME_NONNULL_END
