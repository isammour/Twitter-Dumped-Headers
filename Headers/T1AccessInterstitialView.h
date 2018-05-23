//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, TFNAttributedTextView, TFNButton, TFNCheckmarkControl, UILabel;

@interface T1AccessInterstitialView : UIView
{
    UILabel *_checkboxLabel;
    UIView *_tapTarget;
    TFNButton *_continueButton;
    TFNCheckmarkControl *_checkbox;
    TFNAttributedTextView *_textView;
    NSDictionary *_references;
}

@property(readonly, nonatomic) NSDictionary *references; // @synthesize references=_references;
@property(readonly, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) TFNCheckmarkControl *checkbox; // @synthesize checkbox=_checkbox;
@property(readonly, nonatomic) TFNButton *continueButton; // @synthesize continueButton=_continueButton;
- (void).cxx_destruct;
- (id)_parseReferences:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end
