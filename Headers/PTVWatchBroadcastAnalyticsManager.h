//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSMutableDictionary, NSMutableSet, PTVBroadcastWatcher;

@interface PTVWatchBroadcastAnalyticsManager : NSObject
{
    _Bool _hasSentBroadcastViewedEvent;
    NSMutableSet *_shareEvents;
    NSDate *_lastStartWatchingDate;
    NSDate *_lastIsVideoBufferingDate;
    NSMutableDictionary *_giftsSentByStyle;
    _Bool _didHaveCoins;
    _Bool _didViewContributors;
    long long _maxLeaderboardPosition;
    NSDate *_lastTimeEnteredTop3Contributors;
    double _totalTimeInTop3Contributors;
    _Bool _isVideoBuffering;
    _Bool _hasViewedBroadcastDetails;
    _Bool _hasReportedBroadcast;
    _Bool _hasWatchedOrPreviewedLive;
    _Bool _hasWatchedOrPreviewedReplay;
    PTVBroadcastWatcher *_watcher;
    double _timeSpentPreviewing;
    long long _crossBroadcastDirection;
    NSError *_periscopeError;
    unsigned long long _nCommentsSent;
    unsigned long long _nCommentRepliesReceived;
    unsigned long long _nCommentRepliesSubmitted;
    unsigned long long _nJuriesServedOn;
    unsigned long long _nCommentsReported;
    long long _numberOfLiveHeartsSent;
    long long _numberOfReplayHeartsSent;
    double _nWatchTime;
    double _nLoadTime;
    long long _numberOfScreenshotsTaken;
}

@property(nonatomic) long long numberOfScreenshotsTaken; // @synthesize numberOfScreenshotsTaken=_numberOfScreenshotsTaken;
@property(nonatomic) double nLoadTime; // @synthesize nLoadTime=_nLoadTime;
@property(nonatomic) double nWatchTime; // @synthesize nWatchTime=_nWatchTime;
@property(nonatomic) long long numberOfReplayHeartsSent; // @synthesize numberOfReplayHeartsSent=_numberOfReplayHeartsSent;
@property(nonatomic) long long numberOfLiveHeartsSent; // @synthesize numberOfLiveHeartsSent=_numberOfLiveHeartsSent;
@property(nonatomic) _Bool hasWatchedOrPreviewedReplay; // @synthesize hasWatchedOrPreviewedReplay=_hasWatchedOrPreviewedReplay;
@property(nonatomic) _Bool hasWatchedOrPreviewedLive; // @synthesize hasWatchedOrPreviewedLive=_hasWatchedOrPreviewedLive;
@property(nonatomic) _Bool hasReportedBroadcast; // @synthesize hasReportedBroadcast=_hasReportedBroadcast;
@property(nonatomic) unsigned long long nCommentsReported; // @synthesize nCommentsReported=_nCommentsReported;
@property(nonatomic) unsigned long long nJuriesServedOn; // @synthesize nJuriesServedOn=_nJuriesServedOn;
@property(nonatomic) unsigned long long nCommentRepliesSubmitted; // @synthesize nCommentRepliesSubmitted=_nCommentRepliesSubmitted;
@property(nonatomic) unsigned long long nCommentRepliesReceived; // @synthesize nCommentRepliesReceived=_nCommentRepliesReceived;
@property(nonatomic) unsigned long long nCommentsSent; // @synthesize nCommentsSent=_nCommentsSent;
@property(nonatomic) _Bool hasViewedBroadcastDetails; // @synthesize hasViewedBroadcastDetails=_hasViewedBroadcastDetails;
@property(retain, nonatomic) NSError *periscopeError; // @synthesize periscopeError=_periscopeError;
@property(nonatomic) long long crossBroadcastDirection; // @synthesize crossBroadcastDirection=_crossBroadcastDirection;
@property(nonatomic) double timeSpentPreviewing; // @synthesize timeSpentPreviewing=_timeSpentPreviewing;
@property(nonatomic) _Bool isVideoBuffering; // @synthesize isVideoBuffering=_isVideoBuffering;
@property(readonly, nonatomic) __weak PTVBroadcastWatcher *watcher; // @synthesize watcher=_watcher;
- (void).cxx_destruct;
- (void)updateContributorLeaderboardPosition:(long long)arg1;
- (void)didViewContributors;
- (void)didHaveCoins;
- (void)didSendGiftWithStyleID:(id)arg1;
- (void)stopTrackingLoadTime;
- (void)startTrackingLoadTime;
- (void)stopTrackingWatchTime;
- (void)startTrackingWatchTime;
- (void)didEndWatching;
- (void)didBeginWatchingWithTimeSpentPreviewing:(double)arg1;
- (void)didEndPreviewingWithoutWatchingWithTimeSpentPreviewing:(double)arg1;
- (void)didBeginPreviewingReplay;
- (void)didBeginPreviewingLive;
- (void)didTakeScreenshot;
- (void)didSendReplayHeart;
- (void)didSendLiveHeart;
- (void)didEndWatchingReplay;
- (void)didBeginWatchingReplayWithTimeSpentPreviewing:(double)arg1;
- (void)didEndWatchingLive;
- (void)didBeginWatchingLiveWithTimeSpentPreviewing:(double)arg1;
- (void)didReportBroadcast;
- (void)didReportComment;
- (void)didServeOnJury;
- (void)didSubmitCommentReply;
- (void)didReceiveCommentReply;
- (void)didSendChatMessage:(id)arg1;
- (void)didViewBroadcastDetails;
- (void)trackNewShareEventWithType:(id)arg1;
- (id)channelIDForAnalytics;
- (id)channelNameForAnalytics;
- (void)sendBroadcastViewedEvent;
- (id)watchContext;
- (id)broadcast;
- (id)initWithWatcher:(id)arg1;

@end

