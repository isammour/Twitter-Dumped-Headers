//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNFrameRateMonitor;

@protocol TFNFrameRateMonitorDelegate <NSObject>
- (void)monitor:(TFNFrameRateMonitor *)arg1 didCalculateAbsoluteFPS:(double)arg2 deltaFPS:(double)arg3 intervalSinceArmed:(double)arg4;
@end

