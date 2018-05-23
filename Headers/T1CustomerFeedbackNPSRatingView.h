//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CustomerFeedbackBaseRatingView.h>

@class NSArray, UILabel;

@interface T1CustomerFeedbackNPSRatingView : T1CustomerFeedbackBaseRatingView
{
    NSArray *_buttons;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

+ (_Bool)shouldDisplayWideFormatForWidth:(double)arg1;
+ (double)intrinsicHeightForWidth:(double)arg1;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)resetSelection;
- (unsigned long long)maxValue;
- (unsigned long long)minValue;
- (void)_layoutSingleRow;
- (void)_layoutTwoRow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

