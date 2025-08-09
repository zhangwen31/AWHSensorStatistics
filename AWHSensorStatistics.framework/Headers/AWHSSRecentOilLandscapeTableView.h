//
//  AWHSSRecentOilLandscapeTableView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/5/27.
//

#import <UIKit/UIKit.h>
#import "AWHSSOilQuantityStatisticsListDetailModel.h"
#import "AWHSSOilQuantityStatistics.h"

typedef void(^AWHSSReturnBtnClick)(NSInteger row);

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSRecentOilLandscapeTableView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)AWHSSOilQuantityStatisticsListDetailModel *model;
@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;
@property(nonatomic,copy) AWHSSReturnBtnClick returnBtnClick;

@end

NS_ASSUME_NONNULL_END
