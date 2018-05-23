//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1DashContentViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DashPresenter-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>
#import <T1Twitter/TPXAnimationObserver-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, T1DashNewsCameraViewController, T1DashSplitHostView, T1DashViewController, TFNTwitterAccount, TPXSpringAnimator, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIScrollView, UITapGestureRecognizer;
@protocol T1DashSplitViewControllerDelegate;

@interface T1DashSplitViewController : UIViewController <UIGestureRecognizerDelegate, TPXAnimationObserver, T1DashContentViewControllerDelegate, TFNTwitterAuthenticated, T1DashPresenter>
{
    T1DashSplitHostView *_dashHostView;
    T1DashSplitHostView *_contentHostView;
    T1DashSplitHostView *_newsCameraHostView;
    T1DashNewsCameraViewController *_newsCameraViewController;
    UIViewController *_transitioningToViewController;
    UIViewController *_animatingToViewController;
    UIScrollView *_disabledContentScrollView;
    double _dashFullWidth;
    double _dashContentOffsetX;
    double _dashStartingContentOffsetX;
    UITapGestureRecognizer *_dashCloseTapGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_dashScreenEdgePanGestureRecognizer;
    UIPanGestureRecognizer *_dashPanContentGestureRecognizer;
    long long _dashSplitTransition;
    TPXSpringAnimator *_dashSpringAnimator;
    CDUnknownBlockType _dashSpringCompletion;
    _Bool _visible;
    _Bool _tracking;
    _Bool _dragging;
    _Bool _decelerating;
    T1DashViewController *_dashViewController;
    UIViewController *_contentViewController;
    id <T1DashSplitViewControllerDelegate> _delegate;
    long long _splitMode;
    double _dashOpenPercent;
    TFNTwitterAccount *_account;
    UIViewController *_currentViewController;
}

@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(readonly, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) long long splitMode; // @synthesize splitMode=_splitMode;
@property(nonatomic) __weak id <T1DashSplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *newsCameraViewController; // @synthesize newsCameraViewController=_newsCameraViewController;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) T1DashViewController *dashViewController; // @synthesize dashViewController=_dashViewController;
- (void).cxx_destruct;
- (void)private_updateOverlayViews;
- (void)private_updateScrollsToTop;
- (void)private_updateDashHidden;
- (id)private_dashPresentingViewController;
- (_Bool)private_canDismissNewsCamera;
- (_Bool)private_canPresentNewsCameraFromViewController:(id)arg1;
- (_Bool)private_canDismissDash;
- (_Bool)private_canPresentDashFromViewController:(id)arg1;
- (id)private_presentedDashDrawerViewController;
- (long long)private_splitModeForSize:(struct CGSize)arg1;
- (void)setCurrentViewController:(id)arg1;
- (id)scribePage;
- (id)scribe;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tpx_animationDidStop:(id)arg1;
- (void)tpx_animationDidUpdate:(id)arg1;
- (void)tpx_animationDidStart:(id)arg1;
- (void)private_activateViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)private_endActivateTransitionGestural:(_Bool)arg1 completed:(_Bool)arg2;
- (void)private_beginActivateTransitionToViewController:(id)arg1 gestural:(_Bool)arg2;
- (void)private_scrollToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)private_setDashContentOffsetX:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)private_contentOffsetXForViewController:(id)arg1;
- (double)private_contentOffsetXForViewController:(id)arg1 withBoundsSize:(struct CGSize)arg2;
- (void)private_dashShowContentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_dashCloseTap:(id)arg1;
- (void)private_dashDrawerPan:(id)arg1;
- (void)private_endDashPan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_updateDashPan:(id)arg1;
- (void)private_dashPan:(id)arg1;
- (void)private_updateDashGestureRecognizersEnabled;
- (_Bool)private_canHandleAccountSwitchingCommands;
- (void)handleNextAccountKeyCommand;
- (void)handlePreviousAccountKeyCommand;
- (_Bool)private_canHandleAccountListKeyCommand;
- (void)handleAccountListKeyCommand;
- (_Bool)private_canHandleSettingsKeyCommand;
- (void)handleSettingsKeyCommand;
- (_Bool)private_canHandleDashKeyCommand;
- (void)handleDashKeyCommand;
- (_Bool)private_canHandleCloseKeyCommand;
- (void)handleCloseKeyCommand;
- (id)keyCommands;
- (void)dismissDashContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)presentAnimatedForDashContentViewController:(id)arg1;
- (id)presentFromViewControllerForDashContentViewController:(id)arg1;
- (id)dashBarButtonItem;
@property(readonly, nonatomic, getter=isNewsCameraOpen) _Bool newsCameraOpen;
@property(readonly, nonatomic) _Bool isDashOpen;
- (void)dismissDashAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_presentDashFromViewController:(id)arg1 withPanGesture:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentDashFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissNewsCameraAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNewsCameraFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)private_layoutViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) double newsCameraOpenPercent;
@property(readonly, nonatomic) double dashOpenPercent; // @synthesize dashOpenPercent=_dashOpenPercent;
- (void)dealloc;
- (id)initWithDashViewController:(id)arg1 newsCameraViewController:(id)arg2 contentViewController:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

