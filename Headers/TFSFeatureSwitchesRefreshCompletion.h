//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TFSFeatureSwitchesRefreshCompletion : NSObject
{
    CDUnknownBlockType _completionBlock;
    double _timeout;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)private_callCompletionBlockWithSuccess:(_Bool)arg1 timeout:(_Bool)arg2;
- (void)private_cancelTimer;
- (void)completeRefreshWithSuccess:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

