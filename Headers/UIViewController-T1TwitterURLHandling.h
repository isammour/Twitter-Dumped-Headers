//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (T1TwitterURLHandling)
- (id)_favoritesViewControllerForUserReference:(id)arg1 account:(id)arg2 willNavigateInExistingViewController:(out _Bool *)arg3;
- (void)_sendTalonRequestForAnalytics:(id)arg1;
- (id)t1_openURLParserResult:(id)arg1 willNavigateInExistingViewController:(out _Bool *)arg2;
- (long long)_t1_mediaInfoIndexForStatus:(id)arg1 URL:(id)arg2;
- (id)_t1_openURL:(id)arg1 fromSourceStatus:(id)arg2 sourceUser:(id)arg3 sourceDirectMessageEntry:(id)arg4 forceAuthenticateWebViewController:(_Bool)arg5;
- (id)t1_openURL:(id)arg1 fromCardDataSource:(id)arg2;
- (id)t1_openURL:(id)arg1 fromSessionSource:(id)arg2;
- (id)t1_openURL:(id)arg1 fromSourceDirectMessageEntry:(id)arg2;
- (id)t1_openURL:(id)arg1 fromSourceUser:(id)arg2;
- (id)t1_openURL:(id)arg1 fromSourceStatus:(id)arg2 forceAuthenticateWebViewController:(_Bool)arg3;
- (id)t1_openURL:(id)arg1 fromSourceStatus:(id)arg2;
- (id)t1_openURL:(id)arg1 forceAuthenticateWebViewController:(_Bool)arg2;
- (id)t1_openURL:(id)arg1;
@end
