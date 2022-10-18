//
//  AWHSSOilTestHeadView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHSSReturnBtnClick)(NSString *str);
@interface AWHSSOilTestHeadView : UIView
/** */
@property(nonatomic,copy)AWHSSReturnBtnClick ReturnBtnClick;
@property(nonatomic,strong)UIButton *optimizeBtn;
@end

NS_ASSUME_NONNULL_END
