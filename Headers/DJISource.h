//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVExternCameraBase.h>

#import <PeriscopeViewer/DJICameraDelegate-Protocol.h>
#import <PeriscopeViewer/H264DecoderOutput-Protocol.h>

@class DJICamera, H264VTDecode, NSDate, NSMutableArray, NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue, PTVVideoSourceDelegate;

@interface DJISource : PTVExternCameraBase <DJICameraDelegate, H264DecoderOutput>
{
    DJICamera *_camera;
    unsigned long long _encoderType;
    H264VTDecode *_decoder;
    struct CGSize _decodedSize;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSObject<OS_dispatch_queue> *_postDecodeQueue;
    NSMutableArray *_decodedFrames;
    NSDate *_firstPacket;
    NSMutableData *_remaining;
    NSMutableArray *_frameNals;
    unsigned int _frameCount;
    struct SeqParamSet _sps;
    int _framesDropped;
    NSDate *_captureStarted;
    _Bool _shuttingDown;
    NSObject<PTVVideoSourceDelegate> *delegate;
    long long _badFrameCount;
    double _lastPTS;
}

+ (unsigned long long)getDataSourceWithCamera:(id)arg1 andIsHandheld:(_Bool)arg2;
@property double lastPTS; // @synthesize lastPTS=_lastPTS;
@property long long badFrameCount; // @synthesize badFrameCount=_badFrameCount;
@property _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)decompressedFrame:(struct __CVBuffer *)arg1 frameInfo:(CDStruct_a5be9c7f *)arg2;
- (void)hardwareDecoderUnavailable;
- (void)camera:(id)arg1 didUpdateSystemState:(id)arg2;
- (void)checkBadFrameCount;
- (void)onFrame;
- (void)camera:(id)arg1 didReceiveVideoData:(char *)arg2 length:(unsigned long long)arg3;
- (_Bool)audioPresent;
- (void)startVideoDecoding;
- (void)shutdown;
- (void)pauseCapture;
- (void)emptyPipelineQueue;
- (void)startCamera;
- (double)frameRate;
- (_Bool)hasDeviceAudio;
- (_Bool)acquireCamera;
- (void)dealloc;
- (void)releaseConnection;
- (id)initForSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
