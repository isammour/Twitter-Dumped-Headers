//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterVideoDisplaySession;

@interface TFNTwitterAVPlayerControllerSessionVVRState : NSObject
{
    _Bool _shouldUpdateStateForCurrentSession;
    double _cumulativePlaybackTime;
    double _cumulativePlaybackTimeWith25PercentVisibility;
    double _cumulativePlaybackTimeWith50PercentVisibility;
    double _cumulativePlaybackTimeWith75PercentVisibility;
    double _cumulativePlaybackTimeWith100PercentVisibility;
    double _cumulativePlaybackTimeWith100PercentVisibilityWithAudio;
    double _cumulativePlaybackTimeWithAudio;
    double _cumulativePlaybackTimeFullScreen;
    double _cumulativePlaybackTimeFullScreenWithAudio;
    TFNTwitterVideoDisplaySession *_videoDisplaySession;
}

@property(retain, nonatomic) TFNTwitterVideoDisplaySession *videoDisplaySession; // @synthesize videoDisplaySession=_videoDisplaySession;
@property(nonatomic) double cumulativePlaybackTimeFullScreenWithAudio; // @synthesize cumulativePlaybackTimeFullScreenWithAudio=_cumulativePlaybackTimeFullScreenWithAudio;
@property(nonatomic) double cumulativePlaybackTimeFullScreen; // @synthesize cumulativePlaybackTimeFullScreen=_cumulativePlaybackTimeFullScreen;
@property(nonatomic) double cumulativePlaybackTimeWithAudio; // @synthesize cumulativePlaybackTimeWithAudio=_cumulativePlaybackTimeWithAudio;
@property(nonatomic) double cumulativePlaybackTimeWith100PercentVisibilityWithAudio; // @synthesize cumulativePlaybackTimeWith100PercentVisibilityWithAudio=_cumulativePlaybackTimeWith100PercentVisibilityWithAudio;
@property(nonatomic) double cumulativePlaybackTimeWith100PercentVisibility; // @synthesize cumulativePlaybackTimeWith100PercentVisibility=_cumulativePlaybackTimeWith100PercentVisibility;
@property(nonatomic) double cumulativePlaybackTimeWith75PercentVisibility; // @synthesize cumulativePlaybackTimeWith75PercentVisibility=_cumulativePlaybackTimeWith75PercentVisibility;
@property(nonatomic) double cumulativePlaybackTimeWith50PercentVisibility; // @synthesize cumulativePlaybackTimeWith50PercentVisibility=_cumulativePlaybackTimeWith50PercentVisibility;
@property(nonatomic) double cumulativePlaybackTimeWith25PercentVisibility; // @synthesize cumulativePlaybackTimeWith25PercentVisibility=_cumulativePlaybackTimeWith25PercentVisibility;
@property(nonatomic) double cumulativePlaybackTime; // @synthesize cumulativePlaybackTime=_cumulativePlaybackTime;
@property(nonatomic) _Bool shouldUpdateStateForCurrentSession; // @synthesize shouldUpdateStateForCurrentSession=_shouldUpdateStateForCurrentSession;
- (void).cxx_destruct;

@end

