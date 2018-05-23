//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface TFNTwitterBatchFetchManager : NSObject
{
    NSMutableSet *_keysForPendingItems;
    NSMutableSet *_keysForFetchFailedItems;
    NSMutableDictionary *_itemCache;
}

@property(readonly, nonatomic) NSMutableDictionary *itemCache; // @synthesize itemCache=_itemCache;
@property(readonly, nonatomic) NSMutableSet *keysForFetchFailedItems; // @synthesize keysForFetchFailedItems=_keysForFetchFailedItems;
@property(readonly, nonatomic) NSMutableSet *keysForPendingItems; // @synthesize keysForPendingItems=_keysForPendingItems;
- (void).cxx_destruct;
- (void)_tfn_removeFailedRequestsWithKeys:(id)arg1;
- (void)_tfn_addFailedRequestsWithKeys:(id)arg1;
- (void)_tfn_removePendingItemsWithKeys:(id)arg1;
- (void)_tfn_addPendingItemsWithKeys:(id)arg1;
- (void)_tfn_didFetchItems:(id)arg1 forKeys:(id)arg2 error:(id)arg3;
- (void)_tfn_performFetchBlock:(CDUnknownBlockType)arg1 withKeys:(id)arg2;
- (void)_tfn_addItemsToCache:(id)arg1;
- (_Bool)isFetchNeededForKey:(id)arg1;
- (_Bool)isFetchFailedForKey:(id)arg1;
- (_Bool)isItemWithKeyPending:(id)arg1;
- (id)itemForKey:(id)arg1;
- (void)fetchItemsForKeys:(id)arg1 maxCount:(unsigned long long)arg2 fetchBlock:(CDUnknownBlockType)arg3;
- (void)invalidateCache;
- (id)init;

@end
