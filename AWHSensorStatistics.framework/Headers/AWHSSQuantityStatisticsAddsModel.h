//
//  AWHSSQuantityStatisticsAddsModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSQuantityStatisticsAddsModel : NSObject

//开始时间,
@property (nonatomic,strong)NSString *stime;
//结束时间,
@property (nonatomic,strong)NSString *etime;
//开始油量,
@property (nonatomic,assign)CGFloat svalue;
//结束油量,
@property (nonatomic,assign)CGFloat evalue;
//加油量或漏油量,
@property (nonatomic,assign)CGFloat value;
//里程
@property (nonatomic,assign)CGFloat mile;

@end

NS_ASSUME_NONNULL_END
