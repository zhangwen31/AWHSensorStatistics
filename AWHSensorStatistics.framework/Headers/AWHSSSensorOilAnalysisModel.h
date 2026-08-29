//
//  AWHSSSensorOilAnalysisModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2026/1/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSSensorOilAnalysisModel : NSObject

@property (nonatomic, strong) NSString *id;
/// 百公里油耗
@property (nonatomic, strong) NSString *oilPer100km;
/// 车牌号码
@property (nonatomic, strong) NSString *plate;
/// 总里程
@property (nonatomic, strong) NSString *totalMile;
/// 总油耗量
@property (nonatomic, strong) NSString *totalOil;

@end

NS_ASSUME_NONNULL_END
