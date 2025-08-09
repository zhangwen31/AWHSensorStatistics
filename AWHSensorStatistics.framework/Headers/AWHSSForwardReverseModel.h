//
//  AWHSSForwardReverseModel.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/8/19.
//

#import <Foundation/Foundation.h>
#import <AWHSensorStatistics/AWHSSForwardReverseDetailModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSForwardReverseModel : NSObject

//企业名称
@property (nonatomic,strong)NSString *teamName;
//车主
@property (nonatomic,strong)NSString *owner;
//车牌号
@property (nonatomic,strong)NSString *carPlate;
//正转时长
@property (nonatomic,assign)NSInteger posiTime;
//反转时长
@property (nonatomic,assign)NSInteger negaTime;
//停转时长
@property (nonatomic,assign)NSInteger stopTime;
//次数
@property (nonatomic,assign)NSInteger count;
//明细信息
@property (nonatomic,strong)NSArray<AWHSSForwardReverseDetailModel *> *detail;


@end

NS_ASSUME_NONNULL_END
