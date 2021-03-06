//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterAVPlayer.h>

@class NSMutableArray;
@protocol TFNTwitterAVScribePlayerDelegate;

@interface TFNTwitterAVScribePlayer : TFNTwitterAVPlayer
{
    _Bool _didSendPlaybackComplete;
    _Bool _didSendPlaybackStart;
    _Bool _scribeTentpoleEvents;
    NSMutableArray *_tentpolesDidPass;
    NSMutableArray *_tentpolesToNotify;
}

@property(retain, nonatomic) NSMutableArray *tentpolesToNotify; // @synthesize tentpolesToNotify=_tentpolesToNotify;
@property(retain, nonatomic) NSMutableArray *tentpolesDidPass; // @synthesize tentpolesDidPass=_tentpolesDidPass;
@property(nonatomic) _Bool scribeTentpoleEvents; // @synthesize scribeTentpoleEvents=_scribeTentpoleEvents;
@property(nonatomic) _Bool didSendPlaybackStart; // @synthesize didSendPlaybackStart=_didSendPlaybackStart;
@property(nonatomic) _Bool didSendPlaybackComplete; // @synthesize didSendPlaybackComplete=_didSendPlaybackComplete;
- (void).cxx_destruct;
- (id)_scribeActionForTentpoleType:(long long)arg1;
- (void)_checkAndNotifyTentpoleWithCurrentPlaybackTime:(double)arg1;
- (_Bool)_hasSentTentpoleWithType:(long long)arg1;
- (void)_setupTentpolesWithCurrentPlaybackTime:(double)arg1;
- (void)playbackDidProgressToTime:(double)arg1 withIncrement:(double)arg2;
- (void)playbackDidFinish;
@property(readonly, nonatomic) __weak id <TFNTwitterAVScribePlayerDelegate> scribeDelegate;
@property(readonly, nonatomic) double durationForScribe;
- (void)resetScribeState;
- (id)initWithDelegate:(id)arg1 playerItem:(id)arg2;

@end

