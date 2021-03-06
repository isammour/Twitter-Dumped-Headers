//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterAVScribeAutoplayPlayer.h>

#import <T1Twitter/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>

@class AVPlayerItem, AVPlayerItemMetadataOutput, NSString, TFNTwitterAVConfiguration, TFNTwitterAVPlayerControllerVideo, TFSKVODispatcher;

@interface TFNTwitterAmplifyAVPlayer : TFNTwitterAVScribeAutoplayPlayer <AVPlayerItemMetadataOutputPushDelegate>
{
    TFSKVODispatcher *_statusKVODispatcher;
    TFSKVODispatcher *_playbackLikelyToKeepUpKVODispatcher;
    _Bool _didSendPlaybackLapse;
    _Bool _didSendPlaybackRetention;
    _Bool _isObservingCurrentPlayerItem;
    TFNTwitterAVPlayerControllerVideo *_video;
    AVPlayerItem *_observedPlayerItem;
    TFNTwitterAVConfiguration *_configuration;
    AVPlayerItemMetadataOutput *_playerItemMetadataOutput;
}

@property(retain, nonatomic) AVPlayerItemMetadataOutput *playerItemMetadataOutput; // @synthesize playerItemMetadataOutput=_playerItemMetadataOutput;
@property(retain, nonatomic) TFNTwitterAVConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) AVPlayerItem *observedPlayerItem; // @synthesize observedPlayerItem=_observedPlayerItem;
@property(nonatomic) _Bool isObservingCurrentPlayerItem; // @synthesize isObservingCurrentPlayerItem=_isObservingCurrentPlayerItem;
@property(nonatomic) _Bool didSendPlaybackRetention; // @synthesize didSendPlaybackRetention=_didSendPlaybackRetention;
@property(nonatomic) _Bool didSendPlaybackLapse; // @synthesize didSendPlaybackLapse=_didSendPlaybackLapse;
- (void)setVideo:(id)arg1;
- (id)video;
- (void).cxx_destruct;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (void)playbackDidFinish;
- (void)dispose;
- (void)resetScribeState;
- (void)private_unobserveCurrentAVPlayerItem;
- (void)private_observeCurrentAVPlayerItem;
- (void)stopObservingCurrentPlayerItem;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 video:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

