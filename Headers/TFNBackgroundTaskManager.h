//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFSBackgroundTaskHandleDelegate-Protocol.h>

@class NSDictionary, NSString, UIApplication;

@interface TFNBackgroundTaskManager : NSObject <TFSBackgroundTaskHandleDelegate>
{
    UIApplication *_application;
    NSString *_name;
    double _endingDelay;
    unsigned long long _backgroundTaskID;
    NSDictionary *_tasks;
    unsigned long long _endingCounter;
}

+ (void)_callExpirationHandlersInMainQueueWithTasks:(id)arg1;
@property(nonatomic) unsigned long long endingCounter; // @synthesize endingCounter=_endingCounter;
@property(copy) NSDictionary *tasks; // @synthesize tasks=_tasks;
@property unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(nonatomic) double endingDelay; // @synthesize endingDelay=_endingDelay;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)backgroundTaskHandleWillBeDeallocated:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_removeHandleInQueue:(id)arg1;
- (void)_endBackgroundTaskIfNecessaryInQueue;
- (void)_beginBackgroundTaskIfNecessaryInQueue;
- (id)_backgroundTaskHandleInQueueWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)performExpiringTaskWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)backgroundTaskHandleWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 name:(id)arg2 endingDelay:(double)arg3;
- (id)initWithApplication:(id)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

