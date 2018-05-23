//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1DockingVisibilityControllerDelegate-Protocol.h>
#import <T1Twitter/TFNFloatingViewDelegate-Protocol.h>
#import <T1Twitter/TFNInterfaceOrientationChangeListenerDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerSource-Protocol.h>

@class NSString, T1DockingVisibilityController, T1TwitterTooltip, TFNFloatingView, TFNInterfaceOrientationChangeListener, TFNTwitterAccount, TFNViewController, UIView, UIWindow;
@protocol T1DockingControllerDelegate, T1DockingControllerUserInteractionDelegate, TFNTwitterDockable;

@interface T1DockingController : NSObject <TFNFloatingViewDelegate, T1DockingVisibilityControllerDelegate, TFNTooltipDelegate, TFNInterfaceOrientationChangeListenerDelegate, TFNTwitterAVPlayerControllerSource>
{
    _Bool _playerWasPausedWhenDocked;
    _Bool _dockedViewTransitioning;
    id <T1DockingControllerDelegate> _delegate;
    id <T1DockingControllerUserInteractionDelegate> _interactionDelegate;
    TFNViewController<TFNTwitterDockable> *_dockableViewController;
    TFNTwitterAccount *_account;
    TFNFloatingView *_dockedView;
    UIWindow *_dockingWindow;
    UIView *_dockedContainerView;
    T1DockingVisibilityController *_visibilityController;
    TFNInterfaceOrientationChangeListener *_interfaceOrientationChangeListener;
    T1TwitterTooltip *_swipeToDismissTooltip;
}

+ (struct CGSize)calculateDockedViewSizeInSuperviewSize:(struct CGSize)arg1;
@property(nonatomic, getter=isDockedViewTransitioning) _Bool dockedViewTransitioning; // @synthesize dockedViewTransitioning=_dockedViewTransitioning;
@property(nonatomic) _Bool playerWasPausedWhenDocked; // @synthesize playerWasPausedWhenDocked=_playerWasPausedWhenDocked;
@property(retain, nonatomic) T1TwitterTooltip *swipeToDismissTooltip; // @synthesize swipeToDismissTooltip=_swipeToDismissTooltip;
@property(retain, nonatomic) TFNInterfaceOrientationChangeListener *interfaceOrientationChangeListener; // @synthesize interfaceOrientationChangeListener=_interfaceOrientationChangeListener;
@property(retain, nonatomic) T1DockingVisibilityController *visibilityController; // @synthesize visibilityController=_visibilityController;
@property(nonatomic) __weak UIView *dockedContainerView; // @synthesize dockedContainerView=_dockedContainerView;
@property(nonatomic) __weak UIWindow *dockingWindow; // @synthesize dockingWindow=_dockingWindow;
@property(nonatomic) __weak TFNFloatingView *dockedView; // @synthesize dockedView=_dockedView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNViewController<TFNTwitterDockable> *dockableViewController; // @synthesize dockableViewController=_dockableViewController;
@property(nonatomic) __weak id <T1DockingControllerUserInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <T1DockingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_t1_sendScribeWithAction:(id)arg1;
- (void)interfaceOrientationChangeListener:(id)arg1 didObserveInterfaceOrientationChange:(long long)arg2;
- (void)relinquishPlayerOwnership:(id)arg1 fromOwner:(id)arg2;
- (id)requestPlayerOwnershipForPlayerID:(id)arg1 withAccount:(id)arg2 newOwner:(id)arg3;
- (id)playerForPlayerID:(id)arg1;
- (void)dockingVisibilityController:(id)arg1 changeDockingViewVisiblity:(_Bool)arg2;
- (void)floatingView:(id)arg1 didReleaseOnArea:(struct CGRect)arg2;
- (void)floatingView:(id)arg1 didMoveOnArea:(struct CGRect)arg2;
- (void)floatingView:(id)arg1 didPickupOnArea:(struct CGRect)arg2;
- (void)didSwipeFloatingView:(id)arg1;
- (void)didTapFloatingView:(id)arg1;
- (void)tooltipDidTap:(id)arg1;
- (id)_t1_scribeActionByUndockUserAction:(long long)arg1;
- (id)_t1_scribeActionWithDockUserAction:(long long)arg1;
- (void)_t1_dismissTooltipIfVisible;
- (void)_t1_showSwipeToDismissTooltipIfNeeded;
- (void)_t1_createDockedViewWithAnimationOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_cleanDockedView;
- (void)_t1_removeDockedView;
- (void)_t1_createDockedView;
- (void)_t1_showDockedView:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)_t1_calculateDockedViewFrame;
@property(readonly, nonatomic) struct CGPoint dockedViewReleasedDestinationPosition;
@property(readonly, nonatomic) struct CGRect dockedViewFrame;
- (void)undockOrDismissCurrentDockedViewIfNeeded;
- (void)undockViewWithUserAction:(long long)arg1;
- (void)dismissCurrentDockedView;
- (void)updateDockedViewVisibilityNoLongerConsideringViewController:(id)arg1;
- (void)updateDockedViewVisibilityConsideringViewController:(id)arg1;
- (void)updateDockedViewVisibilityWithVisibleViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dockViewController:(id)arg1 onWindow:(id)arg2 delegate:(id)arg3 userAction:(long long)arg4 animationOptions:(long long)arg5;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
