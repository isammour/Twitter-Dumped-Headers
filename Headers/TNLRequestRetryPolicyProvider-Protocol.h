//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/NSObject-Protocol.h>

@class NSObject, NSString, TNLRequestOperation, TNLResponse;
@protocol OS_dispatch_queue;

@protocol TNLRequestRetryPolicyProvider <NSObject>
- (_Bool)shouldRetryRequestOperation:(TNLRequestOperation *)arg1 withResponse:(TNLResponse *)arg2;

@optional
- (NSString *)retryPolicyIdentifier;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (void)requestOperation:(TNLRequestOperation *)arg1 didStartRetryFromResponse:(TNLResponse *)arg2;
- (void)requestOperation:(TNLRequestOperation *)arg1 willStartRetryFromResponse:(TNLResponse *)arg2 afterDelay:(double)arg3;
- (double)idleTimeoutOfRetryForRequestOperation:(TNLRequestOperation *)arg1 withResponse:(TNLResponse *)arg2;
- (double)delayBeforeRetryForRequestOperation:(TNLRequestOperation *)arg1 withResponse:(TNLResponse *)arg2;
@end
