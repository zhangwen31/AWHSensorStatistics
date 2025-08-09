//
//  AWHSSForwardReverseStatisticsView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHSSForwardReverseStatisticsClickSelcet)(BOOL isForeward, BOOL isReversal, BOOL isStopBtn);

@interface AWHSSForwardReverseStatisticsView : UIView
//正转
@property(nonatomic,strong)UIButton *forewardBtn;
//反转
@property(nonatomic,strong)UIButton *reversalBtn;
//停止
@property(nonatomic,strong)UIButton *stopBtn;

@property(nonatomic,copy)AWHSSForwardReverseStatisticsClickSelcet ClickSelcet;

@property(nonatomic,assign)BOOL isForeward;
@property(nonatomic,assign)BOOL isReversal;
@property(nonatomic,assign)BOOL isStopBtn;

@end

NS_ASSUME_NONNULL_END
