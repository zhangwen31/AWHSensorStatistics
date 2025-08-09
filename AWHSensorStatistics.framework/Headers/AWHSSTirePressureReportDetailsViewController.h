//
//  AWHSSTirePressureReportDetailsViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/4/17.
// 胎压报表详情

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHSensorStatistics/AWHSSTirePressureReportModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSTirePressureReportDetailsViewController : AWHBBBaseViewController

@property(nonatomic,strong)AWHSSTirePressureReportModel *model;
//温度单位
@property (nonatomic, strong) NSString *temperatureUnit;
//压力单位
@property (nonatomic, strong) NSString *pressureUnit;

@end

NS_ASSUME_NONNULL_END
