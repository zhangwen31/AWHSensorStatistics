//
//  AWHSSListHeaderFooterView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "AWHSSOilQuantityStatisticsListDetailModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSListHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic, assign) NSInteger num;

@property (nonatomic, assign) BOOL isShowRight;

@property (nonatomic, strong) AWHSSOilQuantityStatisticsListDetailModel *model;

@property (nonatomic, copy) void (^rightClickBlock)(AWHSSOilQuantityStatisticsListDetailModel *model);

@end

NS_ASSUME_NONNULL_END
