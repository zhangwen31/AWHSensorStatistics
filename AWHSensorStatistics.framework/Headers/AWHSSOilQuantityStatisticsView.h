//
//  AWHSSOilQuantityStatisticsView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnBtnTitle)(NSString *str);
@interface AWHSSOilQuantityStatisticsView : UIView
/** */
@property(nonatomic,copy)NSArray *titleArr;
@property(nonatomic,copy)NSArray *imageArr;
@property(nonatomic,strong)UIButton *btn1;
@property(nonatomic,strong)UIButton *btn2;
/** */
@property(nonatomic,copy)ReturnBtnTitle ReturnBtnTitle;
@end

NS_ASSUME_NONNULL_END
