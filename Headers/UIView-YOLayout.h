//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YOLayout;

@interface UIView (YOLayout)
+ (void)yo_exchangeImplementation:(SEL)arg1 withImplementation:(SEL)arg2;
+ (void)useYOLayout;
- (void)layoutView;
- (void)yo_setNeedsLayout;
- (struct CGSize)yo_sizeThatFits:(struct CGSize)arg1;
- (void)yo_layoutSubviews;
- (void)yo_setFrame:(struct CGRect)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1;
- (void)viewInit;
@property(retain, nonatomic) YOLayout *layout;
@end

