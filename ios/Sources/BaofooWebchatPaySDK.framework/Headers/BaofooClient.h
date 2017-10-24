//
//  BaofooClient.h
//  BaofooWebchatSDK
//
//  Created by 路国良 on 16/7/13.
//  Copyright © 2016年 baofoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface BaofooClient : NSObject

+(BaofooClient*)sharedManager;
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions WithDict:configDict;

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;

- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;

- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<NSString *,id> *)options;

- (void)applicationWillEnterForeground:(UIApplication *)application;
@end
