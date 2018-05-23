//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1BroadcastContainerViewLayoutState, T1BroadcastContainerViewModel, TAVPlaybackState;

@protocol T1BroadcastContainerViewLayoutDelegate <NSObject>
- (_Bool)shouldLayoutPlayerViewForDisplayMode:(unsigned long long)arg1;
- (double)videoAspectRatioForVideoSize:(struct CGSize)arg1 rotation:(double)arg2;
- (T1BroadcastContainerViewLayoutState *)layoutStateForModel:(T1BroadcastContainerViewModel *)arg1 displayMode:(unsigned long long)arg2 playbackState:(TAVPlaybackState *)arg3 bounds:(struct CGRect)arg4;
@end

