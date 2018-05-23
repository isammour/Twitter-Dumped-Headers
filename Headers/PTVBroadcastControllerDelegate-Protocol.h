//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVBroadcastControllerObserver-Protocol.h>

@class NSDate, PTVBroadcastController, PTVMessage;

@protocol PTVBroadcastControllerDelegate <PTVBroadcastControllerObserver>
- (double)broadcastControllerReplayDuration:(PTVBroadcastController *)arg1;
- (double)broadcastControllerCurrentReplayTimeInterval:(PTVBroadcastController *)arg1;
- (NSDate *)broadcastControllerProgramDateTime:(PTVBroadcastController *)arg1;
- (unsigned long long)broadcastControllerNTPForNow:(PTVBroadcastController *)arg1;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(PTVBroadcastController *)arg1;

@optional
- (_Bool)broadcastControllerVirtualGiftingEnabled:(PTVBroadcastController *)arg1;
- (_Bool)broadcastController:(PTVBroadcastController *)arg1 didReceiveMessage:(PTVMessage *)arg2 isForReplay:(_Bool)arg3;
- (NSDate *)broadcastController:(PTVBroadcastController *)arg1 deliveryDateForMessage:(PTVMessage *)arg2 isForReplay:(_Bool)arg3;
@end
