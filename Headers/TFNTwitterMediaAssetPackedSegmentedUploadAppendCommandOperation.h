//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSData, NSString, TFNTwitterMediaAssetPackedSegmentedUploadContext;
@protocol TFNTwitterMediaAssetPackedSegmentedUploadAppendCommandOperationDelegate, TFSTwitterAPICommandCancellable;

@interface TFNTwitterMediaAssetPackedSegmentedUploadAppendCommandOperation : TFSConcurrentOperation
{
    id <TFNTwitterMediaAssetPackedSegmentedUploadAppendCommandOperationDelegate> _delegate;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
    NSString *_mediaID;
    NSData *_data;
    unsigned long long _segmentIndex;
    unsigned long long _retryCount;
    id <TFSTwitterAPICommandCancellable> _commandOperation;
    struct _NSRange _segmentRange;
}

@property(retain) id <TFSTwitterAPICommandCancellable> commandOperation; // @synthesize commandOperation=_commandOperation;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) struct _NSRange segmentRange; // @synthesize segmentRange=_segmentRange;
@property(readonly, nonatomic) unsigned long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TFNTwitterMediaAssetPackedSegmentedUploadAppendCommandOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)_tfn_main_dispatchAsyncOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)_tfn_main_segmentedUploadAppendCommandDidAppendWithError:(id)arg1;
- (void)_tfn_main_segmentedUploadAppendCommandDidProgress:(float)arg1;
- (void)run;
- (id)initWithContext:(id)arg1 mediaID:(id)arg2 data:(id)arg3 segmentIndex:(unsigned long long)arg4 segmentRange:(struct _NSRange)arg5 retryCount:(unsigned long long)arg6;
- (id)init;

@end

