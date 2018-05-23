//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TFNTwitterCardPersistedStateManager : NSObject
{
    NSString *_accountID;
    NSMutableDictionary *_cards;
}

+ (id)_cardsDirectoryPathForAccountID:(id)arg1;
+ (id)_cardNameForCardContext:(id)arg1;
+ (id)_fullPathForCardContext:(id)arg1 withAccountID:(id)arg2;
+ (id)_cardDirectoryPathForContext:(id)arg1 withAccountID:(id)arg2;
+ (id)_inMemoryQueue;
+ (id)_persistenceQueue;
+ (_Bool)isConversationCardUnlockedForCardData:(id)arg1 account:(id)arg2;
+ (_Bool)isConversationCardUnlockedForCardContext:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)persistence_ensureAccountCardsDirectoryExists;
- (void)persistence_removeCardStateAtPath:(id)arg1;
- (void)persistence_saveCardStateToDisk:(id)arg1 forContext:(id)arg2;
- (id)persistence_cardUrlsFromDiskSortedByAccessDate;
- (void)persistence_loadCardForUrl:(id)arg1;
- (void)persistence_loadMostRecentCardsFromDiskAndCleanup;
- (id)inMemory_cardStateDictionaryForCardContext:(id)arg1;
- (void)clearAll;
- (void)removeCardForContext:(id)arg1;
- (void)removeValueForKey:(id)arg1 withCardContext:(id)arg2;
- (id)objectForKey:(id)arg1 withCardContext:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCardContext:(id)arg3;
- (id)init;
- (id)initWithAccountID:(id)arg1;

@end
