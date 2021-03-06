//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMediaAssetUpload-Protocol.h>

@class NSData, NSString, TFNTwitterAccount, TFNTwitterMediaAsset, TFNTwitterMediaUploadConfiguration, TFSTimer, TNUTransactionMetrics;
@protocol TFNTwitterMediaAssetUploadDelegate, TFSTwitterAPICommandCancellable, TNUNetworkQualityProvider;

@interface TFNTwitterMediaAssetSegmentedUpload : NSObject <TFNTwitterMediaAssetUpload>
{
    id <TFSTwitterAPICommandCancellable> _cancellable;
    NSString *_mediaID;
    unsigned long long _state;
    struct _NSRange _uploadRange;
    unsigned long long _attemptsPerRequest;
    unsigned long long _attemptsPerUpload;
    unsigned long long _maxRetriesPerRequest;
    unsigned long long _totalInitPhaseRetries;
    unsigned long long _totalAppendPhaseRetries;
    unsigned long long _totalFinalizePhaseRetries;
    unsigned long long _totalSegmentsUploaded;
    unsigned long long _totalBytesUploaded;
    unsigned long long _totalStatusPolls;
    unsigned long long _startTime;
    TFNTwitterMediaUploadConfiguration *_configuration;
    TNUTransactionMetrics *_networkTransactionMetrics;
    float _progress;
    id <TFNTwitterMediaAssetUploadDelegate> _delegate;
    unsigned long long _status;
    TFNTwitterAccount *_account;
    TFNTwitterMediaAsset *_asset;
    NSData *_generatedData;
    long long _uploadSource;
    TFSTimer *_statusRequestDelayTimer;
    id <TNUNetworkQualityProvider> _networkQualityProvider;
}

+ (unsigned long long)videoSegmentSizeWithConfiguration:(id)arg1 networkQuality:(long long)arg2 networkStatus:(long long)arg3;
+ (unsigned long long)photoSegmentSizeWithConfiguration:(id)arg1 networkQuality:(long long)arg2 networkStatus:(long long)arg3;
+ (unsigned long long)defaultSegmentSizeForConfiguration:(id)arg1 mediaType:(long long)arg2 networkQuality:(long long)arg3;
@property(readonly, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider; // @synthesize networkQualityProvider=_networkQualityProvider;
@property(retain, nonatomic) TFSTimer *statusRequestDelayTimer; // @synthesize statusRequestDelayTimer=_statusRequestDelayTimer;
@property(nonatomic) long long uploadSource; // @synthesize uploadSource=_uploadSource;
@property(retain, nonatomic) NSData *generatedData; // @synthesize generatedData=_generatedData;
@property(retain, nonatomic) TFNTwitterMediaAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <TFNTwitterMediaAssetUploadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_invalidateStatusRequestDelayTimer;
- (unsigned long long)_minimumSegmentSizeForMediaType:(long long)arg1;
- (_Bool)_segmentSizeBackoffPolicyEnabledForMediaType:(long long)arg1;
- (id)_segmentedMediaUploadDetails;
- (id)_mediaUploadDetails;
- (void)_logNetworkTransactionMetricsEvent;
- (void)_endUploadCancelled:(_Bool)arg1 error:(id)arg2;
- (id)_mimeType:(long long)arg1;
- (_Bool)_uploadInProgress;
- (void)_handleProcessingProgress:(double)arg1;
- (void)_handleURLUploadProgress;
- (void)_handleUploadProgress:(double)arg1 forRange:(struct _NSRange)arg2;
- (void)_updateUploadRange:(_Bool)arg1;
- (void)_handleCreateMetadataResponseWithError:(id)arg1;
- (void)_handleUploadResponseForStatusPhase:(id)arg1 error:(id)arg2;
- (void)_handleUploadResponseForFinalizePhase:(id)arg1 error:(id)arg2;
- (void)_handleUploadResponseForAppendPhase:(id)arg1 error:(id)arg2;
- (void)_handleUploadResponseForInitPhase:(id)arg1 error:(id)arg2;
- (void)_createMetadata;
- (void)_statusUpload;
- (void)_finalizeUpload;
- (void)_appendUploadWithRange:(struct _NSRange)arg1;
- (void)_initUpload;
- (void)_resetUpload;
- (void)_startUpload;
- (void)cancel;
- (_Bool)start;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 configuration:(id)arg2 asset:(id)arg3 uploadSource:(long long)arg4 networkQualityProvider:(id)arg5 networkTransactionMetrics:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

