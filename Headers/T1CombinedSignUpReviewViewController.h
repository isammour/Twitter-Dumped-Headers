//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1CombinedSignUpFormDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingWaitable-Protocol.h>
#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1CombinedSignUpForm, T1CombinedSignUpHeaderView, TFNActivityIndicatorButton, TFNAttributedTextView;
@protocol T1CombinedSignUpReviewViewControllerDelegate;

@interface T1CombinedSignUpReviewViewController : TFNFormViewController <TFNAttributedTextViewDelegate, T1CombinedSignUpFormDelegate, T1OnboardingWaitable>
{
    T1CombinedSignUpForm *_form;
    T1CombinedSignUpHeaderView *_headerView;
    TFNActivityIndicatorButton *_submitButton;
    TFNAttributedTextView *_signInTextView;
    TFNAttributedTextView *_detailTextView;
    TFNAttributedTextView *_noticeTextView;
    _Bool _shouldHideBirthday;
    id <T1CombinedSignUpReviewViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool shouldHideBirthday; // @synthesize shouldHideBirthday=_shouldHideBirthday;
@property(nonatomic) __weak id <T1CombinedSignUpReviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)combinedSignUpForm:(id)arg1 focusOnFormField:(id)arg2;
- (void)submitCombinedSignUpForm:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_logoTitleViewShown;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)private_getHeaderEdgeInsets:(out struct UIEdgeInsets *)arg1 footerEdgeInsets:(out struct UIEdgeInsets *)arg2 blankFooterItemHeight:(out double *)arg3;
- (unsigned long long)inputRequiredBehavior;
- (void)submitForm;
- (_Bool)includesSubmitButtonAsItem;
- (id)submitButton;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)setSections:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 name:(id)arg3 phone:(id)arg4 email:(id)arg5 birthday:(id)arg6 signUpButtonTitle:(id)arg7 signInText:(id)arg8 activeRanges:(id)arg9 detailText:(id)arg10 activeRanges:(id)arg11 noticeText:(id)arg12 activeRanges:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
