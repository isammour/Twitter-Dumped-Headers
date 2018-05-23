//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageModelObject.h>

@class NSDate, NSString, TFNDirectMessageConversation;
@protocol TFNDirectMessageContext, TFNDirectMessageUser;

@interface TFNDirectMessageConversationParticipant : TFNDirectMessageModelObject
{
    id <TFNDirectMessageUser> _participatingUser;
    NSDate *_joinDate;
    long long _joinConversationEventID;
    long long _lastReadMessageEventID;
    TFNDirectMessageConversation *_conversation;
}

@property(nonatomic) __weak TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) long long lastReadMessageEventID; // @synthesize lastReadMessageEventID=_lastReadMessageEventID;
@property(readonly, nonatomic) long long joinConversationEventID; // @synthesize joinConversationEventID=_joinConversationEventID;
@property(readonly, nonatomic) NSDate *joinDate; // @synthesize joinDate=_joinDate;
@property(readonly, nonatomic) id <TFNDirectMessageUser> participatingUser; // @synthesize participatingUser=_participatingUser;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithUser:(id)arg1 joinDate:(id)arg2 joinConversationEventID:(long long)arg3 lastReadMessageEventID:(long long)arg4;
- (id)initWithUser:(id)arg1;
- (id)initTestParticipantWithUserID:(long long)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

