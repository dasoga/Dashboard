//
//  AppDelegate.h
//  Dashboard
//
//  Created by Dante Solorio on 6/11/16.
//  Copyright © 2016 Dsolorio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ConnectionManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) ConnectionManager *mcManager;

@end

