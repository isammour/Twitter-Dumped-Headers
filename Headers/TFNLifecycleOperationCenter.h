//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@interface TFNLifecycleOperationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _failed;
    NSDictionary *_stages;
    NSDictionary *_dependencies;
    NSArray *_stageNames;
}

+ (id)sharedOperationCenter;
@property(copy, nonatomic) NSArray *stageNames; // @synthesize stageNames=_stageNames;
@property(copy, nonatomic) NSDictionary *dependencies; // @synthesize dependencies=_dependencies;
@property(copy, nonatomic) NSDictionary *stages; // @synthesize stages=_stages;
- (void).cxx_destruct;
- (_Bool)_dependenciesNotifiedStage:(id)arg1;
- (void)_fastForwardOperation:(id)arg1 stageName:(id)arg2;
- (void)_resetStage:(id)arg1;
- (void)_notifyStage:(id)arg1;
- (id)_stageForName:(id)arg1;
@property(readonly, nonatomic) _Bool failed; // @synthesize failed=_failed;
- (void)resetStage:(id)arg1;
- (void)notifyStage:(id)arg1;
- (_Bool)hasNotifiedStage:(id)arg1;
- (id)addOperationBlock:(CDUnknownBlockType)arg1 stage:(id)arg2;
- (void)addOperation:(id)arg1 stage:(id)arg2;
- (_Bool)configureWithDependencies:(id)arg1;
- (id)init;

@end
