//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSURL;

@protocol T1WebViewLogger <NSObject>
- (void)updateWebViewLoggerWithScribeParams:(NSDictionary *)arg1 currentURL:(NSURL *)arg2 rootURL:(NSURL *)arg3;
- (void)webViewProgressValueDidChange:(double)arg1 afterMillis:(unsigned long long)arg2;
- (void)webViewDidFailLoadingAfterMillis:(unsigned long long)arg1;
- (void)webViewBrowsingSessionDidEnd;
- (void)webViewBrowsingSessionDidStart;
- (void)webViewClosedAfterMillis:(unsigned long long)arg1;
- (void)webViewDidScrollAfterMillis:(unsigned long long)arg1;
- (void)webViewStateDidChange:(long long)arg1 afterMillis:(unsigned long long)arg2;
@end
