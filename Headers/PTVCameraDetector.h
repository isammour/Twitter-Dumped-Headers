//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_semaphore, PTVExternalCameraDetector;

@interface PTVCameraDetector : NSObject
{
    NSString *_name;
    _Bool _isForeground;
    _Bool _isBroadcasting;
    int _pendingChecks;
    NSObject<OS_dispatch_semaphore> *_cameraSem;
    NSObject<PTVExternalCameraDetector> *_current;
    NSObject<PTVExternalCameraDetector> *_active;
    int _currentIndex;
    NSMutableArray *_detectors;
    _Bool _observingDetectors;
    long long _videoReceivingState;
}

+ (id)sharedInstance;
@property long long videoReceivingState; // @synthesize videoReceivingState=_videoReceivingState;
- (void).cxx_destruct;
- (void)forceNotPresent;
- (void)cameraFinished;
- (id)createExternalCameraForSize:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)releaseDetectors;
- (void)attachDetectors;
- (void)checkPresenceLogicChangedWithDispatchDelay:(int)arg1;
- (_Bool)shouldCheckPresence;
@property _Bool isBroadcasting;
@property _Bool isForeground;
- (void)resetCurrentCamera;
- (void)setCurrent:(id)arg1;
@property(readonly, nonatomic) NSObject<PTVExternalCameraDetector> *currentCameraDetector;
@property int nextExternalCamera;
- (int)numExternalCamerasExcluding360:(_Bool)arg1;
@property(readonly) int numExternalCameras;
- (void)disableInsta360DetectorIfSupported;
- (void)enableInsta360DetectorIfSupported;
- (void)scanDetectors;
- (void)dispatchPresenceCheckWithDelay:(int)arg1 camerasShouldCheckPresenceImmediately:(_Bool)arg2;
@property(readonly) _Bool hasExternalCamera;
@property(readonly) _Bool externalCameraIsDJI;
@property(readonly) _Bool externalCameraIsGoPro;
@property(readonly) _Bool externalCameraIs360;
@property(readonly) int externalCameraAudioRate;
@property(readonly) _Bool externalCameraHasFixedAudio;
@property(readonly) NSString *externalCameraName;
- (id)init;

@end
