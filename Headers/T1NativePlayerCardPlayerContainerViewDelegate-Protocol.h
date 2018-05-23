//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1NativePlayerCardPlayerContainerView, T1NativePlayerCardPlayerInstance, TFNAVPlayerView, TFNTwitterAVPlayerController, UIEvent, UIImage, UIView;

@protocol T1NativePlayerCardPlayerContainerViewDelegate <NSObject>
- (void)cardPlayerContainerView:(T1NativePlayerCardPlayerContainerView *)arg1 didTapPlayButtonOverlayWithEvent:(UIEvent *)arg2;

@optional
- (void)autoplayFinishingWithVideoView:(TFNAVPlayerView *)arg1 playerController:(TFNTwitterAVPlayerController *)arg2;
- (void)autoplayStartingWithVideoView:(TFNAVPlayerView *)arg1 playerController:(TFNTwitterAVPlayerController *)arg2;
- (void)playerInstance:(T1NativePlayerCardPlayerInstance *)arg1 presentFullscreenPlayerFromPreviewView:(UIView *)arg2 withPreviewImage:(UIImage *)arg3;
- (void)playerInstanceDidFailToPlay:(T1NativePlayerCardPlayerInstance *)arg1;
- (void)playerInstanceDidPlay:(T1NativePlayerCardPlayerInstance *)arg1;
@end
