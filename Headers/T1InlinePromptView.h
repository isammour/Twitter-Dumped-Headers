//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1PromptView-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsSizing-Protocol.h>

@class NSArray, NSString, T1PromptTextSpec, TFNAttributedTextView, UIButton, UIImage, UIImageView;

@interface T1InlinePromptView : UIView <TFNLayoutMetricsSizing, T1PromptView>
{
    UIImageView *_imageView;
    _Bool _showDismissOption;
    UIImage *_image;
    T1PromptTextSpec *_primaryTextSpec;
    TFNAttributedTextView *_primaryTextView;
    T1PromptTextSpec *_secondaryTextSpec;
    TFNAttributedTextView *_secondaryTextView;
    NSArray *_buttonSpecs;
    NSArray *_buttons;
    CDUnknownBlockType _dismissOptionAction;
    UIButton *_dismissButton;
}

@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissOptionAction; // @synthesize dismissOptionAction=_dismissOptionAction;
@property(readonly, nonatomic) _Bool showDismissOption; // @synthesize showDismissOption=_showDismissOption;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *buttonSpecs; // @synthesize buttonSpecs=_buttonSpecs;
@property(readonly, nonatomic) TFNAttributedTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec=_secondaryTextSpec;
@property(readonly, nonatomic) TFNAttributedTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec=_primaryTextSpec;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)private_dismissAction:(id)arg1;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (id)accessibilityElements;
- (double)private_layoutWithMetrics:(id)arg1 atWidth:(double)arg2 apply:(_Bool)arg3;
- (void)layoutSubviews;
- (void)setShowDismissOption:(_Bool)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly, nonatomic) TFNAttributedTextView *detailTextView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

