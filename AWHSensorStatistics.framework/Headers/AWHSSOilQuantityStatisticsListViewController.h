//
//  AWHSSOilQuantityStatisticsListViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import "AWHSSOilQuantityStatisticsListModel.h"
#import "AWHSSOilQuantityStatisticsListDetailViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilQuantityStatisticsListViewController : AWHBBBaseViewController
@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic,strong) AWHSSOilQuantityStatisticsListModel *listModel;

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;
@end

NS_ASSUME_NONNULL_END
