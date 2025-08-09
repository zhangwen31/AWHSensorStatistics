//
//  AWHSSOilQuantityStatisticsListDetailNewViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsQueryModel.h>
#import <AWHSensorStatistics/AWHSSOilQuantityStatistics.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilQuantityStatisticsListDetailNewViewController : AWHBBBaseViewController

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic,strong)NSArray<NSArray<AWHSSQuantityStatisticsQueryModel *> *> *dataArray;

@property(nonatomic,strong)NSArray<NSString *> *titleArray;

@property(nonatomic,strong)UITableView *tableView;

@end

NS_ASSUME_NONNULL_END
