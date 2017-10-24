//
//  WeexBaofuModule.m
//  WeexPluginTemp
//
//  Created by  on 17/3/14.
//  Copyright © 2017年 . All rights reserved.
//

#import "WeexBaofuModule.h"
#import <WeexPluginLoader/WeexPluginLoader.h>

@implementation WeexBaofuModule

WX_PlUGIN_EXPORT_MODULE(weexBaofu, WeexBaofuModule)
WX_EXPORT_METHOD(@selector(payOrder:callBack:))


-(void)payOrder:(NSString*)order callBack:(WXModuleCallback)callBack
{
    self.callBack = callBack;
    BaofooPayClient *pay=[[BaofooPayClient alloc]init];
    
    pay.delegate=self;
}
-(void)callBack:(NSString*)statusCode andMessage:(NSString *)message
{
    if(self.callBack)
    {
        self.callBack(@{@"statusCode":statusCode,@"message":message?message:@""});
    }
}
@end
