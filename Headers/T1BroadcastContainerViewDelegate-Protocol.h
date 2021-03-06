//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, T1BroadcastContainerView, TAVPlayer;
@protocol TAVPlayback;

@protocol T1BroadcastContainerViewDelegate <NSObject>

@optional
- (void)broadcastContainerViewDidEndAdPlayback:(T1BroadcastContainerView *)arg1;
- (void)broadcastContainerViewDidStartAdPlayback:(T1BroadcastContainerView *)arg1;
- (void)broadcastContainerView:(T1BroadcastContainerView *)arg1 didSetPlayer:(TAVPlayer *)arg2;
- (void)broadcastContainerView:(T1BroadcastContainerView *)arg1 playbackDidFailWithError:(NSError *)arg2;
- (void)broadcastContainerView:(T1BroadcastContainerView *)arg1 didStartPlayback:(id <TAVPlayback>)arg2;
@end

