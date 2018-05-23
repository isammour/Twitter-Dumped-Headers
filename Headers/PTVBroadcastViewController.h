//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVViewController.h>

#import <PeriscopeViewer/LHLSLogDelegate-Protocol.h>
#import <PeriscopeViewer/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVAmplifyProgramsViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastDetailsViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastOverflowMenuViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastOverflowViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastPublisherDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastShareSheetControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVChangeExpirationActionSheetControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVChatControllerObserver-Protocol.h>
#import <PeriscopeViewer/PTVFileRecordDelegate-Protocol.h>
#import <PeriscopeViewer/PTVFocusIndicatorDelegate-Protocol.h>
#import <PeriscopeViewer/PTVGiftingContributorsTableViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVInteractiveDismissalTransitionDelegate-Protocol.h>
#import <PeriscopeViewer/PTVInteractiveModalControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVLocationServicesDelegate-Protocol.h>
#import <PeriscopeViewer/PTVModalPresentationCoordinatorDelegate-Protocol.h>
#import <PeriscopeViewer/PTVModalPresentationManagerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVOverflowViewControllerAppearanceDelegate-Protocol.h>
#import <PeriscopeViewer/PTVPublishingViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVScreenshotObserverDelegate-Protocol.h>
#import <PeriscopeViewer/PTVShareBroadcastCoordinatorDelegate-Protocol.h>
#import <PeriscopeViewer/PTVShareBroadcastViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVSketchInputViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVTypeAheadSuggestionsTableViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVVideoOverlayViewControllerBroadcasterDelegate-Protocol.h>
#import <PeriscopeViewer/PTVVideoOverlayViewControllerCameraDelegate-Protocol.h>
#import <PeriscopeViewer/PTVVideoReplayDelegate-Protocol.h>

@class CLLocation, NSDate, NSObject, NSString, NSTimer, PTVAccessBroadcaster, PTVAsyncLog, PTVBroadcast, PTVBroadcastPublisher, PTVChatController, PTVCreateBroadcastAnalyticsManager, PTVFocusIndicator, PTVInteractiveDismissalTransition, PTVLocationServices, PTVModalPresentationCoordinator, PTVPublishingViewController, PTVScreenshotObserver, PTVShareBroadcastCoordinator, PTVSignal, PTVSketchPaletteViewController, PTVSketchTouchInterpreter, PTVStatusWindow, PTVTwitterAuthenticationModel, PTVTypeAheadSuggestionsTableViewController, PTVVideoOverlayViewController, PTVWorkClientWithCompletion, UIImage, UILocalNotification, UIViewController, UIWindow;
@protocol PTVCustomTwitterViewDelegate, PTVDismissButtonDelegate, PTVLoggedInUserProtocol, PTVModalPresentationManagerDelegate, PTVPaletteViewController, PTVTwitterCameraBroadcastStateDelegate, PTVTwitterIntegrationDelegate;

@interface PTVBroadcastViewController : PTVViewController <PTVLocationServicesDelegate, PTVFocusIndicatorDelegate, PTVVideoOverlayViewControllerCameraDelegate, PTVVideoReplayDelegate, LHLSLogDelegate, MFMailComposeViewControllerDelegate, PTVBroadcastPublisherDelegate, PTVScreenshotObserverDelegate, PTVBroadcastDetailsViewControllerDelegate, PTVModalPresentationCoordinatorDelegate, PTVChangeExpirationActionSheetControllerDelegate, PTVChatControllerObserver, PTVBroadcastOverflowViewControllerDelegate, PTVOverflowViewControllerAppearanceDelegate, PTVAmplifyProgramsViewControllerDelegate, PTVGiftingContributorsTableViewControllerDelegate, PTVBroadcastViewDelegate, PTVPublishingViewControllerDelegate, PTVSketchInputViewDelegate, PTVVideoOverlayViewControllerBroadcasterDelegate, PTVInteractiveDismissalTransitionDelegate, PTVInteractiveModalControllerDelegate, PTVBroadcastOverflowMenuViewControllerDelegate, PTVModalPresentationManagerDelegate, PTVFileRecordDelegate, PTVBroadcastShareSheetControllerDelegate, PTVTypeAheadSuggestionsTableViewControllerDelegate, PTVShareBroadcastViewControllerDelegate, PTVShareBroadcastCoordinatorDelegate>
{
    UIWindow *_mainWindow;
    PTVStatusWindow *_statusWindow;
    NSString *_authToken;
    NSString *_authSecret;
    _Bool _isVisible;
    NSString *_startingBroadcastTitle;
    PTVTypeAheadSuggestionsTableViewController *_suggestedHashtagsTableViewController;
    _Bool _hasExternalCamera;
    PTVPublishingViewController *_publishingViewController;
    PTVLocationServices *_locationManager;
    _Bool _isVideoConnected;
    struct CLLocationCoordinate2D _lastKnownCoordinate;
    PTVFocusIndicator *_focusIndicator;
    _Bool _usingExternalCamera;
    _Bool _externalCameraIs360;
    _Bool _hasSeenLowSpaceWarning;
    PTVInteractiveDismissalTransition *_interactiveDismissalTransition;
    PTVCreateBroadcastAnalyticsManager *_createBroadcastAnalyticsManager;
    PTVBroadcastViewController *_weakSelf;
    _Bool _hasHandledBroadcastStateChangeToOffline;
    int _bytesPerSecond;
    _Bool _waitingForDimensions;
    _Bool _waitingToCreateBroadcast;
    _Bool _started;
    unsigned long long _speedTestRetryCount;
    long long _speedTestSizeInBytes;
    double _speedTestDuration;
    NSDate *_timeSinceCreateAttempt;
    _Bool _isObservingCameraDetector;
    UILocalNotification *_goProResignActiveWarning;
    UILocalNotification *_goProResignActiveBroadcastEndedNotice;
    unsigned long long _lastKnownLocationMessageNTPTime;
    NSDate *_timeLastKnownLocationWasSent;
    _Bool _isRecordingBroadcast;
    _Bool _hasAutoSavedToCameraRoll;
    NSDate *_startRecordingBroadcastDate;
    NSDate *_stopRecordingBroadcastDate;
    PTVWorkClientWithCompletion *_workClientDelegateForFetchingBlockedUser;
    PTVShareBroadcastCoordinator *_shareBroadcastCoordinator;
    PTVScreenshotObserver *_screenshotObserver;
    PTVModalPresentationCoordinator *_overflowModalPresentationCoordinator;
    _Bool _didSaveBroadcastToCameraRoll;
    NSObject<PTVTwitterCameraBroadcastStateDelegate> *_twitterCameraBroadcastStateDelegate;
    _Bool _isApplicationResignActive;
    _Bool _isApplicationInBackground;
    _Bool _isDeviceOnThePhone;
    _Bool _useLargeChatFont;
    _Bool _performingSpeedTest;
    _Bool _creatingBroadcast;
    _Bool _rtmpConnectSuccess;
    PTVBroadcastPublisher *_publisher;
    PTVAsyncLog *_publishingLogs;
    unsigned long long _broadcastingCamera;
    PTVVideoOverlayViewController *_videoOverlayViewController;
    id <PTVDismissButtonDelegate> _dismissDelegate;
    id <PTVCustomTwitterViewDelegate> _customTwitterViewDelegate;
    CLLocation *_twitterLocation;
    NSString *_twitterLocationDisplayname;
    UIImage *_twitterAvatar;
    NSString *_twitterPlaceholderString;
    UIImage *_twitterLocationPinImage;
    NSString *_twitterPrependedText;
    unsigned long long _twitterRemainingCharacterLimit;
    id <PTVModalPresentationManagerDelegate> _modalDelegate;
    NSTimer *_hashtagSuggestionsTooltipTimer;
    NSTimer *_uploadLogsTimer;
    NSTimer *_stopBroadcastFromBackgroundTimer;
    NSTimer *_emailLogsTimer;
    NSDate *_rtmpBeginConnectDate;
    long long _rtmpConnectTimeMS;
    PTVSignal *_stopBroadcastSignal;
    NSString *_publishingRegion;
    NSTimer *_throttleLocationReportingTimer;
    PTVSketchTouchInterpreter *_sketchTouchInterpreter;
    PTVSketchPaletteViewController *_sketchPalette;
    UIViewController<PTVPaletteViewController> *_presentedPalette;
}

+ (Class)ShareBroadcastCoordinatorClass;
+ (id)TwitterBroadcastViewControllerForLoggedInUser:(id)arg1 PublishingViewController:(id)arg2 StartingBroadcastTitle:(id)arg3 StatusWindow:(id)arg4 SSLPinningDelegate:(id)arg5 TwitterCameraBroadcastStateDelegate:(id)arg6;
+ (id)BroadcastViewControllerForLoggedInUser:(id)arg1 StartingBroadcastTitle:(id)arg2 StatusWindow:(id)arg3 SSLPinningDelegate:(id)arg4;
+ (id)VideoOverlayViewControllerWithPublisher:(id)arg1 ChatSectionViewController:(id)arg2;
@property(retain, nonatomic) UIViewController<PTVPaletteViewController> *presentedPalette; // @synthesize presentedPalette=_presentedPalette;
@property(retain, nonatomic) PTVSketchPaletteViewController *sketchPalette; // @synthesize sketchPalette=_sketchPalette;
@property(retain, nonatomic) PTVSketchTouchInterpreter *sketchTouchInterpreter; // @synthesize sketchTouchInterpreter=_sketchTouchInterpreter;
@property(retain, nonatomic) NSTimer *throttleLocationReportingTimer; // @synthesize throttleLocationReportingTimer=_throttleLocationReportingTimer;
@property(retain, nonatomic) NSString *publishingRegion; // @synthesize publishingRegion=_publishingRegion;
@property(retain, nonatomic) PTVSignal *stopBroadcastSignal; // @synthesize stopBroadcastSignal=_stopBroadcastSignal;
@property(nonatomic) _Bool rtmpConnectSuccess; // @synthesize rtmpConnectSuccess=_rtmpConnectSuccess;
@property(nonatomic) long long rtmpConnectTimeMS; // @synthesize rtmpConnectTimeMS=_rtmpConnectTimeMS;
@property(retain, nonatomic) NSDate *rtmpBeginConnectDate; // @synthesize rtmpBeginConnectDate=_rtmpBeginConnectDate;
@property(retain, nonatomic) NSTimer *emailLogsTimer; // @synthesize emailLogsTimer=_emailLogsTimer;
@property(retain, nonatomic) NSTimer *stopBroadcastFromBackgroundTimer; // @synthesize stopBroadcastFromBackgroundTimer=_stopBroadcastFromBackgroundTimer;
@property(retain, nonatomic) NSTimer *uploadLogsTimer; // @synthesize uploadLogsTimer=_uploadLogsTimer;
@property(retain, nonatomic) NSTimer *hashtagSuggestionsTooltipTimer; // @synthesize hashtagSuggestionsTooltipTimer=_hashtagSuggestionsTooltipTimer;
@property(nonatomic) _Bool creatingBroadcast; // @synthesize creatingBroadcast=_creatingBroadcast;
@property(nonatomic) _Bool performingSpeedTest; // @synthesize performingSpeedTest=_performingSpeedTest;
@property(nonatomic) __weak id <PTVModalPresentationManagerDelegate> modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(nonatomic) unsigned long long twitterRemainingCharacterLimit; // @synthesize twitterRemainingCharacterLimit=_twitterRemainingCharacterLimit;
@property(copy, nonatomic) NSString *twitterPrependedText; // @synthesize twitterPrependedText=_twitterPrependedText;
@property(retain, nonatomic) UIImage *twitterLocationPinImage; // @synthesize twitterLocationPinImage=_twitterLocationPinImage;
@property(copy, nonatomic) NSString *twitterPlaceholderString; // @synthesize twitterPlaceholderString=_twitterPlaceholderString;
@property(retain, nonatomic) UIImage *twitterAvatar; // @synthesize twitterAvatar=_twitterAvatar;
@property(copy, nonatomic) NSString *twitterLocationDisplayname; // @synthesize twitterLocationDisplayname=_twitterLocationDisplayname;
@property(retain, nonatomic) CLLocation *twitterLocation; // @synthesize twitterLocation=_twitterLocation;
@property(nonatomic) __weak id <PTVCustomTwitterViewDelegate> customTwitterViewDelegate; // @synthesize customTwitterViewDelegate=_customTwitterViewDelegate;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) _Bool isDeviceOnThePhone; // @synthesize isDeviceOnThePhone=_isDeviceOnThePhone;
@property(nonatomic) _Bool isApplicationInBackground; // @synthesize isApplicationInBackground=_isApplicationInBackground;
@property(nonatomic) _Bool isApplicationResignActive; // @synthesize isApplicationResignActive=_isApplicationResignActive;
@property(nonatomic) __weak id <PTVDismissButtonDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(readonly, nonatomic) PTVVideoOverlayViewController *videoOverlayViewController; // @synthesize videoOverlayViewController=_videoOverlayViewController;
@property(nonatomic) unsigned long long broadcastingCamera; // @synthesize broadcastingCamera=_broadcastingCamera;
@property(readonly, nonatomic) PTVAsyncLog *publishingLogs; // @synthesize publishingLogs=_publishingLogs;
@property(readonly, nonatomic) PTVBroadcastPublisher *publisher; // @synthesize publisher=_publisher;
- (void).cxx_destruct;
- (void)seekVideoToPosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdatePlaybackPointFrom:(id)arg1;
- (void)presentAmplifyProgramsFromMenuViewController:(id)arg1;
- (id)defaultModalForUserWithID:(id)arg1 modalDelegate:(id)arg2;
- (id)modalForUserWithID:(id)arg1 modalDelegate:(id)arg2 configureBlock:(CDUnknownBlockType)arg3;
- (void)presentModalForUser:(id)arg1;
- (void)willPresentOverflowMenu:(id)arg1;
- (void)presentOverflowMenu;
- (id)presentedOverflowMenu;
- (void)overflowViewControllerDidSelectDismiss:(id)arg1;
- (void)presentOverflowViewWithRootController:(id)arg1;
- (void)screenshotObserverScreenshotIsReadyToFetch:(id)arg1;
- (void)screenshotObserverDidObserveUserTakeScreenshot:(id)arg1;
- (id)shareBroadcastCoordinator;
- (void)presentShareActionSheetWithShareHighlightSelected:(_Bool)arg1;
- (id)initializeShareBroadcastViewControllerShareHighlightSelectedByDefault:(_Bool)arg1 currentVideoPlayerSize:(struct CGSize)arg2;
- (id)broadcastShareSheetControllerForSharingBroadcast;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)emailBroadcasterLogs;
- (void)reportPostBroadcastAnalyticsIfNeeded;
- (void)trackExternalCameraAnalytics;
- (void)uploadBroadcasterLogs;
- (void)uploadBroadcasterMetrics;
- (id)vidManStats;
- (void)printAndStoreLogEntry:(id)arg1;
- (void)collectRTMPConnectStatsIfNeeded;
- (void)associateTweetIDWithCurrentBroadcast:(id)arg1 amplifyProgramID:(id)arg2;
@property(retain, nonatomic) PTVTwitterAuthenticationModel *twitterAuthenticationModel;
@property(nonatomic) __weak id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate;
- (void)updateBroadcastViewersAndStatsIfNeeded;
- (void)stopTrackingLocation;
- (_Bool)startTrackingLocationIfCapable;
- (void)sendLastKnownLocationMessage;
- (_Bool)shouldThrottleSendingLocationMessages;
- (_Bool)shareLocationEnabled;
- (void)locationManagerDidChangeAuthorizationStatus:(int)arg1;
- (void)locationManagerFailedWithError:(id)arg1;
- (void)standardUpdateUserLocation:(struct CLLocationCoordinate2D)arg1 heading:(double)arg2;
- (void)sketchInputView:(id)arg1 didPinchToScale:(double)arg2 velocity:(double)arg3;
- (void)didDoubleTapSketchInputView:(id)arg1;
- (void)sketchInputView:(id)arg1 didEndStrokeWithTouches:(id)arg2;
- (void)sketchInputView:(id)arg1 didReceiveStrokeTouches:(id)arg2;
- (void)sketchInputView:(id)arg1 didBeginStrokeWithTouches:(id)arg2;
- (void)sketchInputView:(id)arg1 didChangeToSketchColor:(id)arg2;
- (void)sketchInputView:(id)arg1 didRequestColorWithTouches:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sketchInputViewDidFinishDrawing:(id)arg1;
- (void)hideSketchPaletteIfVisible;
- (void)showSketchPaletteIfHidden;
- (void)didRequestSwitchboard;
- (void)didRequestSketch;
- (void)toggleBroadcastHiddenStateFromMenu:(id)arg1;
- (void)leavePaletteMode:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterPaletteModeWithPadding:(double)arg1 disableInteraction:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissPalette;
- (void)presentPaletteAboveBroadcast:(id)arg1;
- (void)presentPalette:(id)arg1;
- (void)replayControllerDidReachEndOfVideo;
- (void)replayControllerDidCancelScrubbing;
- (void)replayControllerDidFinishScrubbingAtSeekTime:(double)arg1;
- (void)replayControllerWillBeginScrubbing;
- (void)pauseReplay;
- (void)playReplay;
- (void)getBroadcastReplayDataFailedWithError:(id)arg1;
- (void)getBroadcastReplayDataSucceededWithVideoAccess:(id)arg1;
- (void)getBroadcastReplayData;
- (id)replayVideoViewController;
- (void)executeLowSpaceWarning;
- (void)outOfSpace;
- (void)saveBroadcastToCameraRollCompletedWithError:(id)arg1 shouldNotifyUserOfErrors:(_Bool)arg2;
- (void)saveBroadcastToCameraRoll;
- (void)autoSaveToCameraRollIfNeeded;
- (void)makeCameraRollAvailable;
- (_Bool)canSaveBroadcastToCameraRoll;
- (void)stopRecordingBroadcast:(_Bool)arg1;
- (void)startRecordingBroadcast;
- (void)deleteBroadcastCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)deleteBroadcastFromServer;
- (_Bool)shouldBlockForceStopBroadcast;
- (void)forceStopBroadcast;
- (void)stopBroadcast:(_Bool)arg1;
- (void)startUploadingLogsTimer:(_Bool)arg1;
- (void)disconnectChat;
- (void)connectChat;
- (void)disconnectVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)disconnectVideo;
- (void)connectVideo;
- (void)replayAvailabilityStateDidChange:(unsigned long long)arg1;
- (void)broadcastStateChangedToOffline;
- (void)determineBroadcastViewState;
- (void)determinePoorConnectionState;
- (void)inBackgroundOrOnPhoneStateChanged;
- (void)didDisconnectIncomingPhoneCall;
- (void)didAcceptIncomingPhoneCall;
- (void)didReceiveIncomingPhoneCall;
- (void)presentBroadcastDetailsFromMenuViewController:(id)arg1;
- (void)presentBroadcastDetails;
- (void)broadcastPreferredImageURLDidChange;
- (void)broadcastStateDidChange;
- (void)clearPreBroadcastKeyboardTitleAccessoryView;
- (void)showTypeAheadSuggestionTooltipForSuggestion:(id)arg1 withNCharactersOverLimit:(unsigned long long)arg2;
- (id)broadcastTitleWithSuggestion:(id)arg1 replacingRange:(struct _NSRange)arg2;
- (_Bool)willSuggestionExceedMaxBroadcastTitleLength:(id)arg1 ifReplacingRange:(struct _NSRange)arg2;
- (void)didSelectSuggestion:(id)arg1 replacingRange:(struct _NSRange)arg2 fromKeyboardAccessoryView:(id)arg3;
- (void)didScrollSuggestionsFromKeyboardAccessoryView:(id)arg1;
- (void)didClearSuggestionsFromKeyboardAccessoryView:(id)arg1;
- (void)didLoadSuggestionsFromKeyboardAccessoryView:(id)arg1;
- (void)createSuggestedHashTagModelIfNeeded;
- (_Bool)shouldDisableSuggestedHashtagsFeature;
- (void)removeTwitterLocation;
- (void)promptDisableLocation:(id)arg1;
- (id)preferredLanguages;
- (void)uploadBroadcastThumbnailFailedWithError:(id)arg1;
- (_Bool)uploadBroadcastThumbnailIfSufficientBandwidth;
- (unsigned long long)chatType;
- (_Bool)isPublicHiddenBroadcast;
- (_Bool)isPrivateBroadcast;
- (id)audienceChannelIDs;
- (id)audienceUserIDs;
- (void)startBroadcastFailedWithError:(id)arg1;
- (void)startBroadcastSucceeded;
- (void)startBroadcastWithTitle:(id)arg1 isSharingPreciseLocation:(_Bool)arg2;
- (void)setStartBroadcastButtonState:(unsigned long long)arg1;
- (void)determineStartBroadcastState;
- (void)createBroadcastFailed:(id)arg1 duration:(double)arg2 withError:(id)arg3;
- (void)createBroadcastSucceeded:(id)arg1 withDuration:(double)arg2;
- (_Bool)shouldShareLocationIfKnown;
- (_Bool)shouldBroadcastUseCommentModeration;
- (void)createBroadcast;
- (void)speedTestDidError:(id)arg1 sizeInBytes:(long long)arg2 testDuration:(double)arg3;
- (void)speedTestFailedWithSizeInBytes:(long long)arg1 testDuration:(double)arg2;
- (void)speedTestPassedWithSizeInBytes:(long long)arg1 testDuration:(double)arg2;
- (void)evaluateSpeedTestResult;
- (void)speedTestCompletedWithSizeInBytes:(long long)arg1 testDuration:(double)arg2;
- (_Bool)didSpeedTestPass;
- (void)_performSpeedTest;
- (void)performSpeedTest;
- (void)didRestartBroadcastCreationProcess;
- (void)restartBroadcastCreationChangeCamera:(_Bool)arg1 toExternal:(_Bool)arg2;
- (void)restartBroadcastCreationProcess;
- (void)skipBroadcastCreationProcessAndRecoverPublishingIfNeeded;
- (id)publishingProtocol;
- (unsigned short)publishingPort;
- (void)postGoProResignActiveBroadcastEndedWarningIfNeeded;
- (void)_setUsingExternalCamera:(_Bool)arg1;
- (void)_setHasExternalCamera;
- (void)handleVideoReceivingStateChange;
- (void)unobserveCameraDetector;
- (void)observeCameraDetector;
- (void)updateCameraZoomWithVelocity:(double)arg1;
- (void)selectNextCameraPosition;
- (long long)numberOfSelectableExternalCameras;
- (_Bool)canChangeCamera;
- (void)publishingAccessDidChange;
- (void)didChangeBroadcast;
- (void)setPublishingAccess:(id)arg1;
@property(readonly, nonatomic) _Bool sparkles;
- (_Bool)cameFromTwitter;
- (id)broadcastView;
@property(readonly, nonatomic) NSString *publishingHost;
@property(readonly, nonatomic) PTVChatController *chatController;
@property(readonly, nonatomic) PTVBroadcast *broadcast;
- (double)replayDuration;
- (double)currentReplayTimeInterval;
- (id)programDateTime;
- (unsigned long long)ntpForNow;
- (unsigned long long)ntpForCurrentFrame;
@property(readonly, nonatomic) PTVAccessBroadcaster *publishingAccess;
- (void)logEventWithFormat:(id)arg1;
- (void)logEvent:(id)arg1;
@property(readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
- (id)initWithStartingBroadcastTitle:(id)arg1 publisher:(id)arg2 locationManager:(id)arg3 publishingViewController:(id)arg4 statusWindow:(id)arg5 useLargeChatFont:(_Bool)arg6 twitterCameraBroadcastStateDelegate:(id)arg7;
- (void)amplifyProgramsViewController:(id)arg1 didChangeAmplifyProgram:(id)arg2;
- (void)changeExpirationActionSheetControllerDidSelectDeleteBroadcast:(id)arg1;
- (void)changeExpirationActionSheetControllerDidSelectDontAutoDelete:(id)arg1;
- (id)modalPresentationCoordinator:(id)arg1 modalForUserWithID:(id)arg2 configureBlock:(CDUnknownBlockType)arg3;
- (_Bool)modalPresentationCoordinator:(id)arg1 shouldPresentModalForBroadcast:(id)arg2 watchContext:(id)arg3 inCollection:(id)arg4;
- (void)broadcastDetailsViewController:(id)arg1 didSelectViewer:(id)arg2;
- (void)overflowMenuDidTapEmptySpace:(id)arg1;
- (_Bool)overflowMenu:(id)arg1 shouldEnableMenuItem:(id)arg2;
- (void)overflowMenu:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)overflowViewController:(id)arg1 willDisappearWithAnimationDuration:(double)arg2;
- (void)overflowViewController:(id)arg1 willAppearWithAnimationDuration:(double)arg2;
- (void)broadcastShareSheetControllerDidSelectShareOnTwitter:(id)arg1;
- (_Bool)giftingContributorsViewControllerShouldShowFollowButtons:(id)arg1;
- (void)giftingContributorsViewController:(id)arg1 didSelectContributor:(id)arg2;
- (void)videoOverlayViewControllerDidTapOnContributors:(id)arg1 withContributorWatcher:(id)arg2 presentUserIDs:(id)arg3;
- (void)broadcasterDidRequestShare;
- (void)broadcasterDidRequestFollow;
- (void)reportBroadcasterBlockToTwitterAfterFetchingUserWithID:(id)arg1;
- (void)videoOverlayViewControllerReplayDidSelectPauseReplay:(id)arg1;
- (void)videoOverlayViewControllerReplayDidSelectPlayReplay:(id)arg1;
- (void)videoOverlayViewControllerDidSelectShowBroadcastDetails:(id)arg1;
- (void)videoOverlayViewControllerDidSelectOverflowMenu:(id)arg1;
- (void)videoOverlayViewController:(id)arg1 didSelectShareBroadcastAtSelectedTime:(double)arg2 fromView:(id)arg3;
- (void)videoOverlayViewControllerDidSelectShareBroadcast:(id)arg1 shareHighlightSelectedByDefault:(_Bool)arg2;
- (void)videoOverlayViewControllerDidSelectShareScreenshotOnTwitter:(id)arg1 sourceViewForActivityViewController:(id)arg2;
- (void)broadcasterDidBlockUserFromMessage:(id)arg1;
- (void)broadcasterDidBlockUser:(id)arg1;
- (void)transitionDidComplete:(id)arg1;
- (void)viewWillSwitch;
- (void)presentViewController:(id)arg1;
- (_Bool)shouldBecomeChildViewControllerOf:(id)arg1;
- (_Bool)shouldUseInteractiveSpringTransition;
- (unsigned long long)canPresentModalController:(id)arg1;
- (void)presentUserModalForUserId:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (void)presentBroadcast:(id)arg1 withWatchContext:(id)arg2 inCollection:(id)arg3;
- (_Bool)isPresentingInteractiveOrOtherViewController;
- (_Bool)isPresentingInteractiveModal;
- (_Bool)presentModal:(id)arg1 withShade:(_Bool)arg2 controlStatusBar:(_Bool)arg3;
- (id)currentModal;
- (void)setUseShade:(_Bool)arg1;
- (void)setInteractiveTransitionEnabled:(_Bool)arg1;
- (void)didPressDismissButton:(struct CGPoint)arg1;
- (void)broadcastViewDidPressAcceptGifts;
- (void)broadCastViewDidSwipeUp:(id)arg1;
- (_Bool)broadcastViewShouldAcceptDismissGesture;
- (void)broadcastViewDidChangeSelectionOfBroadcastTitleTextView:(id)arg1;
- (void)broadcastViewDidEditBroadcastTitle;
- (void)broadcastViewDidPressBackToSourceButton;
- (void)broadcastViewDidPressExternalCameraButton;
- (void)broadcastViewDidChangeChatType:(unsigned long long)arg1;
- (void)broadcastViewDidPressShareFacebook;
- (void)broadcastViewDidPressShareTwitter;
- (void)broadcastViewDidPressAudienceSelector;
- (void)startBroadcastWithStatus:(id)arg1 locationShared:(_Bool)arg2;
- (_Bool)locationServicesChangedTo:(_Bool)arg1;
- (void)broadcastViewDidTapScreen:(struct CGPoint)arg1;
- (void)broadcastViewDidTapForOverlay:(_Bool)arg1;
- (void)broadcastViewDidPressMute:(_Bool)arg1;
- (void)broadcastViewDidPressLeaveBroadcastingButton:(id)arg1;
- (void)broadcastViewDidPressStopBroadcastingButton:(id)arg1;
- (void)broadcastViewDidPressFlipCamera:(unsigned long long)arg1;
- (void)chatController:(id)arg1 didSendMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveBroadcastViewersAndStats:(id)arg2;
- (void)chatController:(id)arg1 didReceiveChatRoomPresenceEvent:(id)arg2;
- (void)chatController:(id)arg1 didReceiveBlockMessage:(id)arg2;
- (void)chatController:(id)arg1 didReceiveQueuedMessage:(id)arg2 deliveryQueueSize:(unsigned long long)arg3;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;
- (void)broadcastControllerBroadcastPreferredImageURLDidChange:(id)arg1;
- (void)broadcastControllerBroadcastStateDidChange:(id)arg1;
- (void)broadcastControllerDidChangeBroadcast:(id)arg1;
- (_Bool)broadcastController:(id)arg1 didReceiveMessage:(id)arg2 isForReplay:(_Bool)arg3;
- (id)broadcastController:(id)arg1 deliveryDateForMessage:(id)arg2 isForReplay:(_Bool)arg3;
- (double)broadcastControllerReplayDuration:(id)arg1;
- (double)broadcastControllerCurrentReplayTimeInterval:(id)arg1;
- (id)broadcastControllerProgramDateTime:(id)arg1;
- (unsigned long long)broadcastControllerNTPForNow:(id)arg1;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)arg1;
- (void)didDoubleTapToFlipCamera;
- (_Bool)_externalCameraAttachedToDevice;
- (_Bool)_usingExternal360Camera;
- (void)adjustCameraZoom:(double)arg1 velocity:(double)arg2;
- (void)focusIndicatorDidFinishAnimating:(id)arg1;
- (void)setVideoRect:(struct CGRect)arg1 doesRotate:(_Bool)arg2;
- (void)didChangeLocalAudioSource:(_Bool)arg1 isUsingHeadphones:(_Bool)arg2;
- (void)onCameraTypeChange:(int)arg1 mostRecentPhoneCamera:(int)arg2;
- (void)onImageDimensions:(struct CGSize)arg1;
- (void)didStartCamera;
- (void)didSuccessfullyPublishAfterNInternalReconnects:(unsigned long long)arg1;
- (void)onConnectionFailure;
- (void)logOutput:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)shouldLoad;
- (void)ptv_keyboardWillHideWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)ptv_keyboardWillShowWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unobservePublishingViewController;
- (void)observePublishingViewController;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

