//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSMainThreadRunLoopDeferredTask : NSObject
{
    struct __CFRunLoopObserver *_observer;
    CDUnknownBlockType _task;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)_tfs_private_invokeDeferredTask;
- (void)_tfs_private_scheduleTask;
- (void)_tfs_private_invalidateObserver;
- (void)dealloc;
- (id)initWithTask:(CDUnknownBlockType)arg1;
- (id)init;

@end

