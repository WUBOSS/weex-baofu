//
//  WeexBaofuModule.h
//  WeexPluginTemp
//
//  Created by 齐山 on 17/3/14.
//  Copyright © 2017年 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>
#import <BaofooWebchatPaySDK/BaofooWebchatPaySDK.h>
@interface WeexBaofuModule : NSObject<WXModuleProtocol,BaofooWebchatPaySDKDelegate>
@property(nonatomic,copy)WXModuleCallback callBack;
@end
