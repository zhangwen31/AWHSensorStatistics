//
//  AWHSSQuantityStatisticsModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>
#import <AWHOilSwift/AWHOSQuantityStatisticsDetailsModel.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsAddsModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSQuantityStatisticsModel : NSObject

@property(nonatomic,strong)NSArray<AWHOSQuantityStatisticsDetailsModel *> *details;

@property(nonatomic,strong)NSArray<AWHOSQuantityStatisticsDetailsModel *> *adds;

@property(nonatomic,strong)NSArray<AWHOSQuantityStatisticsDetailsModel *> *leaks;
@end

NS_ASSUME_NONNULL_END
