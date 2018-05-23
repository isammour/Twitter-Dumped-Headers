//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1OnboardingWaitable-Protocol.h>
#import <T1Twitter/T1VerifyPINFormDelegate-Protocol.h>
#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1OnboardingFormHeaderView, T1VerifyPINForm, TFNActivityIndicatorButton, TFNAttributedTextView;
@protocol T1PhoneVerificationViewControllerDelegate;

@interface T1PhoneVerificationViewController : TFNFormViewController <TFNAttributedTextViewDelegate, T1VerifyPINFormDelegate, T1OnboardingWaitable>
{
    T1VerifyPINForm *_form;
    T1OnboardingFormHeaderView *_headerView;
    TFNActivityIndicatorButton *_verifyButton;
    TFNAttributedTextView *_detailTextView;
    id <T1PhoneVerificationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <T1PhoneVerificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)verifyPINFormShouldSubmit:(id)arg1;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)submitForm;
- (_Bool)includesSubmitButtonAsItem;
- (id)submitButton;
- (void)setSections:(id)arg1;
- (_Bool)addsDoneBarButtonButtonItemToNavigationBar;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 codeHint:(id)arg3 verifyButtonTitle:(id)arg4 detailText:(id)arg5 activeRanges:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
