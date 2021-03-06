//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, TFNMarqueeLabel, UIColor;

@interface TFNRotatingMarqueeLabelControl : UIControl
{
    NSArray *_textLabelStrings;
    UIColor *_tintColor;
    double _primaryTextAlpha;
    double _secondaryTextAlpha;
    unsigned long long _currentIndex;
    TFNMarqueeLabel *_currentLabel;
    TFNMarqueeLabel *_nextLabel;
    struct CGSize _intrinsicContentSize;
}

+ (id)_tfn_defaultFont;
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(retain, nonatomic) TFNMarqueeLabel *nextLabel; // @synthesize nextLabel=_nextLabel;
@property(retain, nonatomic) TFNMarqueeLabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double secondaryTextAlpha; // @synthesize secondaryTextAlpha=_secondaryTextAlpha;
@property(nonatomic) double primaryTextAlpha; // @synthesize primaryTextAlpha=_primaryTextAlpha;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSArray *textLabelStrings; // @synthesize textLabelStrings=_textLabelStrings;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long nextIndex;
- (id)_tfn_textColorForIndex:(unsigned long long)arg1 tintColor:(id)arg2;
- (void)_tfn_rotateToText:(id)arg1 textColor:(id)arg2 animated:(_Bool)arg3 duration:(double)arg4 delay:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_tfn_updateLabelColors;
- (void)_tfn_updateBorderColor;
- (void)stopRotationAnimation;
- (void)beginRotationAnimation;
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(_Bool)arg2 duration:(double)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_tfn_updateIntrinsicContentSizeForLabel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

