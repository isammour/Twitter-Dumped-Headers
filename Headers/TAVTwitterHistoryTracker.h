//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TAVAnalyticsTracker-Protocol.h>

@class NSString, TAVAnalyticsSessionState, TAVPerformanceState, TAVScribeContext, TAVWallTime, TFNTwitterAVDeviceState, TFNTwitterAVHistory;
@protocol TAVAnalyticsEventSink, TAVPlaythroughID;

@interface TAVTwitterHistoryTracker : NSObject <TAVAnalyticsTracker>
{
    TAVAnalyticsSessionState *_analyticsSessionState;
    long long _lastTimeControlStatus;
    _Bool _lastIsMuted;
    id <TAVPlaythroughID> _lastPlaythroughID;
    _Bool _lastDidPlayToEndTime;
    TAVPerformanceState *_lastPerformanceStateContent;
    TAVPerformanceState *_lastPerformanceStateObservations;
    _Bool _lastIsFullscreen;
    TFNTwitterAVDeviceState *_deviceState;
    TFNTwitterAVHistory *_history;
    TAVScribeContext *_scribeContext;
    TAVWallTime *_intentToPlayTime;
    TAVWallTime *_firstPlayTime;
    _Bool _first;
    _Bool _needLatency;
    id <TAVAnalyticsEventSink> _sink;
}

@property(retain, nonatomic) id <TAVAnalyticsEventSink> sink; // @synthesize sink=_sink;
- (void).cxx_destruct;
- (void)scribe;
- (void)updatePerformanceObservations:(id)arg1;
- (void)logWithType:(id)arg1 state:(id)arg2 latencyMS:(double)arg3;
- (void)logWithType:(id)arg1 state:(id)arg2;
- (void)processDidPlayToEndTime:(_Bool)arg1 state:(id)arg2;
- (void)processPlaythroughID:(id)arg1 state:(id)arg2;
- (void)processPerformanceStateObservations:(id)arg1 state:(id)arg2;
- (void)processPerformanceStateContent:(id)arg1 state:(id)arg2;
- (void)processIsFullscreen:(_Bool)arg1 state:(id)arg2;
- (void)processIsMuted:(_Bool)arg1 state:(id)arg2;
- (void)processTimeControlStatus:(long long)arg1 state:(id)arg2;
- (void)finishSync;
- (void)processStateSync:(id)arg1;
- (_Bool)isReset;
- (void)reset;
- (void)finish;
- (void)processState:(id)arg1;
- (id)initWithDeviceState:(id)arg1 history:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

