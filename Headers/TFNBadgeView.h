//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, NSString, UIColor, UIFont, UIImageView, UILabel;

@interface TFNBadgeView : UIView
{
    _Bool _numberless;
    _Bool _hideWhenNotInUse;
    unsigned long long _count;
    NSNumber *_overflowLimit;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_overflowString;
    double _backgroundSideRadius;
    double _borderWidth;
    UIColor *_badgeColor;
    UIColor *_borderColor;
    UIImageView *_imageView;
    UILabel *_label;
    UILabel *_overflowLabel;
}

+ (id)tfn_badgeImageWithOuterDynamicColor:(id)arg1 innerDynamicColor:(id)arg2 diameter:(double)arg3 borderWidth:(double)arg4 badgeView:(id)arg5;
@property(retain, nonatomic) UILabel *overflowLabel; // @synthesize overflowLabel=_overflowLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool hideWhenNotInUse; // @synthesize hideWhenNotInUse=_hideWhenNotInUse;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double backgroundSideRadius; // @synthesize backgroundSideRadius=_backgroundSideRadius;
@property(retain, nonatomic) NSString *overflowString; // @synthesize overflowString=_overflowString;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSNumber *overflowLimit; // @synthesize overflowLimit=_overflowLimit;
@property(nonatomic) _Bool numberless; // @synthesize numberless=_numberless;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)tfn_updateBackgroundImage;
- (void)tfn_updateHidden;
- (void)tfn_updateLabels;
- (_Bool)tfn_shouldShowOverflow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
