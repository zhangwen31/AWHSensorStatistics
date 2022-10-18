//
//  AWHSSOilListDetailsNewCell.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "AWHSSOilQuantityStatistics.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSOilListDetailsNewCell : UITableViewCell

@property (nonatomic, strong) UILabel *label1;
@property (nonatomic, strong) UILabel *label2;
@property (nonatomic, strong) UILabel *label3;
@property (nonatomic, strong) UILabel *label4;
@property (nonatomic, strong) UILabel *label5;
@property (nonatomic, strong) UILabel *label6;
@property (nonatomic, assign) BOOL isShowLine;
@property (nonatomic, strong) UIColor *labelColor;
@property(nonatomic,assign) AWHSSOilQuantityStatisticsType type;

@end

NS_ASSUME_NONNULL_END
