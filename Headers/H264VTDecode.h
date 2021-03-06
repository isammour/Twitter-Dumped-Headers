//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/VideoStreamProcessor-Protocol.h>

@class NSString;
@protocol H264DecoderOutput;

@interface H264VTDecode : NSObject <VideoStreamProcessor>
{
    struct OpaqueVTDecompressionSession *_sessionRef;
    struct opaqueCMFormatDescription *_formatDesc;
    unsigned char sps_buffer[256];
    unsigned char pps_buffer[256];
    int pps_size;
    int sps_size;
    long long _fps;
    void *nalu_buf;
    void *au_buf;
    int au_size;
    int au_nal_count;
    int _income_frame_count;
    int _decoder_create_count;
    struct SPS _currentSPS;
    int _sps_w;
    int _sps_h;
    int _sps_fps;
    int _pic_slice_count;
    struct {
        int first_mb_in_slice;
        int slice_type;
        int frame_num;
    } _pic_slices[30];
    _Bool skip_current_frame;
    int last_decode_frame_index;
    int max_frame_index_plus_one;
    _Bool _enabled;
    _Bool _hardware_unavailable;
    _Bool _decoderInited;
    _Bool _dummyIPushed;
    int _frameInfoListCount;
    int _decodeErrorCount;
    id <H264DecoderOutput> _delegate;
    long long _encoderType;
    CDStruct_a5be9c7f *_frameInfoList;
    struct CGSize _videoSize;
}

@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) int decodeErrorCount; // @synthesize decodeErrorCount=_decodeErrorCount;
@property(nonatomic) _Bool dummyIPushed; // @synthesize dummyIPushed=_dummyIPushed;
@property(nonatomic) _Bool decoderInited; // @synthesize decoderInited=_decoderInited;
@property(nonatomic) int frameInfoListCount; // @synthesize frameInfoListCount=_frameInfoListCount;
@property(nonatomic) CDStruct_a5be9c7f *frameInfoList; // @synthesize frameInfoList=_frameInfoList;
@property(nonatomic) _Bool hardware_unavailable; // @synthesize hardware_unavailable=_hardware_unavailable;
@property(nonatomic) long long encoderType; // @synthesize encoderType=_encoderType;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <H264DecoderOutput> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)streamProcessorEnabled;
- (void)streamProcessorInfoChanged:(CDStruct_660e0d6e *)arg1;
- (_Bool)streamProcessorHandleFrameRaw:(CDStruct_a5be9c7f *)arg1;
- (_Bool)streamProcessorHandleFrame:(char *)arg1 size:(int)arg2;
- (int)streamProcessorType;
- (_Bool)verifyCurrentFrame:(int *)arg1;
- (void)sliceDecodeAdd:(char *)arg1 size:(int)arg2;
- (void)clear264VerifyContext;
- (void)safeReleaseDecodeSession;
- (void)dequeueAllFrames;
- (_Bool)decodeCompleteFrame:(CDStruct_a5be9c7f *)arg1 frameData:(char *)arg2;
- (int)decodeWork:(char *)arg1 Size:(int)arg2;
- (int)pushSampleBuffer:(char *)arg1 Size:(int)arg2 frameInfo:(CDStruct_a5be9c7f *)arg3;
- (void)saveDummyIframe;
- (int)loadDummyIframe;
- (int)decodeInit:(char *)arg1 Size:(int)arg2;
- (void)resetLater;
- (void)resetInDecodeThread;
- (void)dealloc;
- (id)init;
- (id)convertFromCVImageBuffer:(struct __CVBuffer *)arg1 savePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

