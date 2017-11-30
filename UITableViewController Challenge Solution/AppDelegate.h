//
//  AppDelegate.h
//  UITableViewController Challenge Solution
//
//  Created by User on 2017/12/1.
//  Copyright © 2017年 Code Coalitlon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

