//
//  AWHSSOilLandscapeTableViewCell.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilLandscapeTableViewCell : UITableViewCell
@property(nonatomic,strong)UILabel *detailTextLab;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UIView *line1;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) BOOL isShowRightImage;
@end

NS_ASSUME_NONNULL_END
