//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPIDirectMessageConversationTypingCommand : TFSTwitterAPICommand
{
    NSString *_conversationID;
}

@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 conversationID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

