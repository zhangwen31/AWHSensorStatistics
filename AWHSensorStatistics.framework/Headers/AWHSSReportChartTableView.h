//
//  AWHSSReportChartTableView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/20.
//

#import <UIKit/UIKit.h>
#import <AWHSensorStatistics/AWHSSQuantityStatisticsQueryModel.h>
#import <AWHSensorStatistics/AWHSSOilQuantityStatistics.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHSSReturnBtnClick)(NSInteger row);

@interface AWHSSReportChartTableView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)AWHSSQuantityStatisticsQueryModel *model;
@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;
@property(nonatomic,copy) AWHSSReturnBtnClick returnBtnClick;
@property(nonatomic,strong) AWHBBCarModel *carModel;

@end

NS_ASSUME_NONNULL_END
