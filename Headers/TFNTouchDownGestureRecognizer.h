//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface TFNTouchDownGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _touchPoint;
    double _allowableMovement;
    double _force;
    double _maximumPossibleForce;
}

@property(nonatomic) double maximumPossibleForce; // @synthesize maximumPossibleForce=_maximumPossibleForce;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
