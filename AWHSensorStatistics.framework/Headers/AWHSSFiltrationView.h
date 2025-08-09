//
//  AWHSSFiltrationView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHSSReturnBtnTitle)(NSString *str);
@interface AWHSSFiltrationView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,copy)NSString *accTypeStr;
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,copy)AWHSSReturnBtnTitle ReturnBtnTitle;

@end

NS_ASSUME_NONNULL_END
