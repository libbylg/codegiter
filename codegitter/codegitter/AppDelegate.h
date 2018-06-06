//
//  AppDelegate.h
//  codegitter
//
//  Created by luolijun on 2018/6/6.
//  Copyright © 2018年 com.tinyhubs.luolijun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

