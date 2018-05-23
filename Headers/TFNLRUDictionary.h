//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/NSFastEnumeration-Protocol.h>

@class NSMapTable, TFNLRUDictionaryNode;

@interface TFNLRUDictionary : NSObject <NSFastEnumeration>
{
    NSMapTable *_nodeMapTable;
    TFNLRUDictionaryNode *_headNode;
    TFNLRUDictionaryNode *_tailNode;
    long long _keyPolicy;
    unsigned long long _totalCostLimit;
    unsigned long long _softCostLimit;
    unsigned long long _totalCost;
}

@property(readonly, nonatomic) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned long long softCostLimit; // @synthesize softCostLimit=_softCostLimit;
@property(nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
@property(readonly, nonatomic) long long keyPolicy; // @synthesize keyPolicy=_keyPolicy;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)shrink;
- (void)_trim;
- (void)_moveNodeToFront:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)orderedValues;
- (id)orderedKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;
- (id)initWithKeyPolicy:(long long)arg1;
- (id)description;

@end

