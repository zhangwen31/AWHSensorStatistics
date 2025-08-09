//
//  AWHSSReportChartListDetailsViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsQueryModel.h>
#import <AWHSensorStatistics/AWHSSOilQuantityStatistics.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSReportChartListDetailsViewController : AWHBBBaseViewController

@property(nonatomic,strong) NSString* name;

@property(nonatomic,strong)NSString*allName;
//上一个界面是否是竖屏
@property(nonatomic,assign)BOOL isVerticalScreenJion;

@property(nonatomic,assign)BOOL isU;

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic, strong) AWHSSQuantityStatisticsQueryModel *queryModel;

@end

NS_ASSUME_NONNULL_END
