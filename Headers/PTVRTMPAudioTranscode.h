//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PTVAACDecoder, PTVAACEncoder;

@interface PTVRTMPAudioTranscode : NSObject
{
    struct AudioStreamBasicDescription _decodedDescription;
    struct opaqueCMFormatDescription *_decodedFormat;
    PTVAACDecoder *_decoder;
    PTVAACEncoder *_encoder;
}

+ (id)createTranscoderForConfig:(id)arg1 frequency:(int)arg2 output:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)getOutputConfig;
- (void)shutdown;
- (void)setRate:(int)arg1;
- (void)encode:(id)arg1 time:(double)arg2;
- (void)transcode:(id)arg1 time:(double)arg2;
- (id)initWithConfig:(id)arg1 frequency:(int)arg2 output:(CDUnknownBlockType)arg3;

@end
