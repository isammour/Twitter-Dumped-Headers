//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

@class T1NativeLeadGenCardViewModel, TFNTappableHighlightView, UILabel;
@protocol T1NativeLeadGenCardSuccessViewDelegate;

@interface T1NativeLeadGenCardSuccessView : TFNLayoutableView
{
    T1NativeLeadGenCardViewModel *_viewModel;
    id <T1NativeLeadGenCardSuccessViewDelegate> _delegate;
    UILabel *_submissionMessageLabel;
    UILabel *_contactLabel;
    UILabel *_learnMoreLabel;
    TFNTappableHighlightView *_learnMoreHighlight;
}

@property(retain, nonatomic) TFNTappableHighlightView *learnMoreHighlight; // @synthesize learnMoreHighlight=_learnMoreHighlight;
@property(retain, nonatomic) UILabel *learnMoreLabel; // @synthesize learnMoreLabel=_learnMoreLabel;
@property(retain, nonatomic) UILabel *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain, nonatomic) UILabel *submissionMessageLabel; // @synthesize submissionMessageLabel=_submissionMessageLabel;
@property(nonatomic) __weak id <T1NativeLeadGenCardSuccessViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1NativeLeadGenCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_learnMore:(id)arg1;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

