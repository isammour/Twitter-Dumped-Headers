//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSThread;

@interface TFSThread : NSObject
{
    NSThread *_thread;
    id _observer;
}

- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)cancel;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)performBlockAsync:(CDUnknownBlockType)arg1;
- (void)performBlockSync:(CDUnknownBlockType)arg1;
- (_Bool)isCurrentThread;
- (void)_runLoop;
- (id)init;
@property(retain, nonatomic) NSString *name;

@end

