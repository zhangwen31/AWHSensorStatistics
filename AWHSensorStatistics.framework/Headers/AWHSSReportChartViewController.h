//
//  AWHSSReportChartViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsQueryModel.h>
#import <AWHSensorStatistics/AWHSSOilQuantityStatistics.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSReportChartViewController : AWHBBBaseViewController

@property(nonatomic,strong) NSString *name;

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic, strong) AWHSSQuantityStatisticsQueryModel *queryModel;

@property(nonatomic, strong) NSMutableArray<AWHOSQuantityStatisticsDetailsModel *> *dataArr;

@end

NS_ASSUME_NONNULL_END
