//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/CrashlyticsDelegate-Protocol.h>
#import <T1Twitter/TFNBackgroundFetchManagerDelegate-Protocol.h>
#import <T1Twitter/TFNBugReporterDelegate-Protocol.h>
#import <T1Twitter/TFNFloatingButtonDelegate-Protocol.h>
#import <T1Twitter/TFSAuthCredentialStateTransitionDelegate-Protocol.h>
#import <T1Twitter/TFSTwitterRecurringTaskServiceObserver-Protocol.h>
#import <T1Twitter/TIPLogger-Protocol.h>
#import <T1Twitter/TIPProblemObserver-Protocol.h>
#import <T1Twitter/TNLLogger-Protocol.h>
#import <T1Twitter/UIApplicationDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSOperation, NSString, NSURL, T1AppBadging, T1AppServicesManager, T1ComposeState, T1ExternallyBlockedUserContentEradicationOperation, T1NotificationHandler, T1UserReviewPrompt, TFNBackgroundFetchManager, TFNFloatingButton, TFNTwitterPushNotificationPayload, UIAlertController, UIWindow;

@interface T1AppDelegate : NSObject <TFSTwitterRecurringTaskServiceObserver, TFNBugReporterDelegate, TFNFloatingButtonDelegate, CrashlyticsDelegate, TFSAuthCredentialStateTransitionDelegate, TNLLogger, TIPLogger, TIPProblemObserver, UIApplicationDelegate, TFNBackgroundFetchManagerDelegate>
{
    TFNFloatingButton *_floatingButton;
    NSMutableDictionary *_passwordNotificationDates;
    NSMutableDictionary *_clockSkewNotificationDates;
    UIAlertController *_voiceOverAlert;
    unsigned long long _saveStateBackgroundTaskIdentifier;
    long long _appState;
    NSString *_bgFetchRestartSuppressionToken;
    T1AppBadging *_appBadging;
    T1NotificationHandler *_notificationHandler;
    long long _initialPanelID;
    _Bool _handledPushNotificationOrURLOnLaunch;
    _Bool _handledURLOnForeground;
    _Bool _continuedUserActivity;
    _Bool _showedComposerOnLaunch;
    TFNTwitterPushNotificationPayload *_deferredPushPayload;
    long long _deferredPushContext;
    NSURL *_launchURL;
    CDUnknownBlockType _shortcutActionCompletionBlock;
    NSDictionary *_applicationGlobalState;
    _Bool _shouldDeferTasksRequiringAccountsWhenApplicationDidLaunch;
    _Bool _shouldTryToRegisterDeviceToken;
    _Bool _disableWatchdog;
    NSDictionary *_startTwitterAsynchronouslyOnForegroundWithLaunchOptions;
    NSMutableArray *_operationsToCancelOnAppTermination;
    NSOperation *_registerDeviceTokenOperation;
    NSOperation *_initialBadgeOperation;
    T1AppServicesManager *_appServicesManager;
    NSArray *_didEnterBackgroundOperations;
    _Bool _streamDidUpdate;
    _Bool _isUserReady;
    NSOperation *_deepLinkHandlerOperation;
    NSOperation *_redirectDeepLinkHandler;
    NSOperation *_scribeDeepLinkOperation;
    T1UserReviewPrompt *_userReviewPrompt;
    UIWindow *_window;
    T1ComposeState *_currentComposeState;
    TFNBackgroundFetchManager *_backgroundFetchManager;
    T1ExternallyBlockedUserContentEradicationOperation *_blockedContentEradicationOperation;
}

+ (id)buildTime;
+ (id)willEnterForegroundStopwatch;
+ (id)clientAppIdentificationProvider;
+ (id)userAgentProvider;
+ (void)configureProtocolRoutingHandlers:(id)arg1;
+ (id)defaultProtocolHandlerContextWithURLSource:(long long)arg1 sourceAppBundleID:(id)arg2;
+ (id)defaultProtocolHandlerContextWithURLSource:(long long)arg1;
+ (id)defaultRoutingProtocolHandler;
+ (id)pushRegistration;
+ (id)signedOutViewControllerProvider;
+ (id)launchTransitionProvider;
+ (id)currentAccountID;
+ (void)load;
@property(retain, nonatomic) T1ExternallyBlockedUserContentEradicationOperation *blockedContentEradicationOperation; // @synthesize blockedContentEradicationOperation=_blockedContentEradicationOperation;
@property(readonly, nonatomic) TFNBackgroundFetchManager *backgroundFetchManager; // @synthesize backgroundFetchManager=_backgroundFetchManager;
@property(retain, nonatomic) T1ComposeState *currentComposeState; // @synthesize currentComposeState=_currentComposeState;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)tip_problemWasEncountered:(id)arg1 userInfo:(id)arg2;
- (void)reduceTransparencyStatusChanged;
- (void)reduceMotionStatusChanged;
- (void)invertColorsStatusChanged;
- (void)guidedAccessStatusChanged;
- (void)grayscaleStatusChanged;
- (void)darkerSystemColorsStatusChanged;
- (void)boldTextStatusChanged;
- (void)switchControlStatusChanged;
- (void)voiceOverStatusChanged;
- (void)performAccessibilityStatusChangeScribeForAction:(id)arg1;
- (void)_t1_dynamicColorsWillReloadNotification:(id)arg1;
- (void)_t1_updateAccessibilitySettingsIgnoreInvertColors:(_Bool)arg1;
- (void)_t1_configureHapticFeedback;
- (_Bool)scribeIfStartingToPanel:(long long)arg1 scribe:(id)arg2;
- (long long)_t1_initialPanelID;
- (void)_t1_promptUserToRateAppConditionallyForAccount:(id)arg1;
- (void)_t1_twitterAccountDidUpdate:(id)arg1;
- (void)_t1_appAccountsDidChange:(id)arg1;
- (void)_t1_accountDidBecomeInactive:(id)arg1;
- (void)_t1_activeAccountDidChange:(id)arg1;
- (void)_t1_updateLoggingAlertScribeOutputStreamWithAccount:(id)arg1;
- (void)_t1_appAccountsDidFinishLoading:(id)arg1;
- (void)_t1_fontSizeDidChange:(id)arg1;
- (void)_t1_updateAppGroupSharedDefaultsFonts;
- (void)_t1_updateLayoutMetricsContentFontForCurrentWindowSize;
- (void)_t1_resetLayoutMetricsTransitionDestinationContentFont;
- (void)_t1_updateLayoutMetricsTransitionDesetinationContentFontForWindowSize:(struct CGSize)arg1;
- (void)applicationDidTransitionToSize:(struct CGSize)arg1;
- (void)applicationWillTransitionToSize:(struct CGSize)arg1;
- (void)_t1_unarchiveAppInactiveTimeStamp;
- (void)_t1_archiveAppInactiveTimeStamp;
- (void)_t1_endBackgroundTask;
- (void)_t1_saveStateSavingStreamsAsynchronously:(_Bool)arg1;
- (void)_t1_saveViewControllerState;
- (void)_t1_saveCurrentComposeState;
- (void)saveApplicationGlobalState;
- (void)_t1_startWorkForApplicationUpgrade;
- (void)_t1_scribeApplicationLaunchAction;
- (_Bool)_t1_didOpenFromURLOrPush;
- (_Bool)_t1_didOpenFromURL;
- (void)_t1_twitterFeatureSwitchesDidUpdate:(id)arg1;
- (void)_t1_currentLocaleDidChange:(id)arg1;
- (void)_t1_timelineDidDeserialize:(id)arg1;
- (void)_t1_networkExecutionsUpdated:(id)arg1;
- (void)_t1_tryToRegisterDeviceToken;
- (id)_t1_warmStartPerformanceEventForPanel:(long long)arg1;
- (id)_t1_coldStartPerformanceEventForPanel:(long long)arg1;
- (void)_t1_trackFirstLaunchWithOptions:(id)arg1;
- (id)_t1_scribe;
- (id)_t1_currentAccount;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)_t1_handleURLOnLaunch;
- (void)backgroundFetchManager:(id)arg1 didCompleteBackgroundFetchWithResult:(unsigned long long)arg2 reason:(long long)arg3;
- (void)backgroundFetchManager:(id)arg1 willCompleteBackgroundFetchWithResult:(unsigned long long)arg2 reason:(long long)arg3;
- (void)backgroundFetchManagerDidBeginBackgroundFetch:(id)arg1;
- (void)backgroundFetchManagerWillBeginBackgroundFetch:(id)arg1;
- (void)_t1_updateBackgroundFetchInterval;
- (double)_t1_backgroundFetchInterval;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_t1_handleUniversalLink:(id)arg1 refererURL:(id)arg2 application:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)_t1_badgeCountDidUpdate:(id)arg1;
- (id)_t1_currentUserID;
- (id)_t1_userIDs;
- (void)_t1_scribeTimeInCurrentOrientation;
- (void)_t1_scribeActionCompletedLastEnterBackgroundTask;
- (void)_t1_scribeActionBecomeInactive;
- (void)_t1_scribeMemoryUsageBeforeSuspension;
- (void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)_t1_cancelDidEnterBackgroundOperations;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_t1_scribeAppDidEnterForegroundFromPushAfterWait;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (id)_t1_pushPayloadFromLaunchOptions:(id)arg1;
- (id)userReviewPromptProvider;
- (void)configureRightToLeftSupport;
- (void)configureAppearance;
- (void)configureColorPalette;
- (void)setUpAppLaunchTransition;
- (void)setUpTooltipManager;
- (id)appNavigationProvider;
- (void)setupMotionGraphicsContainer;
- (void)setupVectorGraphicsContainer;
- (void)_t1_scribeStartTimeSinceLastBackgroundWithScribe:(id)arg1;
- (void)_t1_startTwitterAsynchronously:(id)arg1;
- (void)_t1_notifyLifecycleUserReadyStage;
- (void)_t1_unseenDMCountRecalculated:(id)arg1;
- (void)_t1_activityReadCursorDidUpdate:(id)arg1;
- (void)_t1_notificationsTimelineDidUpdate:(id)arg1;
- (void)_t1_streamDidUpdate:(id)arg1;
- (void)promptToReviewNotificationSettingsIfNecessary;
- (void)startupCompleted;
- (void)_t1_twitterDidLaunchWithOptions:(id)arg1;
- (void)_t1_restoreComposerStateForAccount:(id)arg1;
- (void)_t1_addAccessibilityNotificationObservers;
- (_Bool)_t1_shouldUseCrashlyticsBetaButton;
- (void)_t1_scribeAppLaunchPerformanceEventsWithAccount:(id)arg1 fromPush:(_Bool)arg2;
- (void)_t1_scheduleTvConnectionManager;
- (void)_t1_scheduleVineLoopTracker;
- (void)_t1_scheduleDeviceTokenRegistration;
- (id)_t1_accountForStartUp;
- (void)configureUIOverrides;
- (void)_t1_startUI;
- (void)_t1_handleRootViewControllerSetupWithAccount:(id)arg1;
- (void)_t1_setupHostViewControllerWithAccount:(id)arg1;
- (void)_t1_startBackgroundFetchManager;
- (void)_t1_startScribingViewControllerLifecycleEvents;
- (id)init;
- (id)appCoreServicesConfiguration;
- (void)recurringTaskService:(id)arg1 didCompleteTask:(id)arg2 duration:(double)arg3;
- (void)recurringTaskService:(id)arg1 didTimeoutTask:(id)arg2 duration:(double)arg3;
- (void)recurringTaskService:(id)arg1 willBeginTask:(id)arg2;
- (void)recurringTaskService:(id)arg1 triggeredTask:(id)arg2 event:(id)arg3;
- (void)recurringTaskService:(id)arg1 unregisteredTask:(id)arg2;
- (void)recurringTaskService:(id)arg1 registeredTask:(id)arg2;
- (void)_attachFloatingButton:(id)arg1;
- (void)prepareBetaFeatures;
- (void)bugReporter:(id)arg1 didTriggerBugReport:(id)arg2;
- (void)floatingButtonWasHit:(id)arg1;
- (void)bugReporter:(id)arg1 sendBugReport:(id)arg2 didCompleteWithResult:(long long)arg3;
- (id)contextForBugReporter:(id)arg1;
- (void)didFinishGatheringBugReportInfo;
- (void)willStartGatheringBugReportInfo;
- (void)crashlyticsDidDetectCrash:(id)arg1;
- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_t1_scribeUserInfoItemsArrayForAccount:(id)arg1;
- (id)_t1_rootViewController;
- (void)_t1_presentErrorViewControllerWithMessage:(id)arg1 subtext:(id)arg2 cancelButtonTitle:(id)arg3 inputItem:(id)arg4;
- (void)_t1_notifyUserOfClockSkewAuthorizationFailure:(id)arg1;
- (void)_t1_dismissReauthViewController:(id)arg1;
- (void)_t1_notifyUserOfPasswordAuthorizationFailure:(id)arg1;
- (void)_t1_handleCredentialsStateChangeForAccountID:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3 stateInfo:(id)arg4;
- (void)credentialStateDidChangeForAccountID:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3 stateInfo:(id)arg4;
- (_Bool)isAuthenticationInProgress;
- (void)handleAccountRestrictedByBouncerFailureWithAccount:(id)arg1 info:(id)arg2;
- (void)handleClockSkewAuthorizationFailureWithAccount:(id)arg1;
- (void)reauthAccount:(id)arg1;
- (id)topViewController;
- (_Bool)tip_canLogWithLevel:(long long)arg1;
- (void)tip_logWithLevel:(long long)arg1 file:(id)arg2 function:(id)arg3 line:(int)arg4 message:(id)arg5;
- (_Bool)tnl_shouldLogVerbosely;
- (_Bool)tnl_canLogWithLevel:(long long)arg1 context:(id)arg2;
- (void)tnl_logWithLevel:(long long)arg1 context:(id)arg2 file:(id)arg3 function:(id)arg4 line:(int)arg5 message:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

