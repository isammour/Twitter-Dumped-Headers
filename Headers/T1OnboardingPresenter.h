//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, TFNHUD, UIViewController;
@protocol T1OnboardingPresenterDelegate, T1OnboardingWaitable, TFNNavigationStack;

@interface T1OnboardingPresenter : NSObject
{
    UIViewController<TFNNavigationStack> *_originalNavigationController;
    UIViewController *_originalTopViewController;
    UIViewController *_originalPresentingViewController;
    long long _originalPresentationType;
    id <T1OnboardingWaitable> _waitingWaitable;
    NSMapTable *_viewControllerSubtaskIDMap;
    TFNHUD *_hud;
    id <T1OnboardingPresenterDelegate> _delegate;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) __weak id <T1OnboardingPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)private_stopWaiting;
- (void)private_waitWithMessage:(id)arg1 waitable:(id)arg2;
- (id)private_currentWaitable;
- (long long)private_currentPresentationType;
- (id)private_currentNavigationController;
- (id)private_allNavigationControllers;
- (void)private_restoreViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)private_firstViewControllerWithSubtaskID:(id)arg1;
- (void)private_associateNewViewControllersWithSubtaskID:(id)arg1;
- (void)private_restoreOriginalNavigationStateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)private_dismissModalOnboardingPresenter;
- (void)private_dismissPushOnboardingPresenter;
- (void)private_updateViewController:(id)arg1 leftBarButtonItemForPush:(_Bool)arg2 presentingViewController:(id)arg3;
@property(readonly, nonatomic) NSString *topViewControllerSubtaskID;
- (_Bool)restoreSubtaskWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishSubtaskWithID:(id)arg1;
- (void)willStartSubtaskWithID:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitWithMessage:(id)arg1;
- (void)waitWithMessage:(id)arg1 waitable:(id)arg2;
- (void)handleActionLinkURL:(id)arg1;
- (void)handleDeepLinkURL:(id)arg1;
- (void)handleWebURL:(id)arg1 withTitle:(id)arg2 chromeless:(_Bool)arg3;
- (id)private_currentViewController;
- (id)willPresentOverCurrentViewController;
- (id)pushViewController:(id)arg1 withPresentationType:(long long)arg2 isTaskBoundary:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initInternal;
- (id)initWithPresentingViewController:(id)arg1;
- (id)initWithNavigationController:(id)arg1 presentationType:(long long)arg2;

@end
