//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PTVSAudioCaptureDelegate;

@interface PTVSAudioCapture : NSObject
{
    struct AudioStreamBasicDescription _asbdAAC;
    struct OpaqueAudioQueue *_audioQueue;
    int _audioFrequency;
    NSObject<PTVSAudioCaptureDelegate> *delegate;
}

@property(retain) NSObject<PTVSAudioCaptureDelegate> *delegate; // @synthesize delegate;
@property int audioFrequency; // @synthesize audioFrequency=_audioFrequency;
- (void).cxx_destruct;
@property(readonly) _Bool isRunning;
- (void)onInputCallback:(struct AudioQueueBuffer *)arg1 time:(const struct AudioTimeStamp *)arg2 packets:(const struct AudioStreamPacketDescription *)arg3 count:(unsigned int)arg4;
- (void)shutdown;
- (void)dealloc;
- (void)startRecording;
- (id)init;

@end

