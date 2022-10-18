//
//  AWHSSOilModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilModel : NSObject
@property(nonatomic,assign)CGFloat addOilCount;
@property(nonatomic,assign)CGFloat avgOilMile;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,assign)CGFloat delOilCount;
@property(nonatomic,assign)NSInteger time;
@property(nonatomic,assign)CGFloat totalMile;
/** */
@property(nonatomic,strong)NSArray *resultList;
@end

NS_ASSUME_NONNULL_END
