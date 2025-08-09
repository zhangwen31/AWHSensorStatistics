//
//  AWHSSQuantityStatisticsQueryModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <Foundation/Foundation.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsQueryDetailModel.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsListDetailModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSQuantityStatisticsQueryModel : NSObject

///车辆ID,
@property (nonatomic,strong)NSString *carId;
///日期
@property (nonatomic,strong)NSString *day;
///总耗油次数
@property (nonatomic,strong)NSString *downTimes;
///总耗油量,/总耗水量 单位：L
@property (nonatomic,assign)CGFloat downTotal;
///总漏油量 单位：L
@property (nonatomic,assign)CGFloat leakTotal;
///总漏油次数
@property (nonatomic,strong)NSString *leakTimes;
///行驶里程(米),
@property (nonatomic,strong)NSString *mile;
///近期油耗 新添加的
///传感器类型 1：油量 2：载重 3：温度 4：湿度 5：水位
@property (nonatomic,strong)NSString *type;
///传感器类型ID,
@property (nonatomic,strong)NSString *typeId;
///总加油量,/ 总加水量
@property (nonatomic,assign)CGFloat upTotal;
///总加油次数,/总加水次数
@property (nonatomic,strong)NSString *upTimes;
//怠速油耗量
@property (nonatomic,assign)CGFloat idlingTotal;
///行驶油耗量
@property (nonatomic,strong)NSString *cfg;

@property (nonatomic,strong)AWHSSQuantityStatisticsQueryCfgModel *cfgModel;

@property (nonatomic,strong)NSArray<AWHSSQuantityStatisticsListDetailModel *> *list;

@property (nonatomic,strong)NSArray<AWHSSQuantityStatisticsListDetailModel *> *listL;

@property (nonatomic,strong)NSArray<AWHSSQuantityStatisticsListDetailModel *> *listU;

+ (instancetype)dataAnalysisWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
