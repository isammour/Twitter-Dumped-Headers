//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNTwitterAudioPlayerView, TFNTwitterAudioTrack;

@protocol TFNTwitterAudioPlayerViewDelegate <NSObject>
- (void)audioPlayerView:(TFNTwitterAudioPlayerView *)arg1 didRequestAction:(long long)arg2;
- (void)audioPlayerView:(TFNTwitterAudioPlayerView *)arg1 didChangeScrubbingState:(long long)arg2;
- (long long)audioPlayerView:(TFNTwitterAudioPlayerView *)arg1 appInstallStatusForTrack:(TFNTwitterAudioTrack *)arg2;
@end

