//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@protocol LHLSTimeHandler <NSObject>
@property(readonly) _Bool clockRunning;
- (void)setMaxArrivalGap:(double)arg1;
- (void)resetClock;
- (unsigned long long)convertPTStoNTP:(double)arg1;
- (void)setLocalQueueLength:(double)arg1;
- (double)calcTotalLatency:(double)arg1;
- (void)setMappingFrom:(double)arg1 toNTP:(double)arg2;
- (double)currentTime;
- (double)delayRequiredUntil:(double)arg1;
- (double)convertToSecondsFromNTP:(unsigned long long)arg1;
@end

