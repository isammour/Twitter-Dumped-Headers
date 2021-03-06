//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterLivePipeline/TFSAPIRequestDelegate-Protocol.h>
#import <TwitterLivePipeline/TNLRequestOperationCancelSource-Protocol.h>

@class NSMutableSet, NSString, TLPClientConfiguration, TNLRequestOperation;
@protocol TLPAPIBatchCommandDelegate;

@interface TLPAPIBatchCommand : NSObject <TNLRequestOperationCancelSource, TFSAPIRequestDelegate>
{
    TNLRequestOperation *_requestOperation;
    id <TLPAPIBatchCommandDelegate> _delegate;
    NSMutableSet *_subTopics;
    NSMutableSet *_unsubTopics;
    TLPClientConfiguration *_configuration;
}

@property(readonly, nonatomic) TLPClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSMutableSet *unsubTopics; // @synthesize unsubTopics=_unsubTopics;
@property(readonly, nonatomic) NSMutableSet *subTopics; // @synthesize subTopics=_subTopics;
- (void).cxx_destruct;
- (void)APIRequest:(id)arg1 didFailWithAuthDependencyError:(id)arg2;
- (void)APIRequest:(id)arg1 requestOperation:(id)arg2 didCompleteWithResponse:(id)arg3;
- (id)cancelSourceDescription;
- (void)didCompleteWithAPIResponse:(id)arg1 error:(id)arg2;
- (id)createRequestWithLivePipelineSessionID:(id)arg1;
- (void)executeWithLivePipelineSessionID:(id)arg1;
- (void)addUnsubscribeTopics:(id)arg1;
- (void)addSubscribeTopics:(id)arg1;
- (void)cancelBatchWithError:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) _Bool isExecuting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

