//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNFloatingActionButtonItem, UIColor, UIImageView;

@interface TFNFloatingActionButtonItemView : UIView
{
    TFNFloatingActionButtonItem *_item;
    UIImageView *_iconView;
    UIColor *_iconColor;
    double _iconSize;
}

@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TFNFloatingActionButtonItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_tfn_updateIcon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

