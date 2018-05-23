//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel, UINavigationBar;

@interface TFNTitleView : UIView
{
    _Bool _accessoryImageLockedToTitle;
    _Bool _twoLineLocked;
    _Bool _alwaysUseTwoLines;
    unsigned long long _accessoryImageLayout;
    UINavigationBar *_navigationBar;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_accessoryView;
}

@property(nonatomic) _Bool alwaysUseTwoLines; // @synthesize alwaysUseTwoLines=_alwaysUseTwoLines;
@property(readonly, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool twoLineLocked; // @synthesize twoLineLocked=_twoLineLocked;
@property(nonatomic) _Bool accessoryImageLockedToTitle; // @synthesize accessoryImageLockedToTitle=_accessoryImageLockedToTitle;
@property(nonatomic) unsigned long long accessoryImageLayout; // @synthesize accessoryImageLayout=_accessoryImageLayout;
- (void).cxx_destruct;
- (void)_layoutLabel:(id)arg1 accessoryView:(id)arg2 contentRect:(struct CGRect)arg3;
- (void)layoutSubviews;
- (void)_updateAlwaysUseTwoLines;
- (void)_updateAlphas;
- (void)_updateAccessibility;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 accessoryImage:(id)arg3 animated:(_Bool)arg4;
@property(nonatomic) long long titleLineBreakMode;
@property(retain, nonatomic) UIImage *accessoryImage;
@property(readonly, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) _Bool adjustsTitleFontSizeToFitWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 subtitleColor:(id)arg3 accessoryImage:(id)arg4 navigationBar:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end
