//
//  AppDelegate.h
//  OhMyLove
//
//  Created by WDX on 17/4/17.
//  Copyright © 2017年 aspire. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

