//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface TFNOrderedMutableDictionary : NSObject <NSFastEnumeration>
{
    NSMutableOrderedSet *_order;
    NSMutableDictionary *_dic;
}

- (void).cxx_destruct;
- (id)description;
- (id)addEntriesFromOrderedMutableDictionary:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)count;
- (id)init;

@end
