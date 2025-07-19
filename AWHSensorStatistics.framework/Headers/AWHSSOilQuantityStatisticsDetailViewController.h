//
//  AWHSSOilQuantityStatisticsDetailViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilQuantityStatisticsDetailViewController : AWHBBBaseViewController
/** */
@property(nonatomic,strong)NSMutableArray *dataArray;
//折线颜色
@property(nonatomic,strong)UIColor *polylineColor;
@end

NS_ASSUME_NONNULL_END
