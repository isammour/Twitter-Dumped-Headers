//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterAVPlayerControllerVideoMoatState : NSObject
{
    _Bool _logged1SecView;
    _Bool _loggedMRCView;
    _Bool _loggedGroupMView;
    double _continuousVideoMRCViewPlaybackTime;
    double _accumulativeVideoGroupMViewPlaybackTime;
    double _continuousVideo1SecViewPlaybackTime;
}

@property(nonatomic) _Bool loggedGroupMView; // @synthesize loggedGroupMView=_loggedGroupMView;
@property(nonatomic) _Bool loggedMRCView; // @synthesize loggedMRCView=_loggedMRCView;
@property(nonatomic) _Bool logged1SecView; // @synthesize logged1SecView=_logged1SecView;
@property(nonatomic) double continuousVideo1SecViewPlaybackTime; // @synthesize continuousVideo1SecViewPlaybackTime=_continuousVideo1SecViewPlaybackTime;
@property(nonatomic) double accumulativeVideoGroupMViewPlaybackTime; // @synthesize accumulativeVideoGroupMViewPlaybackTime=_accumulativeVideoGroupMViewPlaybackTime;
@property(nonatomic) double continuousVideoMRCViewPlaybackTime; // @synthesize continuousVideoMRCViewPlaybackTime=_continuousVideoMRCViewPlaybackTime;

@end
