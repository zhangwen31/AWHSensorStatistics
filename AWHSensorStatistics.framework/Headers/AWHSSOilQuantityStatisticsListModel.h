//
//  AWHSSOilQuantityStatisticsListModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>
#import "AWHSSOilQuantityStatisticsListDetailModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilQuantityStatisticsListModel : NSObject
@property(nonatomic,strong)NSDictionary<NSString *, NSArray *> *cfgs;

@property(nonatomic,strong)NSArray<AWHSSOilQuantityStatisticsListDetailModel *> *datas;

@property(nonatomic,strong)NSDictionary<NSString *, NSArray<AWHSSOilQuantityStatisticsListDetailModel *> *> *cfgsDetailDict;
/**解析datas 到cfgsDetailDict中*/
- (void)dataAnalysis;
@end

NS_ASSUME_NONNULL_END
