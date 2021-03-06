//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1SignUpFormViewController.h>

@class T1SignUpFormFooterView, T1UIInstrumentationWebViewController;
@protocol T1EnterEmailViewControllerDelegate;

@interface T1EnterEmailViewController : T1SignUpFormViewController
{
    _Bool _forSignUp;
    _Bool _jsInstrumentationEnabled;
    id <T1EnterEmailViewControllerDelegate> _delegate;
    T1SignUpFormFooterView *_footerView;
    T1UIInstrumentationWebViewController *_jsInstrumentationViewController;
}

@property(retain, nonatomic) T1UIInstrumentationWebViewController *jsInstrumentationViewController; // @synthesize jsInstrumentationViewController=_jsInstrumentationViewController;
@property(retain, nonatomic) T1SignUpFormFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <T1EnterEmailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapAdvancedOptions;
- (void)_skipEnterEmail;
- (void)_usePhoneInstead;
- (void)submitForm;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)footerItems;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initForSignUp:(_Bool)arg1;

@end

