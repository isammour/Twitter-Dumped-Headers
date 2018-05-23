//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNThreadInfo : NSObject
{
    int _pThreadPolicy;
    int _pThreadPriority;
    int _policy;
    int _runState;
    int _flags;
    int _suspendCount;
    unsigned long long _threadID;
    NSString *_pThreadName;
    NSString *_dispatchQueueLabel;
    double _userTime;
    double _systemTime;
    double _CPUUsageFraction;
    double _sleepTime;
}

+ (id)currentThreadInfos;
+ (id)loggingHeader;
@property(readonly, nonatomic) double sleepTime; // @synthesize sleepTime=_sleepTime;
@property(readonly, nonatomic) int suspendCount; // @synthesize suspendCount=_suspendCount;
@property(readonly, nonatomic) int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) int runState; // @synthesize runState=_runState;
@property(readonly, nonatomic) int policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) double CPUUsageFraction; // @synthesize CPUUsageFraction=_CPUUsageFraction;
@property(readonly, nonatomic) double systemTime; // @synthesize systemTime=_systemTime;
@property(readonly, nonatomic) double userTime; // @synthesize userTime=_userTime;
@property(readonly, nonatomic) int pThreadPriority; // @synthesize pThreadPriority=_pThreadPriority;
@property(readonly, nonatomic) int pThreadPolicy; // @synthesize pThreadPolicy=_pThreadPolicy;
@property(readonly, nonatomic) NSString *dispatchQueueLabel; // @synthesize dispatchQueueLabel=_dispatchQueueLabel;
@property(readonly, nonatomic) NSString *pThreadName; // @synthesize pThreadName=_pThreadName;
@property(readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
- (void).cxx_destruct;
- (id)loggingLineWithTimingsRelativeToThreadInfo:(id)arg1;
- (id)loggingLine;
- (id)initWithMachThread:(unsigned int)arg1;

@end

