//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSArray, NSString;
@protocol TFNDirectMessageUserCache;

@interface TFSTwitterAPIDirectMessageConversationMetadataCommand : TFSTwitterAPICommand
{
    NSString *_conversationID;
    NSArray *_participantIDs;
    id <TFNDirectMessageUserCache> _userCache;
}

@property(readonly, nonatomic) id <TFNDirectMessageUserCache> userCache; // @synthesize userCache=_userCache;
@property(readonly, copy, nonatomic) NSArray *participantIDs; // @synthesize participantIDs=_participantIDs;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 participantIDs:(id)arg3 userCache:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 conversationID:(id)arg3 userCache:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

