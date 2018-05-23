//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSObject, NSString, TFNTwitterMediaAssetPackedSegmentedUploadContext, TFSTimer;
@protocol OS_dispatch_queue, TFNTwitterMediaAssetPackedSegmentedUploadStatusCommandOperationDelegate, TFSTwitterAPICommandCancellable;

@interface TFNTwitterMediaAssetPackedSegmentedUploadStatusCommandOperation : TFSConcurrentOperation
{
    id <TFNTwitterMediaAssetPackedSegmentedUploadStatusCommandOperationDelegate> _delegate;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
    NSString *_mediaID;
    double _delay;
    NSObject<OS_dispatch_queue> *_taskQueue;
    id <TFSTwitterAPICommandCancellable> _commandOperation;
    TFSTimer *_delayTimer;
}

@property(retain, nonatomic) TFSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) id <TFSTwitterAPICommandCancellable> commandOperation; // @synthesize commandOperation=_commandOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TFNTwitterMediaAssetPackedSegmentedUploadStatusCommandOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tfn_task_cancel;
- (void)cancel;
- (void)_tfn_main_segmentedUploadStatusCommandDidCompleteWithMediaInformation:(id)arg1 error:(id)arg2;
- (void)_tfn_task_startCommand;
- (void)_tfn_task_invalidateTimer;
- (void)_tfn_task_delayTimerDidFire:(id)arg1;
- (void)_tfn_task_scheduleStartCommand;
- (void)run;
- (void)dealloc;
- (id)initWithContext:(id)arg1 mediaID:(id)arg2 delay:(double)arg3;
- (id)init;

@end
