//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class PTVBroadcastControlsDrawerView;

@protocol PTVBroadcastControlsDelegate <NSObject>
- (void)broadcastControlsMute:(PTVBroadcastControlsDrawerView *)arg1;
- (void)broadcastControlsFlipCamera:(PTVBroadcastControlsDrawerView *)arg1;
- (void)broadcastControlsStop:(PTVBroadcastControlsDrawerView *)arg1;
- (void)broadcastControlsLeave:(PTVBroadcastControlsDrawerView *)arg1;
@end
