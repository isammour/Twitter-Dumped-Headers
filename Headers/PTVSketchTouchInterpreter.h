//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PTVSketchSettings;
@protocol PTVSketchPointReceivable;

@interface PTVSketchTouchInterpreter : NSObject
{
    long long _lastPointStrokeID;
    CDStruct_7cac685a _lastTouch;
    long long _currentStrokeID;
    struct CGRect _videoRect;
    _Bool _doesRotate;
    _Bool _forceTouchSupported;
    id <PTVSketchPointReceivable> _pointReceivable;
    NSMutableArray *_outgoingPointQueue;
    PTVSketchSettings *_settings;
}

@property(retain, nonatomic) PTVSketchSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSMutableArray *outgoingPointQueue; // @synthesize outgoingPointQueue=_outgoingPointQueue;
@property(retain, nonatomic) id <PTVSketchPointReceivable> pointReceivable; // @synthesize pointReceivable=_pointReceivable;
@property(nonatomic) _Bool forceTouchSupported; // @synthesize forceTouchSupported=_forceTouchSupported;
- (void).cxx_destruct;
- (void)setVideoRect:(struct CGRect)arg1 doesRotate:(_Bool)arg2;
- (void)interpolatePointsBetweenStartTouch:(CDStruct_7cac685a)arg1 andTouch:(CDStruct_7cac685a)arg2 inView:(id)arg3 orientation:(long long)arg4;
- (struct CGRect)boundsInPortraitForView:(id)arg1 orientation:(long long)arg2;
- (void)enqueuePoint:(struct CGPoint)arg1 radius:(double)arg2 time:(double)arg3 fromView:(id)arg4 fromOrientation:(long long)arg5;
- (struct CGPoint)normalizedPoint:(struct CGPoint)arg1 inView:(id)arg2 fromOrientation:(long long)arg3;
- (struct CGPoint)normalizedPointForTouches:(id)arg1 inView:(id)arg2 fromOrientation:(long long)arg3;
- (void)endStroke;
- (void)interpretStrokeTouches:(id)arg1 fromView:(id)arg2 withCurrentOrientation:(long long)arg3;
- (void)setColor:(id)arg1;
- (void)beginNewStroke;
- (struct CGPoint)convertPointToPortraitSpaceWith:(struct CGPoint)arg1 inView:(id)arg2 fromOrientation:(long long)arg3;
- (id)init;

@end

