//
//  AWHSSTireStatusSelectionView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/4/20.
//

#import <UIKit/UIKit.h>

typedef void(^AWHSSTireStatusSureBtnBlock)(NSInteger status);
NS_ASSUME_NONNULL_BEGIN

@interface AWHSSTireStatusSelectionView : UIView

@property(nonatomic,copy) void (^closeBlock)(void);

@property(nonatomic,copy) AWHSSTireStatusSureBtnBlock TireStatusSureBtnBlock;

@property(nonatomic,assign)NSInteger type;

-(void)setTireStatusNum:(NSInteger)num;

@end

NS_ASSUME_NONNULL_END
