//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVMediaPlaybackHandler-Protocol.h>

@class CADisplayLink, NSDate, NSMutableArray, NSString, PTVH264Depacketiser, PTVStdDevStats, TimedBufferList;
@protocol LHLSRenderDelegate, LHLSTimeHandler, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PTVVTDecoder : NSObject <PTVMediaPlaybackHandler>
{
    PTVH264Depacketiser *_depacketiser;
    int _framesDecoded;
    NSDate *_lastFPSCheck;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    TimedBufferList *_list;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_semaphore> *_displayLinkActive;
    NSDate *_reportedLatency;
    double _recentLatency;
    PTVStdDevStats *_queueLength;
    PTVStdDevStats *_networkLatency;
    id _enterBackgroundNotify;
    id _enterForegroundNotify;
    NSDate *_playStarted;
    double _width;
    double _height;
    id _weakSelf;
    NSMutableArray *_timedBlocks;
    _Bool _isBackground;
    _Bool _decoderComplete;
    id <LHLSRenderDelegate> _renderDelegate;
    id <LHLSTimeHandler> _clockDelegate;
    double _latestPTS;
    double _lastFrameRendered;
}

@property double lastFrameRendered; // @synthesize lastFrameRendered=_lastFrameRendered;
@property double latestPTS; // @synthesize latestPTS=_latestPTS;
@property _Bool decoderComplete; // @synthesize decoderComplete=_decoderComplete;
@property _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) __weak id <LHLSTimeHandler> clockDelegate; // @synthesize clockDelegate=_clockDelegate;
@property(nonatomic) __weak id <LHLSRenderDelegate> renderDelegate; // @synthesize renderDelegate=_renderDelegate;
- (void).cxx_destruct;
@property(readonly) double localQueueLength;
@property(readonly) double lastTransitTime;
- (void)noteNetworkLatency:(double)arg1;
- (void)processTimedBlocksAt:(double)arg1;
- (void)dispatchAtPTS:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)getStatistics;
@property(readonly) double framerate;
- (void)shutdown;
- (void)displayLinkCallback:(id)arg1;
- (void)onFrame:(struct __CVBuffer *)arg1 atTime:(double)arg2;
- (void)noteDiscontinuity;
- (void)onEndOfBroadcast;
- (void)onData:(id)arg1 time:(double)arg2;
- (void)calcLatencyAt:(double)arg1;
- (void)renderBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flushAtEOS;
- (void)onFrameData:(id)arg1 time:(double)arg2 decodeAt:(double)arg3;
- (void)onMP4Frame:(id)arg1 time:(double)arg2 decodeAt:(double)arg3;
- (struct CGSize)getDimensions;
- (_Bool)constructDecoder;
@property(readonly) double latency;
- (void)didEnterBackground;
- (void)didBecomeActive;
- (void)dealloc;
- (id)initWithSPS:(id)arg1 pps:(id)arg2 protocol:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

