//
//  MNCAppsScreen.h
//  MNCAppsSDK
//
//  Created by Victor Toya on 16/02/21.
//  Copyright © 2021 MNC Innovation Center. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MNCRequestItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface MNCAppsScreen : UIViewController
- (instancetype)initWithRequestItem:(MNCRequestItem*)requestItem;
@end

NS_ASSUME_NONNULL_END
