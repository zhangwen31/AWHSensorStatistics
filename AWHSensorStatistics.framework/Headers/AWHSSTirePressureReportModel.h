//
//  AWHSSTirePressureReportModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/4/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSTirePressureReportModel : NSObject

//定位时间
@property (nonatomic,strong)NSString *time;
//车牌号
@property (nonatomic,strong)NSString *plate;
//轮胎数据数组：[{轮胎位置,胎压,胎温,电量},...,{轮胎位置,胎压,胎温,电量}]
@property (nonatomic,strong)NSArray *array;

@property (nonatomic,assign) NSInteger type;

@end

NS_ASSUME_NONNULL_END
