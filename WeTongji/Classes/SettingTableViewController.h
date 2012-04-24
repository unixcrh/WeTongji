//
//  SettingTableViewController.h
//  WeTongji
//
//  Created by 紫川 王 on 12-4-24.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WTMainTableViewController.h"

@protocol SettingTableViewControllerDelegate;

@interface SettingTableViewController : WTMainTableViewController

@property (nonatomic, weak) id<SettingTableViewControllerDelegate> delegate;

@end

@protocol SettingTableViewControllerDelegate <NSObject>

- (void)settingTableViewControllerDidSelectLoginListCell;

@end
