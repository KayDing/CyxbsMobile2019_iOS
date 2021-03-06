//
//  EditMyInfoViewProtocol.h
//  CyxbsMobile2019_iOS
//
//  Created by 方昱恒 on 2019/11/14.
//  Copyright © 2019 Redrock. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol EditMyInfoViewProtocol <NSObject>

- (void)profileUploadedSuccess;
- (void)userInfoUploadedSuccess;

@end

NS_ASSUME_NONNULL_END
