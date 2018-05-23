//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageConversationEntry.h>

@class NSArray, NSDate, NSDictionary, NSString, TFNDirectMessageConversationEntryIdentifier;
@protocol TFNDirectMessageContext, TFNDirectMessageConversation, TFNDirectMessageUser;

@interface TFNDirectMessageConversationJoinedEntry : TFNDirectMessageConversationEntry
{
    id <TFNDirectMessageUser> _addingParticipant;
    NSArray *_participantsAtJoinedTime;
}

@property(readonly, copy, nonatomic) NSArray *participantsAtJoinedTime; // @synthesize participantsAtJoinedTime=_participantsAtJoinedTime;
@property(readonly, nonatomic) id <TFNDirectMessageUser> addingParticipant; // @synthesize addingParticipant=_addingParticipant;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) id <TFNDirectMessageUser> originator;
@property(readonly, nonatomic) unsigned long long entryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 addingParticipant:(id)arg2 participantsAtJoinedTime:(id)arg3 time:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
@property(readonly, nonatomic) __weak id <TFNDirectMessageConversation> conversation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEstablished) _Bool established;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) TFNDirectMessageConversationEntryIdentifier *identifier;
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(readonly, nonatomic) CDStruct_778018ce sortKey;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDate *time;

@end
