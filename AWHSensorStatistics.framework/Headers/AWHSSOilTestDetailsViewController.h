//
//  AWHSSOilTestDetailsViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import "AWHSSOilModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilTestDetailsViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)AWHSSOilModel *model;
@end

NS_ASSUME_NONNULL_END
