//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TimedBufferList : NSObject
{
    NSMutableArray *_outputFrames;
    NSMutableArray *_outputTimestamps;
    long long _framesRendered;
    long long _framesDropped;
}

- (void).cxx_destruct;
- (id)getFirstFrame:(double *)arg1;
- (void)empty;
- (id)getFrameForTime:(double)arg1 actual:(double *)arg2;
- (_Bool)isEmpty;
- (void)insertFrame:(id)arg1 atTime:(double)arg2;
- (id)init;

@end
