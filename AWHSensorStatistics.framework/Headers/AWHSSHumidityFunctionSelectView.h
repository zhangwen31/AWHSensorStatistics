//
//  AWHSSHumidityFunctionSelectView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2025/5/5.
//

#import <UIKit/UIKit.h>
#import <AWHOilSwift/AWHSSQuantityStatisticsQueryCfgModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSHumidityFunctionSelectView : UIView

@property (nonatomic, strong) NSString *title;

@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic, copy) void (^selectClick)(AWHSSQuantityStatisticsQueryCfgModel *model);

@property (nonatomic, strong) AWHSSQuantityStatisticsQueryCfgModel *model;

@end

NS_ASSUME_NONNULL_END
