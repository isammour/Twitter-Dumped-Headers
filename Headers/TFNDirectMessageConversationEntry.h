//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageModelObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNDirectMessageConversationEntry-Protocol.h>

@class NSDate, NSDictionary, NSString, TFNDirectMessageConversationEntryIdentifier, TFNDirectMessageConversationEntryMetadata;
@protocol TFNDirectMessageContext, TFNDirectMessageConversation, TFNDirectMessageUser;

@interface TFNDirectMessageConversationEntry : TFNDirectMessageModelObject <TFNDirectMessageConversationEntry, NSCoding>
{
    id <TFNDirectMessageConversation> _conversation;
    TFNDirectMessageConversationEntryIdentifier *_identifier;
    NSDate *_time;
    TFNDirectMessageConversationEntryMetadata *_metadata;
    CDStruct_778018ce _sortKey;
}

@property(retain, nonatomic) TFNDirectMessageConversationEntryMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) CDStruct_778018ce sortKey; // @synthesize sortKey=_sortKey;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) TFNDirectMessageConversationEntryIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <TFNDirectMessageConversation> conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareWithSortKey:(CDStruct_778018ce)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) id <TFNDirectMessageUser> originator;
@property(readonly, nonatomic, getter=isEstablished) _Bool established;
@property(readonly, nonatomic) unsigned long long entryType;
- (void)assimilateLocalEntry:(id)arg1;
- (id)initWithIdentifier:(id)arg1 time:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
