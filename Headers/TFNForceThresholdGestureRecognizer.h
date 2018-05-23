//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface TFNForceThresholdGestureRecognizer : UIGestureRecognizer
{
    _Bool _engaged;
    _Bool _didEngage;
    _Bool _wasEngaged;
    double _engageThreshold;
    double _disengageThreshold;
    double _force;
    double _progress;
}

@property(nonatomic) _Bool wasEngaged; // @synthesize wasEngaged=_wasEngaged;
@property(nonatomic) _Bool didEngage; // @synthesize didEngage=_didEngage;
@property(nonatomic) _Bool engaged; // @synthesize engaged=_engaged;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double force; // @synthesize force=_force;
@property double disengageThreshold; // @synthesize disengageThreshold=_disengageThreshold;
@property double engageThreshold; // @synthesize engageThreshold=_engageThreshold;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

