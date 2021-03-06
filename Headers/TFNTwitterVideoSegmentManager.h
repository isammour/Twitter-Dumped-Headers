//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNTwitterVideoSegmentWriterDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, TFNTwitterVideoSegmentWriter, TFSReferencedFile;
@protocol OS_dispatch_queue, TFNTwitterVideoSegmentManagerDelegate;

@interface TFNTwitterVideoSegmentManager : NSObject <TFNTwitterVideoSegmentWriterDelegate, NSCoding>
{
    _Bool _hasChanges;
    _Bool _useAudio;
    id <TFNTwitterVideoSegmentManagerDelegate> _delegate;
    NSURL *_movieDirectoryURL;
    long long _lockOrientation;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_segments;
    TFSReferencedFile *_referencedMovieDirectory;
    long long _currentDevicePosition;
    long long _currentVideoOrientation;
    long long _movieVideoOrientation;
    long long _savedMovieVideoOrientation;
    NSArray *_savedSegments;
    TFNTwitterVideoSegmentWriter *_segmentWriter;
    long long _status;
    CDStruct_1b6d18a9 _maxRecordingInterval;
    CDStruct_1b6d18a9 _minRecordingInterval;
    CDStruct_1b6d18a9 _totalRecordedSegmentsInterval;
}

@property(nonatomic) _Bool useAudio; // @synthesize useAudio=_useAudio;
@property(nonatomic) CDStruct_1b6d18a9 totalRecordedSegmentsInterval; // @synthesize totalRecordedSegmentsInterval=_totalRecordedSegmentsInterval;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) TFNTwitterVideoSegmentWriter *segmentWriter; // @synthesize segmentWriter=_segmentWriter;
@property(retain, nonatomic) NSArray *savedSegments; // @synthesize savedSegments=_savedSegments;
@property(nonatomic) long long savedMovieVideoOrientation; // @synthesize savedMovieVideoOrientation=_savedMovieVideoOrientation;
@property(nonatomic) long long movieVideoOrientation; // @synthesize movieVideoOrientation=_movieVideoOrientation;
@property(nonatomic) long long currentVideoOrientation; // @synthesize currentVideoOrientation=_currentVideoOrientation;
@property(nonatomic) long long currentDevicePosition; // @synthesize currentDevicePosition=_currentDevicePosition;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minRecordingInterval; // @synthesize minRecordingInterval=_minRecordingInterval;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxRecordingInterval; // @synthesize maxRecordingInterval=_maxRecordingInterval;
@property(readonly, nonatomic) TFSReferencedFile *referencedMovieDirectory; // @synthesize referencedMovieDirectory=_referencedMovieDirectory;
@property(readonly, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long lockOrientation; // @synthesize lockOrientation=_lockOrientation;
@property(readonly, nonatomic) NSURL *movieDirectoryURL; // @synthesize movieDirectoryURL=_movieDirectoryURL;
@property(nonatomic) __weak id <TFNTwitterVideoSegmentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_createMovieDirectory;
- (void)_setSegments:(id)arg1;
- (void)segmentWriter:(id)arg1 didRecordInterval:(CDStruct_1b6d18a9)arg2;
- (void)segmentWriter:(id)arg1 didFailWithError:(id)arg2;
- (void)segmentWriterDidStopRecording:(id)arg1;
- (void)segmentWriterWillStopRecording:(id)arg1;
- (void)segmentWriterDidStartRecording:(id)arg1;
- (void)segmentWriterWillStartRecording:(id)arg1;
- (void)didCaptureAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didCaptureVideoPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)enableAudio:(_Bool)arg1;
- (void)setVideoOrientation:(long long)arg1 devicePosition:(long long)arg2;
@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
- (void)rollback;
- (void)checkpoint;
- (void)exportMovieWithCompletion:(CDUnknownBlockType)arg1;
- (void)exportCompositionWithCompletion:(CDUnknownBlockType)arg1;
- (void)segmentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSegments:(id)arg1;
- (void)stopRecording;
- (void)startRecording;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxRecordingInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

