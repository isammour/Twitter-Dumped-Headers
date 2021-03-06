//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageModelObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNDirectMessageContextInboxActions-Protocol.h>
#import <T1Twitter/TFNDirectMessageInbox-Protocol.h>

@class NSNumber, NSString, TFNCoalescingUpdater, TFNDirectMessageInboxPageOperation, TFNDirectMessageInboxTimeline, TFNDirectMessageRefreshOperation;
@protocol TFNDirectMessageContext, TFNDirectMessageInbox;

@interface TFNDirectMessageInbox : TFNDirectMessageModelObject <NSCoding, TFNDirectMessageInbox, TFNDirectMessageContextInboxActions>
{
    NSNumber *_lastLowQualityFilterState;
    long long _lastSeenEventID;
    NSString *_cursor;
    TFNDirectMessageInboxTimeline *_trustedConversationsTimeline;
    TFNDirectMessageInboxTimeline *_untrustedConversationsTimeline;
    TFNCoalescingUpdater *_markAsSeenUpdater;
    long long _localLastSeenEventID;
    unsigned long long _countOfUnseenConversations;
    TFNDirectMessageRefreshOperation *_currentRefreshOperation;
    TFNDirectMessageInboxPageOperation *_currentTrustedConversationsPageOperation;
    TFNDirectMessageInboxPageOperation *_currentUntrustedConversationsPageOperation;
}

@property(nonatomic) __weak TFNDirectMessageInboxPageOperation *currentUntrustedConversationsPageOperation; // @synthesize currentUntrustedConversationsPageOperation=_currentUntrustedConversationsPageOperation;
@property(nonatomic) __weak TFNDirectMessageInboxPageOperation *currentTrustedConversationsPageOperation; // @synthesize currentTrustedConversationsPageOperation=_currentTrustedConversationsPageOperation;
@property(nonatomic) __weak TFNDirectMessageRefreshOperation *currentRefreshOperation; // @synthesize currentRefreshOperation=_currentRefreshOperation;
@property(nonatomic) unsigned long long countOfUnseenConversations; // @synthesize countOfUnseenConversations=_countOfUnseenConversations;
@property(nonatomic) long long localLastSeenEventID; // @synthesize localLastSeenEventID=_localLastSeenEventID;
@property(readonly, nonatomic) TFNCoalescingUpdater *markAsSeenUpdater; // @synthesize markAsSeenUpdater=_markAsSeenUpdater;
@property(retain, nonatomic) TFNDirectMessageInboxTimeline *untrustedConversationsTimeline; // @synthesize untrustedConversationsTimeline=_untrustedConversationsTimeline;
@property(retain, nonatomic) TFNDirectMessageInboxTimeline *trustedConversationsTimeline; // @synthesize trustedConversationsTimeline=_trustedConversationsTimeline;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(retain, nonatomic) NSNumber *lastLowQualityFilterState; // @synthesize lastLowQualityFilterState=_lastLowQualityFilterState;
- (void).cxx_destruct;
- (void)deleteConversation:(id)arg1;
- (void)recalculateConversationCounts;
- (void)updateConversationPosition:(id)arg1;
- (void)addConversation:(id)arg1;
- (id)_validateConversationIsDefinitive:(id)arg1;
- (void)_addConversation:(id)arg1;
- (void)pruneOldConversations;
- (void)fetchPermissionForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPermissionForUserID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_markAsSeen;
- (void)markAsSeenThroughConversation:(id)arg1;
- (void)markAsSeen;
- (void)loadMoreConversationsWithCursor:(id)arg1;
- (void)refresh:(long long)arg1 activeConversationID:(id)arg2 filterLowQuality:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
@property(readonly, nonatomic) id <TFNDirectMessageInbox> inbox;
- (id)conversationByID:(id)arg1;
@property(readonly, nonatomic) long long maxSortEventID;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) _Bool filtersLowQualityConversations;
- (id)internalUntrustedConversationsTimeline;
- (id)internalTrustedConversationsTimeline;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clear;
- (void)_commonInit;
- (id)init;
- (void)flushMarkAsSeen;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

