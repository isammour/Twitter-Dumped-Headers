//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, NSString, TFNTwitterAVPlayer;

@protocol TFNTwitterAVPlayerDelegate <NSObject>

@optional
- (double)currentPreferredPeakBitRate;
- (void)attachPlayerLayerToAVPlayer:(TFNTwitterAVPlayer *)arg1;
- (_Bool)shouldAttachPlayerLayerBeforeInsertingPlayerItem;
- (_Bool)controllerIsMutedForAVPlayer:(TFNTwitterAVPlayer *)arg1;
- (void)avPlayerDidScrub:(TFNTwitterAVPlayer *)arg1;
- (void)avPlayerDidStall:(TFNTwitterAVPlayer *)arg1;
- (void)avPlayerDidRecoverFromStall:(TFNTwitterAVPlayer *)arg1;
- (void)avPlayerDidFinishPlayback:(TFNTwitterAVPlayer *)arg1;
- (void)avPlayer:(TFNTwitterAVPlayer *)arg1 playbackTimeDidProgress:(double)arg2 withIncrement:(double)arg3;
- (void)avPlayer:(TFNTwitterAVPlayer *)arg1 didError:(NSError *)arg2 withMessage:(NSString *)arg3;
@end
