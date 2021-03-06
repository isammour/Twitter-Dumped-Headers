//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1StatusViewEventHandler-Protocol.h>

@class NSString, T1LiveVideoPromptPollStatusViewEventHandler, T1StatusView, TFNTwitterAccount, TFNTwitterLiveVideoPromptPoll, TFNViewController, TFSTwitterScribeContext, UIScrollView;
@protocol T1LiveVideoPromptPollStatusViewControllerDelegate;

@interface T1LiveVideoPromptPollStatusViewController : UIViewController <T1StatusViewEventHandler>
{
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterLiveVideoPromptPoll *_promptPoll;
    id <T1LiveVideoPromptPollStatusViewControllerDelegate> _delegate;
    TFNViewController *_supportingViewController;
    UIScrollView *_scrollView;
    T1StatusView *_statusView;
    T1LiveVideoPromptPollStatusViewEventHandler *_statusViewEventHandler;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1LiveVideoPromptPollStatusViewEventHandler *statusViewEventHandler; // @synthesize statusViewEventHandler=_statusViewEventHandler;
@property(retain, nonatomic) T1StatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak TFNViewController *supportingViewController; // @synthesize supportingViewController=_supportingViewController;
@property(nonatomic) __weak id <T1LiveVideoPromptPollStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterLiveVideoPromptPoll *promptPoll; // @synthesize promptPoll=_promptPoll;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeContext;
- (id)handleStatusViewEvent:(id)arg1;
- (unsigned long long)_t1_statusOptions;
- (void)_t1_didTapDoneButton;
- (double)_t1_desiredPageSheetHeight;
- (double)_t1_maxPageSheetHeight;
- (void)_t1_updatePageSheetHeight;
- (void)_t1_userDidVotePoll;
- (_Bool)_t1_shouldDismissForStatusViewEvent:(id)arg1;
- (void)_t1_populateWithStatus:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithPromptPoll:(id)arg1 supportingViewController:(id)arg2 account:(id)arg3 scribeContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

