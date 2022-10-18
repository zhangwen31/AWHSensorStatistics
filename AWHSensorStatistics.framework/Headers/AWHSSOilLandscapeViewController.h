//
//  AWHSSOilLandscapeViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import "AWHSSOilModel.h"
NS_ASSUME_NONNULL_BEGIN

/** */
@protocol AWHSSBackToOilTestVCDelegate <NSObject>
-(void)ReturnOptimize:(NSString *)optimize;
@end

@interface AWHSSOilLandscapeViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)AWHSSOilModel *model;
@property(nonatomic,copy)NSString *optimize;
@property(nonatomic,weak)id<AWHSSBackToOilTestVCDelegate>delegate;
@end

NS_ASSUME_NONNULL_END
