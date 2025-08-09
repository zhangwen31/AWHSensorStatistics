//
//  AWHSSHumidityDetailsView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2025/5/5.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSTemperatureHumidityDetailsModel.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSHumidityDetailsView : UIView

@property (nonatomic, strong) NSMutableArray<AWHSSTemperatureHumidityDetailsModel *> *dataArr;

@property (nonatomic, strong) NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;
/// 是否是速度展示
@property (nonatomic, assign) BOOL isSpeed;

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
