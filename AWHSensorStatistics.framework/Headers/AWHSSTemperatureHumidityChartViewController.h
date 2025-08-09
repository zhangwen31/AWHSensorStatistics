//
//  AWHSSTemperatureHumidityChartViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2024/9/15.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHOilSwift/AWHSSTemperatureHumidityDetailsModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSTemperatureHumidityChartViewController : AWHBBBaseViewController

@property(nonatomic, strong) NSMutableArray<AWHSSTemperatureHumidityDetailsModel *> *dataArr;

@property(nonatomic,strong)NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;

@end

NS_ASSUME_NONNULL_END
