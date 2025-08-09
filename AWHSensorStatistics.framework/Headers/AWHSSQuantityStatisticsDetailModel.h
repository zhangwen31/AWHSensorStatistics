//
//  AWHSSQuantityStatisticsDetailModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSQuantityStatisticsDetailModel : NSObject

///模拟量
@property (nonatomic,strong)NSString *m;
///真实值
@property (nonatomic,strong)NSString *v;

@end

NS_ASSUME_NONNULL_END
