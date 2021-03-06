//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderViewController.h>

#import <T1Twitter/T1LiveVideoContentViewDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoFullscreenPlayerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoHeaderViewDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoViewControllerTransitionDelegate-Protocol.h>
#import <T1Twitter/TFNImageTransitionDelegate-Protocol.h>
#import <T1Twitter/TFNInterfaceOrientationChangeListenerDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerObserver-Protocol.h>

@class NSString, T1LiveVideoFullscreenPlayerViewController, T1LiveVideoHeaderView, T1LiveVideoPlayerOwnershipManager, T1LiveVideoPlayerStateController, T1TwitterTooltip, TFNInterfaceOrientationChangeListener, TFNTwitterAVPlayerController, TFNTwitterLiveVideoEvent, TFNTwitterMomentSportEventUpdate, TFSTwitterScribeContext;
@protocol T1LiveVideoHeaderViewControllerDelegate;

@interface T1LiveVideoHeaderViewController : T1ResizableHeaderViewController <T1LiveVideoHeaderViewDelegate, TFNTwitterAVPlayerControllerDelegate, TFNTwitterAVPlayerControllerObserver, TFNInterfaceOrientationChangeListenerDelegate, TFNImageTransitionDelegate, T1LiveVideoFullscreenPlayerViewControllerDelegate, T1LiveVideoContentViewDelegate, TFNTooltipDelegate, T1LiveVideoViewControllerTransitionDelegate>
{
    TFNTwitterLiveVideoEvent *_liveVideoEvent;
    TFNTwitterAVPlayerController *_playerController;
    T1LiveVideoPlayerOwnershipManager *_playerOwnershipManager;
    T1LiveVideoFullscreenPlayerViewController *_fullscreenPlayerViewController;
    TFSTwitterScribeContext *_scribeContext;
    T1LiveVideoPlayerStateController *_playerStateController;
    TFNInterfaceOrientationChangeListener *_interfaceOrientationChangeListener;
    T1TwitterTooltip *_dockButtonTooltip;
    TFNTwitterMomentSportEventUpdate *_mostRecentAvailableScoreUpdate;
}

@property(retain, nonatomic) TFNTwitterMomentSportEventUpdate *mostRecentAvailableScoreUpdate; // @synthesize mostRecentAvailableScoreUpdate=_mostRecentAvailableScoreUpdate;
@property(retain, nonatomic) T1TwitterTooltip *dockButtonTooltip; // @synthesize dockButtonTooltip=_dockButtonTooltip;
@property(retain, nonatomic) TFNInterfaceOrientationChangeListener *interfaceOrientationChangeListener; // @synthesize interfaceOrientationChangeListener=_interfaceOrientationChangeListener;
@property(retain, nonatomic) T1LiveVideoPlayerStateController *playerStateController; // @synthesize playerStateController=_playerStateController;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) T1LiveVideoFullscreenPlayerViewController *fullscreenPlayerViewController; // @synthesize fullscreenPlayerViewController=_fullscreenPlayerViewController;
@property(retain, nonatomic) T1LiveVideoPlayerOwnershipManager *playerOwnershipManager; // @synthesize playerOwnershipManager=_playerOwnershipManager;
@property(retain, nonatomic) TFNTwitterAVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) TFNTwitterLiveVideoEvent *liveVideoEvent; // @synthesize liveVideoEvent=_liveVideoEvent;
- (void).cxx_destruct;
- (id)scribeImpressionParameters;
- (void)scribeViewImpressionWithParameters:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tooltipDidTap:(id)arg1;
- (void)liveVideoContentViewDidTapEnableLocationButton:(id)arg1;
- (void)liveVideoContentViewDidTapRemindMeButton:(id)arg1;
- (_Bool)liveVideoFullscreenPlayerViewControllerWillShowDockButtonTooltip:(id)arg1;
- (void)liveVideoFullscreenPlayerViewController:(id)arg1 didChangePlayerControlsVisibility:(_Bool)arg2;
- (void)liveVideoFullscreenPlayerViewController:(id)arg1 didDismissAnimated:(_Bool)arg2 shouldDockVideo:(_Bool)arg3;
- (void)liveVideoFullscreenPlayerViewController:(id)arg1 didPresentAnimated:(_Bool)arg2;
- (void)liveVideoFullscreenPlayerViewController:(id)arg1 willPresentAnimated:(_Bool)arg2;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (void)interfaceOrientationChangeListener:(id)arg1 didObserveInterfaceOrientationChange:(long long)arg2;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 timeDidChangeTo:(double)arg4 withContinuousInterval:(double)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 playingChangedTo:(_Bool)arg4;
- (void)avPlayerControllerWillReplay:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 tracksChanged:(id)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 didChangeFromVideo:(id)arg3 toVideo:(id)arg4;
- (_Bool)avPlayerControllerShouldManagePlayerVolume:(id)arg1;
- (_Bool)avPlayerControllerShouldResumeOnAudioRouteChanges:(id)arg1;
- (_Bool)avPlayerControllerShouldHandleAudioRouteChanges:(id)arg1;
- (void)avPlayerController:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)avPlayerControllerPlaybackDidStart:(id)arg1;
- (void)avPlayerControllerDidCompletePreparingForPlayback:(id)arg1;
- (double)avPlayerController:(id)arg1 visibilityPercentageForPlayerView:(id)arg2;
- (void)avPlayerController:(id)arg1 detachPlayerView:(id)arg2 animated:(_Bool)arg3;
- (void)avPlayerController:(id)arg1 attachPlayerView:(id)arg2 animated:(_Bool)arg3;
- (void)liveVideoViewControllerModalTransitionDidPresent:(id)arg1;
- (void)liveVideoViewControllerModalTransition:(id)arg1 willConfigurePlayerController:(id)arg2;
- (void)liveVideoViewControllerModalTransition:(id)arg1 didUpdatePlayerController:(id)arg2;
- (struct CGRect)liveVideoViewControllerModalTransition:(id)arg1 targetPlayerViewFrameForTraitCollection:(id)arg2;
- (void)liveVideoHeaderView:(id)arg1 didChangePlayerControlsVisibility:(_Bool)arg2;
- (void)liveVideoHeaderViewDidTapPlayerRetryButton:(id)arg1;
- (void)liveVideoHeaderViewDidTapHeaderView:(id)arg1;
- (void)liveVideoHeaderViewDidTapDockButton:(id)arg1;
- (void)liveVideoHeaderViewDidTapPlayerChromeExpandButton:(id)arg1;
- (_Bool)liveVideoHeaderViewIsVideoPlayerExplicitlyHidden:(id)arg1;
- (void)liveVideoHeaderView:(id)arg1 setStatusBarHidden:(_Bool)arg2;
- (_Bool)liveVideoHeaderViewWillShowDockButtonTooltip:(id)arg1;
- (_Bool)liveVideoHeaderView:(id)arg1 shouldSetPlayerControlsToHidden:(_Bool)arg2;
- (_Bool)liveVideoHeaderView:(id)arg1 shouldSetNavigationBarToHidden:(_Bool)arg2;
- (void)resizableHeaderViewDidUpdateBannerImageBlurPercent:(id)arg1;
- (void)_t1_didTapClose:(id)arg1;
- (void)_t1_didTapMoreActions:(id)arg1;
- (id)_t1_actionSheetControllerForMoreActionsButton:(id)arg1;
- (id)_t1_scoreToShowForNewLiveVideoEvent:(id)arg1 oldLiveVideoEvent:(id)arg2;
- (_Bool)_t1_shouldHideAdControls;
- (_Bool)_t1_canShowDockButton;
- (_Bool)_t1_shouldShowNavBarDockButton;
- (void)_t1_scribeAction:(id)arg1 withElement:(id)arg2 parameters:(id)arg3;
- (void)_t1_scribeAction:(id)arg1 withElement:(id)arg2;
- (void)_t1_playerControlsVisibilityChanged:(_Bool)arg1;
- (_Bool)_t1_willShowDockButtonTooltip;
- (void)_t1_dismissDockButtonTooltipIfVisible;
- (void)_t1_showDockButtonTooltipIfNeeded;
- (void)_t1_presentFullscreenPlayerViewControllerAnimated:(_Bool)arg1;
- (_Bool)_t1_shouldAutomaticallyGoFullscreenForTraitCollection:(id)arg1;
- (void)_t1_userInitiatedExpand:(_Bool)arg1;
- (void)_t1_applicationDidBecomeActive;
- (void)_t1_updateHeaderViewHeightAnimated;
- (void)_t1_dockVideoPlayer;
- (void)_t1_updateControls;
- (void)_t1_setupLiveVideoHeaderView;
@property(readonly, nonatomic, getter=_t1_liveVideoHeaderView) T1LiveVideoHeaderView *liveVideoHeaderView;
- (void)_t1_cleanupVideoPlayerController;
- (void)_t1_detachPlayerView:(id)arg1;
- (void)_t1_playerDidCompletePreparingForPlayback:(id)arg1 shouldResumePlayback:(_Bool)arg2;
- (void)_t1_playerDidCompletePreparingForPlayback:(id)arg1;
- (void)_t1_attachPlayerView:(id)arg1;
- (void)_t1_configureVideoPlayerController:(_Bool)arg1;
- (void)_t1_configureVideoPlayerController;
- (void)_t1_requestNewVideoPlayerController;
- (void)_t1_updateLiveVideoHeaderViewWithPlayerController:(id)arg1 error:(id)arg2;
- (void)_t1_updateVideoPlayerControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_t1_updateVideoPlayerController;
- (void)_t1_requestInitialPlayerController;
- (void)_t1_notifyViewDidDisappear;
- (void)_t1_audioPlayerDidDispose;
- (void)_t1_audioPlayerDidPresent;
- (void)_t1_didDismissViewController:(id)arg1;
- (void)_t1_didPresentViewController:(id)arg1;
- (void)performUpdatesWithScrollPosition:(double)arg1 scrollVelocity:(double)arg2;
- (void)collapse:(id)arg1 animated:(_Bool)arg2;
- (void)expand:(_Bool)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setupNavigationItem:(id)arg1 withModalPresentation:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <T1LiveVideoHeaderViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

