//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSString, NSURLRequest, NSURLResponse, NSURLSessionTaskMetrics, TNLAttemptMetaData, TNLResponse, TNLResponseInfo, TNLURLSessionTaskOperation;

@protocol TNLURLSessionTaskOperationDelegate <NSObject>
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 didReceiveURLResponse:(NSURLResponse *)arg2;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 redirectFromRequest:(NSURLRequest *)arg2 withHTTPResponse:(NSHTTPURLResponse *)arg3 to:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *, NSError *))arg5;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 redirectedFrom:(NSURLRequest *)arg2 withHTTPResponse:(NSHTTPURLResponse *)arg3 to:(NSURLRequest *)arg4 metaData:(TNLAttemptMetaData *)arg5;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 willPerformRedirectFromRequest:(NSURLRequest *)arg2 withHTTPResponse:(NSHTTPURLResponse *)arg3 toRequest:(NSURLRequest *)arg4 completion:(void (^)(id <TNLRequest>))arg5;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 didStartBackgroundTaskWithTaskIdentifier:(unsigned long long)arg2 configIdentifier:(NSString *)arg3 sharedContainerIdentifier:(NSString *)arg4;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 appendReceivedData:(NSData *)arg2;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 didUpdateDownloadProgress:(float)arg2;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 didUpdateUploadProgress:(float)arg2;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 finalizeWithResponseInfo:(TNLResponseInfo *)arg2 responseError:(NSError *)arg3 metaData:(TNLAttemptMetaData *)arg4 taskMetrics:(NSURLSessionTaskMetrics *)arg5 completion:(void (^)(TNLResponse *))arg6;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 didStartSessionTaskWithRequest:(NSURLRequest *)arg2;
- (void)network_URLSessionTaskOperation:(TNLURLSessionTaskOperation *)arg1 didTransitionToState:(long long)arg2 withResponse:(TNLResponse *)arg3;
@end
