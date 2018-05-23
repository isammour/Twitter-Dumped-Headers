//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

#import <T1Twitter/TFNDirectMessageFetchUpdatesOperationDelegate-Protocol.h>

@class NSOperation, NSOperationQueue, TFNDirectMessageFetchUpdatesOperation, TFNDirectMessageModel, TFNDirectMessageProcessUserUpdatesResponseOperation;

@interface TFNDirectMessageRefreshOperation : TFSConcurrentOperation <TFNDirectMessageFetchUpdatesOperationDelegate>
{
    NSOperationQueue *_queue;
    TFNDirectMessageModel *_model;
    TFNDirectMessageFetchUpdatesOperation *_fetchOperation;
    TFNDirectMessageProcessUserUpdatesResponseOperation *_processResponseOperation;
    NSOperation *_completionOperation;
}

@property(retain, nonatomic) NSOperation *completionOperation; // @synthesize completionOperation=_completionOperation;
@property(retain, nonatomic) TFNDirectMessageProcessUserUpdatesResponseOperation *processResponseOperation; // @synthesize processResponseOperation=_processResponseOperation;
@property(retain, nonatomic) TFNDirectMessageFetchUpdatesOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchUpdatesOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchUpdatesOperation:(id)arg1 didSucceedWithResponse:(id)arg2;
- (void)run;
- (void)completeOperation;
- (void)cancel;
- (id)initWithAccountID:(id)arg1 model:(id)arg2 source:(long long)arg3 activeConversationID:(id)arg4 filterLowQuality:(id)arg5 notificationCenter:(id)arg6;
- (id)init;

@end
