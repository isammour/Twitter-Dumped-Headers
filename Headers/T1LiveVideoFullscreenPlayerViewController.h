//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1LiveVideoPlayerChromeControllerDataSource-Protocol.h>
#import <T1Twitter/TFNInterfaceOrientationChangeListenerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerObserver-Protocol.h>

@class NSArray, NSString, T1LiveVideoPlayerChromeController, T1VolumeView, TFNFullscreenMediaTransition, TFNInterfaceOrientationChangeListener, TFNTwitterAVControlBar, TFNTwitterAVPlayerController, TFNTwitterAccount, TFNTwitterLiveVideoEvent, UIButton, UIView;
@protocol T1LiveVideoFullscreenPlayerViewControllerDelegate;

@interface T1LiveVideoFullscreenPlayerViewController : TFNViewController <TFNTwitterAVPlayerControllerDelegate, TFNTwitterAVPlayerControllerObserver, T1LiveVideoPlayerChromeControllerDataSource, TFNInterfaceOrientationChangeListenerDelegate>
{
    _Bool _transitioning;
    TFNTwitterAccount *_account;
    id <T1LiveVideoFullscreenPlayerViewControllerDelegate> _delegate;
    TFNTwitterLiveVideoEvent *_liveVideoEvent;
    TFNTwitterAVControlBar *_controlBar;
    UIButton *_navBarDockButton;
    TFNTwitterAVPlayerController *_playerController;
    TFNFullscreenMediaTransition *_fullscreenPlayerTransition;
    T1LiveVideoPlayerChromeController *_chromeController;
    UIView *_topChromeView;
    UIButton *_moreActionsButton;
    T1VolumeView *_volumeView;
    NSArray *_volumeViewConstraints;
    TFNInterfaceOrientationChangeListener *_interfaceOrientationChangeListener;
}

@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) TFNInterfaceOrientationChangeListener *interfaceOrientationChangeListener; // @synthesize interfaceOrientationChangeListener=_interfaceOrientationChangeListener;
@property(retain, nonatomic) NSArray *volumeViewConstraints; // @synthesize volumeViewConstraints=_volumeViewConstraints;
@property(nonatomic) __weak T1VolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIButton *moreActionsButton; // @synthesize moreActionsButton=_moreActionsButton;
@property(retain, nonatomic) UIView *topChromeView; // @synthesize topChromeView=_topChromeView;
@property(retain, nonatomic) T1LiveVideoPlayerChromeController *chromeController; // @synthesize chromeController=_chromeController;
@property(retain, nonatomic) TFNFullscreenMediaTransition *fullscreenPlayerTransition; // @synthesize fullscreenPlayerTransition=_fullscreenPlayerTransition;
@property(retain, nonatomic) TFNTwitterAVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) UIButton *navBarDockButton; // @synthesize navBarDockButton=_navBarDockButton;
@property(retain, nonatomic) TFNTwitterAVControlBar *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) TFNTwitterLiveVideoEvent *liveVideoEvent; // @synthesize liveVideoEvent=_liveVideoEvent;
@property(nonatomic) __weak id <T1LiveVideoFullscreenPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)interfaceOrientationChangeListener:(id)arg1 didObserveInterfaceOrientationChange:(long long)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setPlayerControlsHidden:(_Bool)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setPlayerControlsAlpha:(double)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setNavigationBarHidden:(_Bool)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setNavigationBarAlpha:(double)arg2;
- (void)liveVideoPlayerChromeController:(id)arg1 setStatusBarHidden:(_Bool)arg2;
- (_Bool)liveVideoPlayerChromeControllerWillShowDockButtonTooltip:(id)arg1;
- (_Bool)liveVideoPlayerChromeController:(id)arg1 shouldSetPlayerControlsToHidden:(_Bool)arg2;
- (_Bool)liveVideoPlayerChromeController:(id)arg1 shouldSetNavigationBarToHidden:(_Bool)arg2;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 playingChangedTo:(_Bool)arg4;
- (_Bool)avPlayerControllerShouldManagePlayerVolume:(id)arg1;
- (_Bool)avPlayerControllerShouldResumeOnAudioRouteChanges:(id)arg1;
- (_Bool)avPlayerControllerShouldHandleAudioRouteChanges:(id)arg1;
- (void)avPlayerControllerDidCompletePreparingForPlayback:(id)arg1;
- (double)avPlayerController:(id)arg1 visibilityPercentageForPlayerView:(id)arg2;
- (void)avPlayerController:(id)arg1 detachPlayerView:(id)arg2 animated:(_Bool)arg3;
- (void)avPlayerController:(id)arg1 attachPlayerView:(id)arg2 animated:(_Bool)arg3;
- (void)_t1_dockButtonTapped;
- (void)_t1_contractButtonTapped;
- (void)_t1_moreActionsButtonTapped;
- (_Bool)_t1_shouldListenForDeviceOrientationChanges;
- (void)_t1_dismissAnimated:(_Bool)arg1 shouldDockVideo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateVolumeViewConstraints:(id)arg1;
- (void)_t1_updateVolumeViewIfNeeded;
- (_Bool)_t1_shouldHideAdControls;
- (_Bool)_t1_canShowDockButton;
- (void)_t1_updateControls;
- (void)handleCloseKeyCommand;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (void)tfn_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromMediaView:(id)arg1 inSourceViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAccount:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateViewConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithPlayerController:(id)arg1 account:(id)arg2 imageTransitionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

