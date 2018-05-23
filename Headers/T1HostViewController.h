//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1AppLaunchTransitionDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingFlowControllerDelegate-Protocol.h>
#import <T1Twitter/T1SignedOutNavigation-Protocol.h>
#import <T1Twitter/T1SignedOutViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNAdaptiveWizardFlowDelegate-Protocol.h>
#import <T1Twitter/TFNPresentationInterceptor-Protocol.h>
#import <T1Twitter/TFNTooltipManagerDatasource-Protocol.h>

@class NSString, T1OnboardingFlowAssistant, T1OnboardingFlowController, T1URLProtocolDefaultHandlerEvent, TFNTwitterAdsTPMIdSyncManager;
@protocol T1AppNavigation, T1AppNavigationProvider, T1LaunchTransitionProvider, T1OnboardingFlow, T1SignedOutViewControllerProvider;

@interface T1HostViewController : UIViewController <TFNAdaptiveWizardFlowDelegate, T1OnboardingFlowControllerDelegate, T1AppLaunchTransitionDelegate, T1SignedOutNavigation, T1SignedOutViewControllerDelegate, TFNPresentationInterceptor, TFNTooltipManagerDatasource>
{
    _Bool _showedSignedOutScreen;
    _Bool _performingLaunchTransition;
    UIViewController *_currentViewController;
    id <T1OnboardingFlow> _signedOutOnboardingFlow;
    id <T1OnboardingFlow> _signedInOnboardingFlow;
    id <T1LaunchTransitionProvider> _launchTransitionProvider;
    T1URLProtocolDefaultHandlerEvent *_pendingLoggedInURLEvent;
    CDUnknownBlockType _launchTransitionCompletion;
    CDUnknownBlockType _onboardingFlowCompletion;
    id <T1AppNavigationProvider> _appNavigationProvider;
    id <T1SignedOutViewControllerProvider> _signedOutViewControllerProvider;
    T1OnboardingFlowAssistant *_signUpFlowAssistant;
    T1OnboardingFlowController *_signedOutNavigationFlowController;
    TFNTwitterAdsTPMIdSyncManager *_tpmIdSyncManager;
    UIViewController<T1AppNavigation> *_appNavigationController;
}

+ (id)sharedHostViewController;
+ (void)createSharedHostViewControllerForAppDelegate:(id)arg1 fromSelector:(SEL)arg2 appNavigationProvider:(id)arg3 signedOutViewControllerProvider:(id)arg4;
@property(retain, nonatomic) UIViewController<T1AppNavigation> *appNavigationController; // @synthesize appNavigationController=_appNavigationController;
@property(retain, nonatomic) TFNTwitterAdsTPMIdSyncManager *tpmIdSyncManager; // @synthesize tpmIdSyncManager=_tpmIdSyncManager;
@property(retain, nonatomic) T1OnboardingFlowController *signedOutNavigationFlowController; // @synthesize signedOutNavigationFlowController=_signedOutNavigationFlowController;
@property(retain, nonatomic) T1OnboardingFlowAssistant *signUpFlowAssistant; // @synthesize signUpFlowAssistant=_signUpFlowAssistant;
@property(retain, nonatomic) id <T1SignedOutViewControllerProvider> signedOutViewControllerProvider; // @synthesize signedOutViewControllerProvider=_signedOutViewControllerProvider;
@property(retain, nonatomic) id <T1AppNavigationProvider> appNavigationProvider; // @synthesize appNavigationProvider=_appNavigationProvider;
@property(copy, nonatomic) CDUnknownBlockType onboardingFlowCompletion; // @synthesize onboardingFlowCompletion=_onboardingFlowCompletion;
@property(copy, nonatomic) CDUnknownBlockType launchTransitionCompletion; // @synthesize launchTransitionCompletion=_launchTransitionCompletion;
@property(nonatomic, getter=isPerformingLaunchTransition) _Bool performingLaunchTransition; // @synthesize performingLaunchTransition=_performingLaunchTransition;
@property(retain, nonatomic) T1URLProtocolDefaultHandlerEvent *pendingLoggedInURLEvent; // @synthesize pendingLoggedInURLEvent=_pendingLoggedInURLEvent;
@property(retain, nonatomic) id <T1LaunchTransitionProvider> launchTransitionProvider; // @synthesize launchTransitionProvider=_launchTransitionProvider;
@property(nonatomic) __weak id <T1OnboardingFlow> signedInOnboardingFlow; // @synthesize signedInOnboardingFlow=_signedInOnboardingFlow;
@property(retain, nonatomic) id <T1OnboardingFlow> signedOutOnboardingFlow; // @synthesize signedOutOnboardingFlow=_signedOutOnboardingFlow;
@property(readonly, nonatomic) _Bool showedSignedOutScreen; // @synthesize showedSignedOutScreen=_showedSignedOutScreen;
@property(readonly, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribe;
- (_Bool)_t1_canHandleDecreaseTextSizeKeyCommand;
- (void)handleDecreaseTextSizeKeyCommand;
- (_Bool)_t1_canHandleIncreaseTextSizeKeyCommand;
- (void)handleIncreaseTextSizeKeyCommand;
- (_Bool)_t1_canHandleDefaultTextSizeKeyCommand;
- (void)handleDefaultTextSizeKeyCommand;
- (void)handleNightModeKeyCommand;
- (id)keyCommands;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)defaultTooltipPresentationView;
- (void)applicationDidEnterBackground;
- (void)processPendingLoggedInEvent;
- (_Bool)handleURL:(id)arg1 context:(id)arg2;
- (void)_didDismissViewController:(id)arg1;
- (id)viewController:(id)arg1 willPresentWithPresentationInfo:(id)arg2;
- (id)tfs_debugStrings;
- (void)flowController:(id)arg1 stateDidChange:(long long)arg2;
- (void)flowDidComplete:(id)arg1;
- (void)flowWillComplete:(id)arg1;
- (void)_signInToAccountWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_signUpWithAccountToResume:(id)arg1;
- (void)_signUp;
- (void)showOnboardingFlowWithName:(id)arg1 orToken:(id)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4 flowCompletion:(CDUnknownBlockType)arg5;
- (void)showLegacyLoginFlowWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showLegacyNuxFlowWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signedOutViewController:(id)arg1 didTapSignIn:(id)arg2;
- (void)signedOutViewController:(id)arg1 didTapSignUp:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_startSignUpWithLegacyNuxForAccountToResume:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showLoginPrefilledWithUsername:(id)arg1;
- (void)handleRootViewControllerSetupWithAccount:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)saveViewControllerState;
- (long long)currentPanelID;
- (void)appLaunchTransition:(id)arg1 logoWillBeVisibleForDuration:(double)arg2;
- (void)appLaunchTransitionDidFinish:(id)arg1;
- (void)_runAppLaunchTransition:(CDUnknownBlockType)arg1;
- (void)setupWithAccount:(id)arg1;
- (void)viewSignedOut;
- (void)viewAccount:(id)arg1 withPanelID:(long long)arg2 animated:(_Bool)arg3;
- (void)viewAccount:(id)arg1 animated:(_Bool)arg2;
- (void)_requestAnalyticsIdBlobsIfNecessaryForAccount:(id)arg1;
- (void)_registerCardsForAccount:(id)arg1;
- (void)_reRegisterCardsAfterFeatureSwitchesDidUpdate;
- (id)appNavigation;
- (id)currentAccount;
- (void)_useViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
