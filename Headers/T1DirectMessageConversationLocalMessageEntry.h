//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNDirectMessageConversationEntry-Protocol.h>

@class NSDate, NSDictionary, NSString, TFNDirectMessageConversationEntryIdentifier;
@protocol TFNDirectMessageContext, TFNDirectMessageConversation, TFNDirectMessageUser;

@interface T1DirectMessageConversationLocalMessageEntry : NSObject <TFNDirectMessageConversationEntry>
{
    TFNDirectMessageConversationEntryIdentifier *_identifier;
    id <TFNDirectMessageConversation> _conversation;
    NSString *_message;
    CDStruct_778018ce _sortKey;
}

@property(nonatomic) CDStruct_778018ce sortKey; // @synthesize sortKey=_sortKey;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) __weak id <TFNDirectMessageConversation> conversation; // @synthesize conversation=_conversation;
@property(readonly, copy, nonatomic) TFNDirectMessageConversationEntryIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) id <TFNDirectMessageUser> originator;
@property(readonly, nonatomic, getter=isEstablished) _Bool established;
@property(readonly, nonatomic) unsigned long long entryType;
@property(readonly, nonatomic) NSDictionary *scribeItem;
- (long long)compare:(id)arg1;
- (long long)compareWithSortKey:(CDStruct_778018ce)arg1;
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversation:(id)arg1 message:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
