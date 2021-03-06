//
//  IntegralStorePercentDrivenController.h
//  CyxbsMobile2019_iOS
//
//  Created by 方昱恒 on 2020/1/16.
//  Copyright © 2020 Redrock. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface IntegralStorePercentDrivenController : UIPercentDrivenInteractiveTransition

@property (nonatomic, strong) UIPanGestureRecognizer *panGesture;

- (instancetype)initWithPanGesture:(UIPanGestureRecognizer *)panGesture;

@end

NS_ASSUME_NONNULL_END
