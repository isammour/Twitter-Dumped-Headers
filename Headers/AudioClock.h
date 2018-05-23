//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AudioClock : NSObject
{
    struct OpaqueAudioQueue *_queue;
    double _sampleRate;
    double _queueStartSamples;
    NSMutableArray *_breaks;
}

- (void).cxx_destruct;
- (double)convertToSampleRelative:(double)arg1;
- (void)setBreakOf:(double)arg1 atSample:(double)arg2;
- (double)currentTime;
- (void)setQueueStart:(double)arg1;
- (id)initWithQueue:(struct OpaqueAudioQueue *)arg1 andRate:(double)arg2;

@end
