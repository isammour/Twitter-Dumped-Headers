//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSModel/TFSModelCacheInterlockedOperation.h>

@class NSMutableArray, NSMutableSet, TFSModelCacheSession;

@interface TFSModelCacheWarmingOperation : TFSModelCacheInterlockedOperation
{
    TFSModelCacheSession *_session;
    NSMutableArray *_stack;
    NSMutableSet *_pushedKeys;
}

@property(readonly, nonatomic) NSMutableSet *pushedKeys; // @synthesize pushedKeys=_pushedKeys;
@property(readonly, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) TFSModelCacheSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)pushKeysIfNewInReverseOrder:(id)arg1;
- (void)main;
- (id)initWithKeys:(id)arg1 modelCache:(id)arg2 session:(id)arg3;

@end

