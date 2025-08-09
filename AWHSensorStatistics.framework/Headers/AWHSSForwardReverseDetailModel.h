//
//  AWHSSForwardReverseDetailModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSForwardReverseDetailModel : NSObject

//开始位置
@property (nonatomic,strong)NSString *saddr;
//结束时间  yyyy-MM-dd HH-mm-ss
@property (nonatomic,strong)NSString *etime;
//开始时间  yyyy-MM-dd HH-mm-ss
@property (nonatomic,strong)NSString *stime;
//结束位置
@property (nonatomic,strong)NSString *eaddr;
//状态 00：正转，01：反转，02：停止
@property (nonatomic,strong)NSString *state;
//时长 单位：秒
@property (nonatomic,assign)NSInteger duration;

@end

NS_ASSUME_NONNULL_END
