//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVRKit/AVR360BaseGyroController.h>

@interface AVR360RelativeMotionController : AVR360BaseGyroController
{
    union _GLKVector3 _deviceYXZ;
    union _GLKVector3 _touchYXZ;
}

@property(nonatomic) union _GLKVector3 touchYXZ; // @synthesize touchYXZ=_touchYXZ;
@property(nonatomic) union _GLKVector3 deviceYXZ; // @synthesize deviceYXZ=_deviceYXZ;
- (void)updateWithDeltaTime:(float)arg1;
- (void)beginTransitionFromMatrix:(union _GLKMatrix4)arg1;
- (void)handlePan:(id)arg1;
- (void)attachToView:(id)arg1;

@end
