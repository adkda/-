//
//  UserManager.h
//  暗恋项目
//
//  Created by dkd on 15/8/10.
//  Copyright (c) 2015年 dkd. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void (^UMBlock)(NSDictionary *dic);
typedef void (^UMBlockA)(BOOL isSuccess);

@interface UserManager : NSObject
+(instancetype)share;
-(void)getCodeWithTel:(NSString *)tel BlockHandle:(UMBlockA)block;
-(void)autheCode:(NSString *)code TEL:(NSString *)tel BlockHande:(UMBlock)block;
-(void)savePersonInfo:(NSDictionary *)dic BlockHandle:(UMBlockA)block;
-(void)getUserInfo:
@end
