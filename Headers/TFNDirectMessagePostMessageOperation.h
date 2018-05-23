//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString, TFNDirectMessageConversation, TFNDirectMessageDraftEntry;
@protocol TFNDirectMessagePostMessageOperationDelegate, TFNDirectMessageUserCache;

@interface TFNDirectMessagePostMessageOperation : TFNDirectMessageAPICommandOperation
{
    NSString *_accountID;
    TFNDirectMessageConversation *_conversation;
    TFNDirectMessageDraftEntry *_message;
    id <TFNDirectMessageUserCache> _userCache;
    id <TFNDirectMessagePostMessageOperationDelegate> _delegate;
}

@property __weak id <TFNDirectMessagePostMessageOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TFNDirectMessageUserCache> userCache; // @synthesize userCache=_userCache;
@property(readonly, nonatomic) TFNDirectMessageDraftEntry *message; // @synthesize message=_message;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 conversation:(id)arg2 message:(id)arg3 userCache:(id)arg4;

@end
