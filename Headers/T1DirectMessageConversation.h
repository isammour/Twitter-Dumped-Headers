//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNDirectMessageContextConversationActions-Protocol.h>
#import <T1Twitter/TFNDirectMessageConversation-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, TFNDirectMessageComposition, TFNDirectMessageConversationIdentifier, TFNTwitterEntityImageInfo;
@protocol TFNDirectMessageContext, TFNDirectMessageConversation, TFNDirectMessageConversationEntry, TFNDirectMessageInbox;

@interface T1DirectMessageConversation : NSObject <TFNDirectMessageConversation, TFNDirectMessageContextConversationActions>
{
    id <TFNDirectMessageConversation> _conversation;
}

@property(readonly, nonatomic) id <TFNDirectMessageConversation> conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_conversationNotificationReflector:(id)arg1;
- (id)conversationActions;
- (id)recipient;
@property(readonly, nonatomic, getter=isTrusted) _Bool trusted;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, nonatomic) _Bool unread;
@property(readonly, nonatomic) NSDate *muteExpirationTime;
@property(readonly, nonatomic) _Bool mentionNotificationsDisabled;
@property(readonly, nonatomic) _Bool notificationsDisabled;
@property(readonly, nonatomic) NSArray *participantsExcludingPerspectivalUser;
@property(readonly, copy, nonatomic) NSArray *participants;
@property(readonly, nonatomic) long long creatorID;
@property(readonly, nonatomic) NSDate *latestUpdateTime;
@property(readonly, nonatomic) NSDate *createTime;
- (void)resetComposition;
@property(readonly, nonatomic) TFNDirectMessageComposition *composition;
- (id)latestEntryOfType:(unsigned long long)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id <TFNDirectMessageConversationEntry> latestEntry;
@property(readonly, nonatomic) _Bool hasMoreEntries;
@property(readonly, nonatomic) unsigned long long entryCount;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) NSArray *allEntries;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
@property(readonly, nonatomic) long long conversationType;
@property(readonly, copy, nonatomic) NSString *conversationName;
@property(readonly, copy, nonatomic) NSString *conversationID;
@property(readonly, nonatomic) TFNTwitterEntityImageInfo *avatarInfo;
@property(readonly, nonatomic) long long sortEventID;
@property(readonly, nonatomic) TFNDirectMessageConversationIdentifier *identifier;
@property(readonly, nonatomic) __weak id <TFNDirectMessageInbox> inbox;
@property(readonly, nonatomic) id <TFNDirectMessageContext> context;
- (void)pruneOldEntries;
- (void)addWelcomeMessage:(id)arg1;
- (void)updateReadOnlyState:(_Bool)arg1;
- (void)refresh;
- (void)removeGroupAvatar;
- (void)rename:(id)arg1;
- (void)addUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markEntryAsAbuse:(id)arg1;
- (void)unmarkEntryAsSpam:(id)arg1;
- (void)markEntryAsSpam:(id)arg1;
- (id)validConversationNameWithString:(id)arg1;
- (_Bool)validateConversationName:(id)arg1;
- (void)cancelDraftMessage:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateGroupAvatarWithAsset:(id)arg1 localURL:(id)arg2;
- (void)markAsRead;
- (void)disableMentionNotifications;
- (void)enableMentionNotifications;
- (void)disableNotificationsForDuration:(unsigned long long)arg1;
- (void)enableNotifications;
- (void)deleteConversation;
- (void)accept;
- (void)loadMoreEntriesWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
@property(readonly, nonatomic, getter=isDraft) _Bool draft;
@property(readonly, nonatomic) CDStruct_912cb5d2 readState;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)init;
- (id)scribeElement;
- (id)deleteScribeAction;
- (unsigned long long)countOfEventsAfterLastReadMarker;
- (unsigned long long)countOfReceivedMessagesAfterLastReadMarker;
- (_Bool)hasMessagesBeforeLastReadMarker;
@property(nonatomic, readonly) NSURL *generatedAvatarURL;
@property(nonatomic, readonly) struct CGSize avatarDimensions;
@property(nonatomic, readonly) NSURL *avatarURL;
@property(nonatomic, readonly) NSString *reportMessageActionTitle;
@property(nonatomic, readonly) NSString *reportConversationActionTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
