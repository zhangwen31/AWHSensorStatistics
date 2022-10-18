//
//  AWHSSOilLandscapeTableView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "AWHSSOilModel.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHSSReturnBtnClick)(NSString *str);
@interface AWHSSOilLandscapeTableView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)AWHSSOilModel *model;
@property(nonatomic,copy)NSString *optimize;
@property(nonatomic,copy)AWHSSReturnBtnClick ReturnBtnClick;
- (void)refreshData;

@end

NS_ASSUME_NONNULL_END
