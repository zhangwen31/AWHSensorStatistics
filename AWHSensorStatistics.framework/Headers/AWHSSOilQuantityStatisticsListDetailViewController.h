//
//  AWHSSOilQuantityStatisticsListDetailViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import "AWHSSOilQuantityStatisticsListDetailModel.h"
#import "AWHSSOilQuantityStatistics.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilQuantityStatisticsListDetailViewController : AWHBBBaseViewController

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic,strong)NSArray<AWHSSOilQuantityStatisticsListDetailModel *> *dataArray;

@property(nonatomic,strong)UITableView *tableView;

@end

NS_ASSUME_NONNULL_END
