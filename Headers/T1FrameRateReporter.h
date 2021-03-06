//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNFrameRateMonitorDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, TFNTwitterAccount;

@interface T1FrameRateReporter : NSObject <TFNFrameRateMonitorDelegate>
{
    NSMutableArray *_traces;
    TFNTwitterAccount *_account;
    _Bool _stallReported;
    _Bool _traceReported;
    _Bool _stallReportEnabled;
    _Bool _traceReportEnabled;
    unsigned long long _stallCountSinceActive;
    unsigned long long _stallThreshold;
    unsigned long long _traceThreshold;
}

+ (id)sharedReporter;
@property(readonly, nonatomic) unsigned long long traceThreshold; // @synthesize traceThreshold=_traceThreshold;
@property(readonly, nonatomic, getter=isTraceReportEnabled) _Bool traceReportEnabled; // @synthesize traceReportEnabled=_traceReportEnabled;
@property(readonly, nonatomic) unsigned long long stallThreshold; // @synthesize stallThreshold=_stallThreshold;
@property(readonly, nonatomic) unsigned long long stallCountSinceActive; // @synthesize stallCountSinceActive=_stallCountSinceActive;
@property(readonly, nonatomic, getter=isStallReportEnabled) _Bool stallReportEnabled; // @synthesize stallReportEnabled=_stallReportEnabled;
- (void).cxx_destruct;
- (void)monitor:(id)arg1 didCalculateAbsoluteFPS:(double)arg2 deltaFPS:(double)arg3 intervalSinceArmed:(double)arg4;
- (void)reportStallWithAbsoluteFPS:(double)arg1;
- (void)reportStackTracesWithMonitor:(id)arg1 deltaFPS:(double)arg2;
@property(readonly, nonatomic) double scrollTime;
- (void)_updateFrameRateMonitorIfNeeded;
- (void)_updateWithStall:(_Bool)arg1;
- (void)_accountActivated:(id)arg1;
- (void)pause;
- (void)resume;
- (void)enableTraceReport:(_Bool)arg1 withThreshold:(unsigned long long)arg2;
- (void)enableStallReport:(_Bool)arg1 withThreshold:(unsigned long long)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSArray *traces;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

