//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDownloadMediaPlayer.h>

@interface TFNVinePlayer : TFNDownloadMediaPlayer
{
    double _accumulatedLoopTime;
    double _loopDuration;
}

+ (CDStruct_1b6d18a9)_standardTotalTrimAmount;
+ (CDStruct_1b6d18a9)_standardTrim;
+ (void)_seamlessLoopingVinePlayerItemFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) double loopDuration; // @synthesize loopDuration=_loopDuration;
@property(nonatomic) double accumulatedLoopTime; // @synthesize accumulatedLoopTime=_accumulatedLoopTime;
- (long long)type;
- (void)_recordLoops;
- (void)performDispose;
- (void)avPlayerDidFinishPlayback:(id)arg1;
- (double)currentDisplayDuration;
- (double)currentDisplayTime;
- (void)preparePlayerItemWithDownloadItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

