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
//总耗油量,/总耗水量 单位：L
@property (nonatomic,strong)NSString *downTotal;
//总漏油量 单位：L
@property (nonatomic,strong)NSString *leakTotal;
//总漏油次数
@property (nonatomic,strong)NSString *leakTimes;

//近期油耗 新添加的
//传感器类型 1：油量 2：载重 3：温度 4：湿度 5：水位
@property (nonatomic,strong)NSString *type;
//总耗油次数
@property (nonatomic,strong)NSString *downTimes;
//行驶油耗量
@property (nonatomic,strong)NSString *runTotal;
//怠速油耗量
@property (nonatomic,strong)NSString *idlingTotal;
//综合百公里油耗
@property (nonatomic,strong)NSString *totalBy100km;
//行驶百公里油耗
@property (nonatomic,strong)NSString *runBy100km;
//车队名称
@property (nonatomic,strong)NSString *teamName;

@end

NS_ASSUME_NONNULL_END
