//
//  AWHSSTireDataView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/4/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSSTireDataView : UIView
//标题
@property (nonatomic, strong) NSString *title;

/**
 * 设备数据
 * @param temperature 温度
 * @param pressure 压力
 * @param temperatureUnit 温度单位
 * @param pressureUnit 压力单位
 */
- (void)setupTemperature:(NSString *)temperature
                pressure:(NSString *)pressure
         temperatureUnit:(NSString *)temperatureUnit
            pressureUnit:(NSString *)pressureUnit;

@end

NS_ASSUME_NONNULL_END
