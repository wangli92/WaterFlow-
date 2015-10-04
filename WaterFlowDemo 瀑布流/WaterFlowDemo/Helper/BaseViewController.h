//
//  BaseViewController.h
//  UINavigationControllerDemo
//
//  Created by Hailong.wang on 15/9/8.
//  Copyright (c) 2015年 Hailong.wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController

//创建上导航的左侧按钮
- (void)createNavigationBarLeftBarButtonItemWithTitle:(NSString *)title;
- (void)createNavigationBarLeftBarButtonItemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style;
- (void)createNavigationBarLeftBarButtonItemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action;

//创建上导航左侧按钮(以view作模板)
- (void)createNavigationLeftButton:(id)view;

//创建上导航的右侧按钮
- (void)createNavigationBarRightBarButtonItemWithTitle:(NSString *)title;
- (void)createNavigationBarRightBarButtonItemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style;
- (void)createNavigationBarRightBarButtonItemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(id)target action:(SEL)action;

//创建上导航右侧按钮(以view作模板)
- (void)createNavigationRightButton:(id)view;

//创建数据
- (void)initData;
//创建视图
- (void)createView;
//添加事件
- (void)addTouchAction;
//返回行为
- (void)backAction;

//键盘弹出
- (void)keyboardShow:(NSNotification *)notification;
//键盘隐藏
- (void)keyboardHide:(NSNotification *)notification;

@end








