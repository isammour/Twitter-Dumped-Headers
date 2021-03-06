//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/LHLSPlayerClient-Protocol.h>
#import <PeriscopeViewer/NSURLSessionDataDelegate-Protocol.h>
#import <PeriscopeViewer/NSURLSessionDelegate-Protocol.h>
#import <PeriscopeViewer/NSURLSessionTaskDelegate-Protocol.h>
#import <PeriscopeViewer/PTVNetworkSession-Protocol.h>

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURLSession, PTVAACRender, PTVStdDevStats, PTVVTDecoder;
@protocol LHLSPlayerClientDelegate><LHLSRenderDelegate, LHLSTimeHandler;

@interface PTVLHLSClient : NSObject <PTVNetworkSession, NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegate, LHLSPlayerClient>
{
    struct LHLSPlayback *_player;
    struct PTVLHLSDelegate *_delegateWrapper;
    id _weakSelf;
    PTVStdDevStats *_jitterVideo;
    PTVStdDevStats *_jitterAudio;
    PTVStdDevStats *_downloadRatio;
    PTVStdDevStats *_downloadRate;
    NSDate *_lastAudio;
    NSDate *_lastVideo;
    NSData *_sps;
    NSData *_pps;
    int _audioRate;
    int _audioChannels;
    NSURLSession *_session;
    NSMutableDictionary *_taskMap;
    NSMutableArray *_taskList;
    _Bool _isTranscoded;
    double _localQueueLength;
    _Bool wasProxyError;
    _Bool _isLive;
    _Bool _shuttingDown;
    _Bool _jsonMetadataReceived;
    id <LHLSPlayerClientDelegate><LHLSRenderDelegate> _delegate;
    NSString *_url;
    PTVAACRender *_audio;
    PTVVTDecoder *_video;
}

@property _Bool jsonMetadataReceived; // @synthesize jsonMetadataReceived=_jsonMetadataReceived;
@property _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property _Bool isLive; // @synthesize isLive=_isLive;
@property(retain) PTVVTDecoder *video; // @synthesize video=_video;
@property(retain) PTVAACRender *audio; // @synthesize audio=_audio;
@property(retain) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <LHLSPlayerClientDelegate><LHLSRenderDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool wasProxyError; // @synthesize wasProxyError;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancelTask:(id)arg1;
- (void)remove:(id)arg1;
- (id)fetchURL:(id)arg1 forTask:(id)arg2;
- (void)noteStatistic:(const char *)arg1 value:(double)arg2;
- (void)flushStreams;
- (_Bool)hasSpaceForMedia;
- (void)onPlaylistLoaded;
- (double)getDuration;
- (_Bool)seekTo:(double)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)play;
- (_Bool)openReplayURL:(id)arg1;
- (void)checkFPS;
- (void)fpsTimer;
- (id)getStatistics;
- (void)setLocalQueueLength:(double)arg1;
- (void)shutdown;
@property __weak id <LHLSTimeHandler> masterClock;
@property(readonly) double queueLength;
@property(readonly) double lastTransitTime;
@property(readonly) double latency;
- (void)onDiscont;
- (void)onEndOfBroadcast;
- (void)onTargetBuffer:(double)arg1;
- (void)onJSONMetadata:(const char *)arg1 length:(int)arg2 pts:(double)arg3;
- (void)onMetadata:(const char *)arg1 length:(int)arg2 pts:(double)arg3;
- (void)handleMetadata:(id)arg1 pts:(double)arg2;
- (void)dispatchAtPTS:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)onVideo:(const char *)arg1 length:(int)arg2 pts:(double)arg3 dts:(double)arg4;
- (void)onVideoFormat:(id)arg1 pps:(id)arg2;
- (void)onAudioData:(const char *)arg1 length:(int)arg2 time:(double)arg3;
- (void)onAudioRate:(int)arg1 channels:(int)arg2;
- (void)connectToServer:(id)arg1 forURL:(id)arg2 playVideo:(_Bool)arg3 downlinkJitterComponent:(double)arg4 minBufferLength:(double)arg5 maxBufferLength:(double)arg6 constantBufferLength:(double)arg7;
- (void)setupPlayer:(id)arg1 isLive:(_Bool)arg2 downlinkJitterComponent:(double)arg3 minBufferLength:(double)arg4 maxBufferLength:(double)arg5 constantBufferLength:(double)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly) double currentBitrate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

