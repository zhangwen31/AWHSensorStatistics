//
//  AWHSSOilListModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilListModel : NSObject
@property(nonatomic,copy)NSString *anaShowValue;
@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *fanaShowValue;
@property(nonatomic,copy)NSString *fmoniStts;
@property(nonatomic,copy)NSString *lat;
@property(nonatomic,copy)NSString *lng;
@property(nonatomic,copy)NSString *locDesc;
@property(nonatomic,copy)NSString *mileCount;
@property(nonatomic,copy)NSString *moniStts;
@property(nonatomic,copy)NSString *offsetlat;
@property(nonatomic,copy)NSString *offsetlng;
@property(nonatomic,copy)NSString *reportTime;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *subReportTime;
@property(nonatomic,copy)NSString *changeMileCount;
@end

NS_ASSUME_NONNULL_END
