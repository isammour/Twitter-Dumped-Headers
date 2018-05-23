//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, TFNAVPlayerView, TFNTwitterAVPlayerController;

@protocol TFNTwitterAVPlayerControllerDelegate <NSObject>
- (void)avPlayerControllerDidCompletePreparingForPlayback:(TFNTwitterAVPlayerController *)arg1;
- (double)avPlayerController:(TFNTwitterAVPlayerController *)arg1 visibilityPercentageForPlayerView:(TFNAVPlayerView *)arg2;
- (void)avPlayerController:(TFNTwitterAVPlayerController *)arg1 detachPlayerView:(TFNAVPlayerView *)arg2 animated:(_Bool)arg3;
- (void)avPlayerController:(TFNTwitterAVPlayerController *)arg1 attachPlayerView:(TFNAVPlayerView *)arg2 animated:(_Bool)arg3;

@optional
- (_Bool)avPlayerControllerShouldManagePlayerVolume:(TFNTwitterAVPlayerController *)arg1;
- (_Bool)avPlayerControllerShouldResumeOnAudioRouteChanges:(TFNTwitterAVPlayerController *)arg1;
- (_Bool)avPlayerControllerShouldHandleAudioRouteChanges:(TFNTwitterAVPlayerController *)arg1;
- (_Bool)avPlayerControllerIsObscuredByOverlappingView:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerWillDispose:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerPlaybackDidStart:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerPlaybackDidStall:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerPlaybackDidResume:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerPlaybackDidRecoverFromStall:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerPlaybackDidPause:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerControllerDidDispose:(TFNTwitterAVPlayerController *)arg1;
- (void)avPlayerController:(TFNTwitterAVPlayerController *)arg1 playbackDidProgressToTime:(double)arg2;
- (void)avPlayerController:(TFNTwitterAVPlayerController *)arg1 didTapPlayerView:(TFNAVPlayerView *)arg2;
- (void)avPlayerController:(TFNTwitterAVPlayerController *)arg1 didFailToLoadWithError:(NSError *)arg2;
- (void)avPlayerController:(TFNTwitterAVPlayerController *)arg1 didChangeFromMode:(long long)arg2 toMode:(long long)arg3;
@end

