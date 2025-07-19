//
//  AWHSSTemperatureChartView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2024/9/15.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSTemperatureHumidityDetailsModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSTemperatureChartView : UIView

@property(nonatomic, strong) NSMutableArray<AWHSSTemperatureHumidityDetailsModel *> *dataArr;

@property(nonatomic,strong)NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;

- (instancetype)init NS_UNAVAILABLE;
/**
 * 初始化
 * @param width 宽度
 * @param height 宽度
 * @param titles 展示变量标题
 */
- (instancetype)initWithWidth:(CGFloat)width height:(CGFloat)height titles:(NSArray *)titles;

- (void)refreshData;


@end

NS_ASSUME_NONNULL_END
