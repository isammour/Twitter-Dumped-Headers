//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVExternalVideoPlayer.h>

#import <T1Twitter/PTVBroadcastWatcherObserver-Protocol.h>
#import <T1Twitter/T1BroadcastContainerViewDelegate-Protocol.h>
#import <T1Twitter/T1VideoBitRateManagerDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSDate, NSString, NSURL, T1BroadcastContainerView, T1VideoBitRateManager, TAVPlaybackState, TAVPlayer, TAVPlayerViewConfiguration, TAVScribeContext, TFNTwitterAccount, TFNTwitterBroadcast;
@protocol T1WatchBroadcastExternalVideoPlayerDelegate, TFNTwitterCardDataSource;

@interface T1WatchBroadcastExternalVideoPlayer : PTVExternalVideoPlayer <TAVPlaybackObserver, T1VideoBitRateManagerDelegate, T1BroadcastContainerViewDelegate, PTVBroadcastWatcherObserver>
{
    CDUnknownBlockType _seekFinishedBlock;
    NSDate *_dateLastPaused;
    _Bool _willMuteOnPlayerCreation;
    NSDate *_dateWhenLastReceivedNTPTimestamp;
    TAVPlaybackState *_currentPlaybackState;
    NSString *_lifecycleToken;
    NSString *_chatToken;
    NSString *_chatPermissionType;
    NSURL *_shareURL;
    _Bool _shouldAutoplay;
    TFNTwitterBroadcast *_broadcast;
    unsigned long long _displayMode;
    id <T1WatchBroadcastExternalVideoPlayerDelegate> _delegate;
    TAVScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
    id <TFNTwitterCardDataSource> _cardDataSource;
    TAVPlayer *_player;
    TAVPlayerViewConfiguration *_playerViewConfiguration;
    double _lastReceivedPlayerNTPValue;
    double _ntpValueWhenSeekingStarted;
    T1BroadcastContainerView *_broadcastContainerView;
    T1VideoBitRateManager *_videoBitrateManager;
}

@property(retain, nonatomic) T1VideoBitRateManager *videoBitrateManager; // @synthesize videoBitrateManager=_videoBitrateManager;
@property(retain, nonatomic) T1BroadcastContainerView *broadcastContainerView; // @synthesize broadcastContainerView=_broadcastContainerView;
@property(nonatomic) double ntpValueWhenSeekingStarted; // @synthesize ntpValueWhenSeekingStarted=_ntpValueWhenSeekingStarted;
@property(nonatomic) double lastReceivedPlayerNTPValue; // @synthesize lastReceivedPlayerNTPValue=_lastReceivedPlayerNTPValue;
@property(retain, nonatomic) TAVPlayerViewConfiguration *playerViewConfiguration; // @synthesize playerViewConfiguration=_playerViewConfiguration;
@property(retain, nonatomic) TAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TAVScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) __weak id <T1WatchBroadcastExternalVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) TFNTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (void).cxx_destruct;
- (void)captureStillImageOfVideoPlayer:(CDUnknownBlockType)arg1;
- (_Bool)shouldCaptureStillImageOfVideoPlayer;
- (void)_t1_dispose;
- (unsigned long long)_t1_ptvVideoPlaybackStateForTAVPlaybackState:(id)arg1;
- (unsigned long long)_t1_broadcastContainerViewDisplayModeFromBroadcastControllerDisplayMode:(unsigned long long)arg1;
- (void)_t1_dismissButtonPressedOnAdPlayer:(id)arg1;
- (void)_t1_playlistItemDidChange:(id)arg1;
- (void)_t1_updateBroadcastContainerViewShouldAutoplay:(_Bool)arg1;
@property(nonatomic, getter=isMuted) _Bool muted;
- (void)broadcastContainerView:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didSetPlayer:(id)arg2;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)handlePanFrom360PanGestureRecognizer:(id)arg1;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canSeekToTime;
- (double)currentPlaybackTime;
- (double)videoDuration;
- (id)dateWhenVideoWasLastPaused;
- (id)programDateTime;
- (id)dateWhenLastReceivedNTPTimestamp;
- (double)lastReceivedNTPTimestamp;
- (_Bool)hasNTPData;
- (_Bool)canProvideTimingDataForSyncingComments;
- (struct CGSize)currentVideoPlayerSize;
- (void)setContentAreaGuide:(id)arg1;
- (_Bool)shouldAutoPlayVideo;
- (void)disconnectVideo;
- (void)pauseVideo;
- (void)playVideo;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
- (void)viewDidLoad;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;
- (void)updatePreferredPeakBitRate:(id)arg1;
- (id)tfs_debugStrings;
- (void)dealloc;
- (id)initWithBroadcast:(id)arg1 account:(id)arg2 cardDataSource:(id)arg3 scribeContext:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

