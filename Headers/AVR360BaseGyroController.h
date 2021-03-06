//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVRKit/AVRInteractionController-Protocol.h>
#import <AVRKit/UIGestureRecognizerDelegate-Protocol.h>

@class CMMotionManager, NSDate, NSString, UIPanGestureRecognizer;
@protocol AVRInteractionControllerDelegate;

@interface AVR360BaseGyroController : NSObject <UIGestureRecognizerDelegate, AVRInteractionController>
{
    _Bool _enabled;
    _Bool _touchEnabled;
    _Bool _motionEnabled;
    _Bool _motionActive;
    id <AVRInteractionControllerDelegate> _delegate;
    CMMotionManager *_motionManager;
    long long _deviceAttitudeMeasurementCount;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSDate *_transitionStart;
    union _GLKVector3 _touchOrigin;
    union _GLKVector3 _touchVelocity;
    union _GLKQuaternion _lastDeviceAttitude;
    union _GLKQuaternion _nextDeviceAttitude;
    union _GLKQuaternion _transitionViewAttitude;
    union _GLKMatrix4 _viewMatrix;
}

@property(nonatomic) _Bool motionActive; // @synthesize motionActive=_motionActive;
@property(nonatomic) union _GLKMatrix4 viewMatrix; // @synthesize viewMatrix=_viewMatrix;
@property(nonatomic) union _GLKQuaternion transitionViewAttitude; // @synthesize transitionViewAttitude=_transitionViewAttitude;
@property(retain, nonatomic) NSDate *transitionStart; // @synthesize transitionStart=_transitionStart;
@property(nonatomic) union _GLKVector3 touchVelocity; // @synthesize touchVelocity=_touchVelocity;
@property(nonatomic) union _GLKVector3 touchOrigin; // @synthesize touchOrigin=_touchOrigin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) long long deviceAttitudeMeasurementCount; // @synthesize deviceAttitudeMeasurementCount=_deviceAttitudeMeasurementCount;
@property(nonatomic) union _GLKQuaternion nextDeviceAttitude; // @synthesize nextDeviceAttitude=_nextDeviceAttitude;
@property(nonatomic) union _GLKQuaternion lastDeviceAttitude; // @synthesize lastDeviceAttitude=_lastDeviceAttitude;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(nonatomic) _Bool touchEnabled; // @synthesize touchEnabled=_touchEnabled;
@property(nonatomic) __weak id <AVRInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)updateWithDeltaTime:(float)arg1;
- (union _GLKVector3)_getRelativeDeviceMotion;
- (union _GLKVector3)_getAbsoluteDeviceOrientation;
- (union _GLKQuaternion)_getAbsoluteDeviceAttitude;
- (void)_firstDeviceOrientation:(union _GLKVector3)arg1;
- (void)_updateDeviceMotion;
- (union _GLKQuaternion)_applyTransitionToAttitude:(union _GLKQuaternion)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)_updateEnabled;
- (void)_detachGestureRecognizer;
- (void)_attachGestureRecognizerToView:(id)arg1;
- (void)_deactivateMotion;
- (void)_activateMotion;
- (void)dealloc;
- (void)detach;
- (void)beginTransitionFromMatrix:(union _GLKMatrix4)arg1;
- (void)attachToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

