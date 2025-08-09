//
//  AWHSSHumiditySetupView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2025/5/5.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSHumiditySetupView : UIView

@property (nonatomic, strong) NSArray<AWHSSQuantityStatisticsQueryCfgModel *> *typeArr;

@property (nonatomic, copy) void (^closeBlock)(BOOL isSpeed);

@end

NS_ASSUME_NONNULL_END
