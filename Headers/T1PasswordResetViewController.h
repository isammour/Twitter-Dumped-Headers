//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1NativesqueSingleWebViewController.h>

#import <T1Twitter/T1AccountAdder-Protocol.h>
#import <T1Twitter/WKNavigationDelegate-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface T1PasswordResetViewController : T1NativesqueSingleWebViewController <T1AccountAdder, WKNavigationDelegate>
{
    NSString *_webviewUrl;
    NSString *_requestID;
    long long _userID;
    NSString *_username;
    NSString *_appRestartSuppressToken;
    _Bool _ignoreWebViewError;
    CDUnknownBlockType _didAddAccountBlock;
    TFNTwitterAccount *_account;
}

+ (_Bool)isShowing;
+ (void)presentPasswordResetFromViewController:(id)arg1 withUsername:(id)arg2 urlString:(id)arg3;
@property(nonatomic) _Bool ignoreWebViewError; // @synthesize ignoreWebViewError=_ignoreWebViewError;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didAddAccountBlock; // @synthesize didAddAccountBlock=_didAddAccountBlock;
- (void).cxx_destruct;
- (void)_resumeAppRestartsWithToken;
- (_Bool)_isValidURLSchema:(id)arg1;
- (void)_cancel;
- (void)_dismissWithAccount:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWebViewURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

