//
//  AWHSSOilQuantityStatisticsListDetailModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilQuantityStatisticsListDetailModel : NSObject
//车辆ID,
@property (nonatomic,strong)NSString *carId;
//日期
@property (nonatomic,strong)NSString *day;
//行驶里程(米),
@property (nonatomic,strong)NSString *mile;
//传感器类型ID,
@property (nonatomic,strong)NSString *typeId;
//总加油量,/ 总加水量
@property (nonatomic,strong)NSString *upTotal;
//总加油次数,/总加水次数
@property (nonatomic,strong)NSString *upTimes;
//总耗油量,/总耗水量
@property (nonatomic,strong)NSString *downTotal;
//总漏油量
@property (nonatomic,strong)NSString *leakTotal;
//总漏油次数
@property (nonatomic,strong)NSString *leakTimes;
@end

NS_ASSUME_NONNULL_END
