//
//  AWHSSQuantityStatisticsListDetailModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <Foundation/Foundation.h>
#import <AWHOilSwift/AWHOSQuantityStatisticsDetailsModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSQuantityStatisticsListDetailModel : NSObject

//
@property (nonatomic,strong)AWHOSQuantityStatisticsDetailsModel *e;

@property (nonatomic,strong)AWHOSQuantityStatisticsDetailsModel *s;

@property (nonatomic,strong)NSString *t;

@end

NS_ASSUME_NONNULL_END
