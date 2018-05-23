//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNLRUDictionary;
@protocol OS_dispatch_queue;

@interface TFNTwitterCardStateManager : NSObject
{
    TFNLRUDictionary *_cardStateCache;
    NSObject<OS_dispatch_queue> *_cacheSerialQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheSerialQueue; // @synthesize cacheSerialQueue=_cacheSerialQueue;
@property(retain, nonatomic) TFNLRUDictionary *cardStateCache; // @synthesize cardStateCache=_cardStateCache;
- (void).cxx_destruct;
- (id)_cardStateIdForCardContext:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)objectForKey:(id)arg1 withCardContext:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCardContext:(id)arg3;
- (void)clearAll;
- (id)init;

@end
