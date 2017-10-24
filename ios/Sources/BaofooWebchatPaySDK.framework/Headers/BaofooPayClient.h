//
//  BaofooPayClient.h
//  BaofooWebchatSDK
//
//  Created by 路国良 on 16/7/25.
//  Copyright © 2016年 baofoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/**
 *  SDK代理
 *
 */
@protocol BaofooWebchatPaySDKDelegate <NSObject>
/*
 statusCode:1000    二维码生成失败
 statusCode:1001    生成二维码生成，等待扫描中
 statusCode:1002    传入的支付类型无效
 statusCode:1003    二维码等待扫码超时
 statusCode:1004    二维码在等待扫描的时候，用户退出了支付
 statusCode:1005    用户在选择支付类型的时候，选择了取消选择支付
 statusCode:1100    传入的参数错误
 statusCode:400     TokenID失效
 statusCode:401     TokenID未知
 statusCode:204     二维码未支付
 statusCode:202     二维码被扫码，但是支付失败
 statusCode:601     app支付，支付失败
 statusCode:701     wap支付，支付失败
 statusCode:702     wap支付，用户取消了支付
 statusCode:703     wap支付，用户未支付
 statusCode:201     支付成功
 statusCode:2001    反扫冲正成功
 statusCode:2002    反扫冲正失败
 statusCode:2003    反扫支付失败
 statusCode:2004    用户在扫码界面直接退出的交易，交易失败
 statusCode:3001    设备设备没有摄像头
 statusCode:3002    设备摄像头权限访问受限
 statusCode:3004    微信没有安装（微信Wap支付时候用到）
 */

/**
 *  代理方法 支付结果回调
 *
 *  @param statusCode 1:支付成功,其它支付失败
 *  @param message  描述信息
 */
-(void)callBack:(NSString*)statusCode andMessage:(NSString *)message;

@end

@interface BaofooPayClient : NSObject
-(void)payWebchatWithTokenID:(NSString *)tokenID withSelf:(UIViewController*)controller;

@property(nonatomic,retain)id<BaofooWebchatPaySDKDelegate>delegate;
@end
