//
//  AWHSSForwardReverseDetailsViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/19.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHSensorStatistics/AWHSSForwardReverseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSForwardReverseDetailsViewController : AWHBBBaseViewController

@property(nonatomic,strong) AWHSSForwardReverseModel *model;
@property(nonatomic,strong) AWHBBCarModel *carModel;

@end

NS_ASSUME_NONNULL_END
