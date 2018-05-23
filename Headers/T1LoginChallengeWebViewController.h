//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1NativesqueSingleWebViewController.h>

#import <T1Twitter/T1AccountAdder-Protocol.h>

@class NSString, TFNHUD, TFNTwitterAccount, TFSTimer;

@interface T1LoginChallengeWebViewController : T1NativesqueSingleWebViewController <T1AccountAdder>
{
    _Bool _ignoreWebViewError;
    CDUnknownBlockType _didAddAccountBlock;
    TFNTwitterAccount *_account;
    TFSTimer *_pollingTimer;
    unsigned long long _loginType;
    long long _loginCause;
    long long _userID;
    NSString *_requestID;
    double _pollingInitDelay;
    double _pollingDelay;
    unsigned long long _retryCount;
    TFNHUD *_hud;
}

+ (_Bool)isAuthenticationInProgress;
@property(nonatomic) _Bool ignoreWebViewError; // @synthesize ignoreWebViewError=_ignoreWebViewError;
@property(retain, nonatomic) TFNHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double pollingDelay; // @synthesize pollingDelay=_pollingDelay;
@property(nonatomic) double pollingInitDelay; // @synthesize pollingInitDelay=_pollingInitDelay;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(nonatomic) long long loginCause; // @synthesize loginCause=_loginCause;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) TFSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didAddAccountBlock; // @synthesize didAddAccountBlock=_didAddAccountBlock;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_cancel;
- (void)_showErrorAndDismiss:(id)arg1;
- (void)_startPollingTimer;
- (void)_cancelPollingTimer;
- (void)_continuePolling;
- (void)_dismissWithAccount:(id)arg1;
- (void)_doPolling;
- (CDUnknownBlockType)_loginChallengeResponseBlock;
- (id)initWithLoginType:(unsigned long long)arg1 requestID:(id)arg2 user:(id)arg3 userID:(long long)arg4 URLString:(id)arg5 loginCause:(long long)arg6 notificationCenter:(id)arg7;
- (id)initWithLoginType:(unsigned long long)arg1 requestID:(id)arg2 user:(id)arg3 userID:(long long)arg4 URLString:(id)arg5;
- (id)initWithLoginType:(unsigned long long)arg1 requestID:(id)arg2 user:(id)arg3 userID:(long long)arg4 URLString:(id)arg5 loginCause:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
