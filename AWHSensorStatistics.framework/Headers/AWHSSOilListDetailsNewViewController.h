//
//  AWHSSOilListDetailsNewViewController.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import "AWHSSOilQuantityStatistics.h"
#import "AWHSSQuantityStatisticsAddsModel.h"
#import "AWHSSOilQuantityStatisticsListDetailModel.h"
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilListDetailsNewViewController : AWHBBBaseViewController

@property(nonatomic,strong) NSString* name;

@property(nonatomic,strong)NSString*allName;
//上一个界面是否是竖屏
@property(nonatomic,assign)BOOL isVerticalScreenJion;

@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@property(nonatomic,strong) AWHBBCarModel *model;

@property(nonatomic,strong)NSArray<AWHSSQuantityStatisticsAddsModel *> *dataArray;

@property(nonatomic, strong) AWHSSOilQuantityStatisticsListDetailModel *listDetailModel;

@end

NS_ASSUME_NONNULL_END
