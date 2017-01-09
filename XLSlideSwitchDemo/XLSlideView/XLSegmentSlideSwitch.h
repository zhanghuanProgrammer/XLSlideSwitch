//
//  XLSegmentSlideSwitch.h
//  XLSlideSwitchDemo
//
//  Created by Apple on 2017/1/9.
//  Copyright © 2017年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XLSlideSwitchDelegate.h"

@interface XLSegmentSlideSwitch : UIView
/**
 代理
 */
@property (weak,nonatomic) id <XLSlideSwitchDelegate>delegate;
/**
 SegmentedControl
 */
@property (strong,nonatomic,readonly)  UISegmentedControl *segmentedControl;
/**
 需要显示的viewController集合
 */
@property (strong,nonatomic) NSMutableArray *viewControllers;
/**
 当前选中位置
 */
@property (assign,nonatomic) NSInteger selectedIndex;
/**
 Segmented高亮颜色
 */
@property (strong,nonatomic) UIColor *tintColor;

@end