//
//  AWHSSUnitSelectionView.h
//  AWHSensorStatistics
//
//  Created by 王恒 on 2023/4/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHSSUnitSelectionClick)(NSString *unit);

@interface AWHSSUnitSelectionView : UIView

@property (nonatomic, strong) NSArray<NSString *> *unitArray;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, assign) BOOL isHiddenLine;

@property (nonatomic, copy) AWHSSUnitSelectionClick UnitSelectionClick;

@end

NS_ASSUME_NONNULL_END
