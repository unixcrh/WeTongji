//
//  SignInMainViewController.h
//  WeTongji
//
//  Created by 紫川 王 on 12-5-4.
//  Copyright (c) 2012年 Tongji Apple Club. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WTPostViewController.h"

@interface SignInMainViewController : WTPostViewController <UITextFieldDelegate>

@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@property (nonatomic, strong) IBOutlet UITextField *nameTextField;
@property (nonatomic, strong) IBOutlet UITextField *studentNumberTextField;
@property (nonatomic, strong) IBOutlet UITextField *passwordTextField;
@property (nonatomic, strong) IBOutlet UIView *mainBgView;
@property (nonatomic, strong) IBOutlet UIView *bgView;

@end
