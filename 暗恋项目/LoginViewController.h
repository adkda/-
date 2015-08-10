//
//  LoginViewController.h
//  暗恋项目
//
//  Created by dkd on 15/8/10.
//  Copyright (c) 2015年 dkd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *PhoneText;
@property (weak, nonatomic) IBOutlet UIButton *getCheckCode;
@property (weak, nonatomic) IBOutlet UITextField *chekCode;
@property (weak, nonatomic) IBOutlet UIButton *loginBtn;

@end
