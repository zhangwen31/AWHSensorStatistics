//
//  AWHSSOilLandscapeNewTableView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "AWHSSOilQuantityStatisticsListDetailModel.h"
#import "AWHSSOilQuantityStatistics.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHSSReturnBtnClick)(NSInteger row);
@interface AWHSSOilLandscapeNewTableView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)AWHSSOilQuantityStatisticsListDetailModel *model;
@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;
@property(nonatomic,copy) AWHSSReturnBtnClick returnBtnClick;

@end

NS_ASSUME_NONNULL_END
