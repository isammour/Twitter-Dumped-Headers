//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TFNHoverBarValueView : UIView
{
    UILabel *_valueLabel;
    UIView *_toolTipView;
}

@property(retain, nonatomic) UIView *toolTipView; // @synthesize toolTipView=_toolTipView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void).cxx_destruct;
- (struct CGSize)barValueLabelSize;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIFont *barValueFont;
@property(retain, nonatomic) UIColor *barValueTextColor;
@property(retain, nonatomic) NSString *barValueText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

