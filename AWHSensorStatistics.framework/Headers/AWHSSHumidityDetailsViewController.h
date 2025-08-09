//
//  AWHSSHumidityDetailsViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2025/5/3.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHOilSwift/AWHSSTemperatureHumidityDetailsModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSHumidityDetailsViewController : AWHBBBaseViewController

/// 天数数组排序
@property(nonatomic,strong)NSMutableArray<NSString *> *dayArr;
/// 天数详情数组排序
@property(nonatomic,strong)NSMutableDictionary *dayDict;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic,strong) NSString *type;

@property(nonatomic,strong)NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;

@end

NS_ASSUME_NONNULL_END
