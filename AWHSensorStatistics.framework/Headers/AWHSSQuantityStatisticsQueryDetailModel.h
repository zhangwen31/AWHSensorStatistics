//
//  AWHSSQuantityStatisticsQueryDetailModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <Foundation/Foundation.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsDetailModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSQuantityStatisticsQueryDetailModel : NSObject

///对照表数据
@property (nonatomic,strong)NSArray<AWHSSQuantityStatisticsDetailModel *> *ads;
///模拟量几 1-15
@property (nonatomic,strong)NSString *analog;
///计算方式 1：按数值显示 2：按标量计算
@property (nonatomic,strong)NSString *compute;
///过滤ACC关 false：不过滤 true：过滤
@property (nonatomic,strong)NSString *filterAccOff;
///过滤补报 false：不过滤 true：过滤
@property (nonatomic,strong)NSString *filterCb;
///过滤无定位信号 false：不过滤 true：过滤
@property (nonatomic,strong)NSString *filterInvalid;
///漏油阈值
@property (nonatomic,strong)NSString *leak_threshold;
///传感器名称
@property (nonatomic,strong)NSString *name;
///精确到小数点后几位
@property (nonatomic,strong)NSString *precision;
///加油阈值
@property (nonatomic,strong)NSString *refuel_threshold;
///是否优化曲线 false：不过滤 true：过滤
@property (nonatomic,strong)NSString *smooth;
///传感器类型 1：油量 2：载重 3：温度 4：湿度 5：水位
@property (nonatomic,strong)NSString *type;
///传感器ID
@property (nonatomic,strong)NSString *typeId;
///单位
@property (nonatomic,strong)NSString *unit;
///
@property (nonatomic,strong)NSString *value;

+ (instancetype)dataAnalysisWithDict:(NSDictionary *)dict;


@end

NS_ASSUME_NONNULL_END
