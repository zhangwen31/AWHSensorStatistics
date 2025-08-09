//
//  AWHSSRecentOilLandscapeViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/5/27.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import "AWHSSOilQuantityStatistics.h"
#import "AWHSSOilQuantityStatisticsListDetailModel.h"
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSRecentOilLandscapeViewController : AWHBBBaseViewController

@property(nonatomic,strong) NSString *name;

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic, strong) AWHSSOilQuantityStatisticsListDetailModel *listDetailModel;

@end

NS_ASSUME_NONNULL_END
