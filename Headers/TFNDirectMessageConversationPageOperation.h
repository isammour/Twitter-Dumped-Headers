//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString, TFNDirectMessageConversation, TFNDirectMessageModel;
@protocol TFNDirectMessageContextNotificationCenter;

@interface TFNDirectMessageConversationPageOperation : TFNDirectMessageAPICommandOperation
{
    NSString *_accountID;
    TFNDirectMessageConversation *_conversation;
    TFNDirectMessageModel *_model;
    long long _maxEventID;
    id <TFNDirectMessageContextNotificationCenter> _notificationCenter;
    CDUnknownBlockType _paginationCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType paginationCompletionBlock; // @synthesize paginationCompletionBlock=_paginationCompletionBlock;
@property(retain, nonatomic) id <TFNDirectMessageContextNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) long long maxEventID; // @synthesize maxEventID=_maxEventID;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 conversation:(id)arg2 model:(id)arg3 maxEventID:(long long)arg4 notificationCenter:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

