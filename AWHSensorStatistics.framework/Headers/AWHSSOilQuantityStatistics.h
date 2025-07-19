//
//  AWHSSOilQuantityStatistics.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2022/10/8.
//

#ifndef AWHSSOilQuantityStatistics_h
#define AWHSSOilQuantityStatistics_h

typedef NS_ENUM(NSInteger, AWHSSOilQuantityStatisticsType) {
    /**油量*/
    AWHSSOilQuantityStatisticsTypeOil            = 0,
    /**水位*/
    AWHSSOilQuantityStatisticsTypeWater          = 1,
    /**载重*/
    AWHSSOilQuantityStatisticsTypeLoad           = 2,
    /**温度*/
    AWHSSOilQuantityStatisticsTypeTemperature    = 3,
    /**湿度*/
    AWHSSOilQuantityStatisticsTypeHumidity       = 4,
};

#endif /* AWHSSOilQuantityStatistics_h */
