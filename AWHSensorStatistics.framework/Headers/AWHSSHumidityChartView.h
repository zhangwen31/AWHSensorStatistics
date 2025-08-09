//
//  AWHSSHumidityChartView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2025/5/3.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSTemperatureHumidityDetailsModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSHumidityChartView : UIView

@property(nonatomic, strong) NSMutableArray<AWHSSTemperatureHumidityDetailsModel *> *dataArr;

@property(nonatomic,strong)NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;
/// 是否是速度展示
@property (nonatomic, assign) BOOL isSpeed;

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
