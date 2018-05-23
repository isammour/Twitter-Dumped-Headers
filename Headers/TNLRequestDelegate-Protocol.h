//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/TNLRequestAuthorizer-Protocol.h>
#import <TwitterNetworkUtilities/TNLRequestEventHandler-Protocol.h>
#import <TwitterNetworkUtilities/TNLRequestHydrater-Protocol.h>
#import <TwitterNetworkUtilities/TNLRequestRedirecter-Protocol.h>

@class NSObject, TNLRequestOperation;
@protocol OS_dispatch_queue;

@protocol TNLRequestDelegate <TNLRequestAuthorizer, TNLRequestEventHandler, TNLRequestHydrater, TNLRequestRedirecter>

@optional
- (NSObject<OS_dispatch_queue> *)completionQueueForRequestOperation:(TNLRequestOperation *)arg1;
- (NSObject<OS_dispatch_queue> *)delegateQueueForRequestOperation:(TNLRequestOperation *)arg1;
@end

