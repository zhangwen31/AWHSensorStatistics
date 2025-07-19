//
//  AWHSSListMonitoringOtherTableViewCell.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSListMonitoringOtherTableViewCell : UITableViewCell
@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property (nonatomic, strong) UIView *lineView;
@property (nonatomic, assign) BOOL isHiddenLine;
+(CGFloat)tableView:(UITableView*)tableView rowHeightForIndexPath:(NSIndexPath *)indexPath andSelectArray:(NSMutableArray *)selectArray isOffline:(BOOL)isOffline offlineDuration:(NSString *)offlineDuration;
@end

NS_ASSUME_NONNULL_END
