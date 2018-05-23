//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <T1Twitter/CAAnimationDelegate-Protocol.h>

@class CAShapeLayer, NSString, UILabel, UILongPressGestureRecognizer, UIView;

@interface T1NewsCameraSlidingCaptureButton : UIControl <CAAnimationDelegate>
{
    UIView *_circleView;
    UIView *_squareView;
    UIView *_pulseView;
    struct CGPoint _activeTouchOffset;
    UILabel *_zoomTip;
    UILabel *_handsfreeTip;
    UIView *_progressMask;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_pulseLayer;
    UILongPressGestureRecognizer *_recognizer;
    _Bool _animating;
    double _zoomValue;
    UIView *_lockBumpView;
}

@property(readonly, nonatomic) UIView *lockBumpView; // @synthesize lockBumpView=_lockBumpView;
@property(readonly, nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (struct CGPoint)_t1_zoomTipCenter;
- (struct CGPoint)_t1_zoomTipStartCenter;
- (struct CGPoint)_t1_handsfreeTipCenter;
- (const struct CGPath *)_t1_progressPathWithInset:(double)arg1;
- (struct CGPoint)_t1_leftPositionCenter;
- (struct CGRect)_t1_squareFrame;
- (struct CGRect)_t1_hiddenSquareFrame;
- (struct CGRect)_t1_boundedCircleFrameForCurrentTouch;
- (struct CGRect)_t1_leftCircleFrame;
- (struct CGRect)_t1_normalCircleFrame;
- (struct CGRect)_t1_touchlessCircleFrame;
- (void)_t1_animateCircle;
- (void)_t1_bounceCaptureButton;
- (void)_t1_endTracking;
- (void)_t1_continueTracking:(struct CGPoint)arg1;
- (void)_t1_beginTracking:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_t1_recognizeTouch:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)setEnabled:(_Bool)arg1;
- (void)_animateTips;
- (void)stopAnimatingProgress;
- (void)startAnimatingProgressWithDelay:(double)arg1 showingHints:(_Bool)arg2;
- (_Bool)_t1_isBeingTouched;
- (void)_updateProgressColor;
- (void)_layoutProgressCircle;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
