//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFNTwitterMediaAssetPackedSegmentedUploadScribeValueDependency-Protocol.h>

@class TFNTwitterMediaAssetPackedSegmentedUploadContext, TFNTwitterMediaAssetPackedSegmentedUploadScribeValue;

@interface TFNTwitterMediaAssetPackedSegmentedUploadEndNetworkTransactionMetricsOperation : TFSDependentConcurrentOperation <TFNTwitterMediaAssetPackedSegmentedUploadScribeValueDependency>
{
    TFNTwitterMediaAssetPackedSegmentedUploadScribeValue *_scribeValue;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
}

@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property(copy) TFNTwitterMediaAssetPackedSegmentedUploadScribeValue *scribeValue; // @synthesize scribeValue=_scribeValue;
- (void).cxx_destruct;
- (id)_tfn_main_segmentedMediaUploadDetails;
- (id)_tfn_main_mediaUploadDetails;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

