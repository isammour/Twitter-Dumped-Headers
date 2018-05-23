//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNInterfaceOrientationChangeListenerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerObserver-Protocol.h>

@class NSDate, NSMutableArray, NSString, TFNInterfaceOrientationChangeListener, TFNTwitterAVPlayerController, TFSTimer;
@protocol TFNTwitterAVHeartbeatObserver;

@interface TFNTwitterAVHeartbeatGenerator : NSObject <TFNInterfaceOrientationChangeListenerDelegate, TFNTwitterAVPlayerControllerObserver>
{
    _Bool _usingProgramDateTime;
    _Bool _timeJumped;
    double _interval;
    TFSTimer *_timer;
    TFNTwitterAVPlayerController *_player;
    NSDate *_lastObservedProgramDate;
    NSDate *_lastObservedClientDate;
    id <TFNTwitterAVHeartbeatObserver> _observer;
    NSDate *_bufferingIntervalStartDate;
    double _bufferingIntervalAggregate;
    double _lastSampledBitrate;
    TFNInterfaceOrientationChangeListener *_rotationListener;
    NSMutableArray *_presentationChangeEvents;
}

@property(nonatomic) _Bool timeJumped; // @synthesize timeJumped=_timeJumped;
@property(retain, nonatomic) NSMutableArray *presentationChangeEvents; // @synthesize presentationChangeEvents=_presentationChangeEvents;
@property(retain, nonatomic) TFNInterfaceOrientationChangeListener *rotationListener; // @synthesize rotationListener=_rotationListener;
@property(nonatomic) double lastSampledBitrate; // @synthesize lastSampledBitrate=_lastSampledBitrate;
@property(nonatomic) double bufferingIntervalAggregate; // @synthesize bufferingIntervalAggregate=_bufferingIntervalAggregate;
@property(retain, nonatomic) NSDate *bufferingIntervalStartDate; // @synthesize bufferingIntervalStartDate=_bufferingIntervalStartDate;
@property(nonatomic, getter=isUsingProgramDateTime) _Bool usingProgramDateTime; // @synthesize usingProgramDateTime=_usingProgramDateTime;
@property(nonatomic) __weak id <TFNTwitterAVHeartbeatObserver> observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSDate *lastObservedClientDate; // @synthesize lastObservedClientDate=_lastObservedClientDate;
@property(copy, nonatomic) NSDate *lastObservedProgramDate; // @synthesize lastObservedProgramDate=_lastObservedProgramDate;
@property(nonatomic) __weak TFNTwitterAVPlayerController *player; // @synthesize player=_player;
@property(retain, nonatomic) TFSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)tfn_resetPresentationChangeEvents;
- (double)tfn_resetBufferingInterval;
- (void)tfn_updateLastObservedDate;
- (void)tfn_tickWithScribeContext:(id)arg1;
- (void)tfn_tick;
- (void)tfn_stop;
- (void)tfn_start;
- (void)interfaceOrientationChangeListener:(id)arg1 didObserveInterfaceOrientationChange:(long long)arg2;
- (void)avPlayerController:(id)arg1 session:(id)arg2 willChangeFromVideo:(id)arg3 toVideo:(id)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 scribeContextWillChangeFrom:(id)arg4 to:(id)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 fullscreenChanged:(_Bool)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 newAccessLogEntryBecameAvailable:(id)arg4;
- (void)avPlayerControllerDidStall:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerControllerTimeDidJump:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 timeDidChangeTo:(double)arg4 withContinuousInterval:(double)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 playingChangedTo:(_Bool)arg4;
- (id)initWithInterval:(double)arg1 observer:(id)arg2 usingProgramDateTime:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

