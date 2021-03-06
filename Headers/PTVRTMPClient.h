//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/LHLSPlayerClient-Protocol.h>
#import <PeriscopeViewer/PTVModelSSLPinner-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, NSTimer, PTVMediaPlayerStream, PTVRTMPConnection;
@protocol LHLSPlayerClientDelegate><LHLSRenderDelegate, LHLSTimeHandler, PTVModelSSLPinningDelegate;

@interface PTVRTMPClient : NSObject <LHLSPlayerClient, PTVModelSSLPinner>
{
    id <LHLSPlayerClientDelegate><LHLSRenderDelegate> _delegate;
    id <PTVModelSSLPinningDelegate> _sslPinningDelegate;
    id <LHLSTimeHandler> _masterClock;
    id _weakSelf;
    PTVRTMPConnection *_rtmp;
    int _mediaStream;
    NSMutableArray *_streams;
    int _lengthSize;
    PTVMediaPlayerStream *_video;
    PTVMediaPlayerStream *_audio;
    NSTimer *_connectTimer;
    NSDictionary *_params;
    NSString *_fmsver;
    double _lastVideo;
    _Bool usePSP;
    _Bool wasProxyError;
}

@property _Bool wasProxyError; // @synthesize wasProxyError;
@property _Bool usePSP; // @synthesize usePSP;
@property(readonly) __weak id <LHLSTimeHandler> masterClock; // @synthesize masterClock=_masterClock;
- (void).cxx_destruct;
- (void)dispatchAtPTS:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)startPlay;
- (void)checkFPS;
- (void)fpsTimer;
- (void)setLocalQueueLength:(double)arg1;
- (void)setupStreams:(id)arg1;
@property(readonly) double lastTransitTime;
@property(readonly) double latency;
- (id)getStatistics;
- (void)onMessage:(id)arg1;
- (void)onConnectTimeout:(id)arg1;
- (void)stopTimer;
- (void)shutdown;
- (void)connect;
- (void)connectToServer:(id)arg1 forURL:(id)arg2 playVideo:(_Bool)arg3 downlinkJitterComponent:(double)arg4 minBufferLength:(double)arg5 maxBufferLength:(double)arg6 constantBufferLength:(double)arg7;
- (void)setSSLPinningDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly) double currentBitrate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) double queueLength;
@property(readonly) Class superclass;

@end

