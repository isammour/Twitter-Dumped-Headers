//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNAttributedTextView, UIColor;

@interface T1WizardLoadingTextView : UIView
{
    UIColor *_color;
    long long _alignment;
    TFNAttributedTextView *_textView;
}

+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
@property(retain, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)hideText;
- (void)showText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

