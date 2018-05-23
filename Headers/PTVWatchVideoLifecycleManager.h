//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVWatchVideoLifecycleDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTimer, PTVAsyncLog, PTVWatchContext;
@protocol PTVLoggedInUserProtocol, PTVTwitterIntegrationDelegate, PTVWatchVideoLifecycleManagerDelegate;

@interface PTVWatchVideoLifecycleManager : NSObject <PTVWatchVideoLifecycleDelegate>
{
    PTVWatchVideoLifecycleManager *_weakSelf;
    NSMutableArray *_lifecyclesArray;
    _Bool _isLive;
    _Bool _isAutoPlayingOnFeed;
    id <PTVWatchVideoLifecycleManagerDelegate> _delegate;
    id <PTVTwitterIntegrationDelegate> _twitterIntegrationDelegate;
    NSString *_lifecycleToken;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVWatchContext *_watchContext;
    NSTimer *_pingBroadcastTimer;
    PTVAsyncLog *_viewerLogs;
}

@property(readonly, nonatomic) PTVAsyncLog *viewerLogs; // @synthesize viewerLogs=_viewerLogs;
@property(retain, nonatomic) NSTimer *pingBroadcastTimer; // @synthesize pingBroadcastTimer=_pingBroadcastTimer;
@property(readonly, nonatomic) PTVWatchContext *watchContext; // @synthesize watchContext=_watchContext;
@property(readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(readonly, nonatomic) _Bool isAutoPlayingOnFeed; // @synthesize isAutoPlayingOnFeed=_isAutoPlayingOnFeed;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSString *lifecycleToken; // @synthesize lifecycleToken=_lifecycleToken;
@property(nonatomic) __weak id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate; // @synthesize twitterIntegrationDelegate=_twitterIntegrationDelegate;
@property(nonatomic) __weak id <PTVWatchVideoLifecycleManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didStopWatching;
- (void)willStopWatching;
- (_Bool)shouldStopWatching;
- (_Bool)stopWatchingWithMetaData:(id)arg1;
- (void)didPingWatching;
- (void)willPingWatching;
- (void)pingWatching;
- (void)startPingBroadcastTimer;
- (void)didStartWatching;
- (void)willStartWatching;
- (_Bool)startWatchingWithPreviewTimeInterval:(double)arg1;
- (_Bool)shouldStartWatching;
- (void)clearLogs;
- (void)logEventWithFormat:(id)arg1;
- (void)logEvent:(id)arg1;
- (_Bool)shouldSendLifecycleLogData;
- (void)appendLifecycle;
- (id)lifecycle;
@property(readonly, nonatomic) NSString *session;
@property(readonly, nonatomic) _Bool isWatching;
- (id)initWithDelegate:(id)arg1 lifecycleToken:(id)arg2 isLive:(_Bool)arg3 isAutoPlayingOnFeed:(_Bool)arg4 loggedInUser:(id)arg5 watchContext:(id)arg6;
- (void)lifecycleDidCompleteStopWatchingRemotely:(id)arg1 withError:(id)arg2;
- (void)lifecycleWillStopWatchingRemotely:(id)arg1;
- (void)lifecycleDidDelayStopWatchingRemotely:(id)arg1;
- (void)lifecycleDidCompletePingWatchingRemotely:(id)arg1 withError:(id)arg2;
- (void)lifecycleWillPingWatchingRemotely:(id)arg1;
- (void)lifecycleDidCompleteStartWatchingRemotely:(id)arg1 withError:(id)arg2;
- (void)lifecycleWillStartWatchingRemotely:(id)arg1;
- (id)startWatchingMetaDataForLifecycle:(id)arg1;
- (id)lifecycleMetaDataForLifecycle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

