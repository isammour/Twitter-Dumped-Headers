//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSError, PTVWatchVideoLifecycle;

@protocol PTVWatchVideoLifecycleDelegate <NSObject>

@optional
- (void)lifecycleDidCompleteStopWatchingRemotely:(PTVWatchVideoLifecycle *)arg1 withError:(NSError *)arg2;
- (void)lifecycleWillStopWatchingRemotely:(PTVWatchVideoLifecycle *)arg1;
- (void)lifecycleDidDelayStopWatchingRemotely:(PTVWatchVideoLifecycle *)arg1;
- (void)lifecycleDidCompletePingWatchingRemotely:(PTVWatchVideoLifecycle *)arg1 withError:(NSError *)arg2;
- (void)lifecycleWillPingWatchingRemotely:(PTVWatchVideoLifecycle *)arg1;
- (void)lifecycleDidCompleteStartWatchingRemotely:(PTVWatchVideoLifecycle *)arg1 withError:(NSError *)arg2;
- (void)lifecycleWillStartWatchingRemotely:(PTVWatchVideoLifecycle *)arg1;
@end
