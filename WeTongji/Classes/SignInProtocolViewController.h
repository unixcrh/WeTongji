//
//  SignInProtocolViewController.h
//  WeTongji
//
//  Created by 紫川 王 on 12-5-4.
//  Copyright (c) 2012年 Tongji Apple Club. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WTNavigationViewController.h"

@interface SignInProtocolViewController : WTNavigationViewController <UIAlertViewDelegate>

@property (nonatomic, strong) IBOutlet UIView *mainBgView;
@property (nonatomic, strong) IBOutlet UIView *bottomBgView;
@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@property (nonatomic, strong) IBOutlet UILabel *protocolLabel;

@end
