//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterBatchFetchManager, TFNTwitterDynamicVideoAd;

@interface TFNTwitterDynamicVideoAdManager : NSObject
{
    _Bool _forceDynamicAd;
    long long _adsBatchFetchSize;
    TFNTwitterBatchFetchManager *_batchFetchManager;
    TFNTwitterDynamicVideoAd *_triggerAd;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool forceDynamicAd; // @synthesize forceDynamicAd=_forceDynamicAd;
@property(retain, nonatomic) TFNTwitterDynamicVideoAd *triggerAd; // @synthesize triggerAd=_triggerAd;
@property(readonly, nonatomic) TFNTwitterBatchFetchManager *batchFetchManager; // @synthesize batchFetchManager=_batchFetchManager;
@property(readonly, nonatomic) long long adsBatchFetchSize; // @synthesize adsBatchFetchSize=_adsBatchFetchSize;
- (void).cxx_destruct;
- (_Bool)hasAdForVideoAdsTweet:(id)arg1;
- (_Bool)adParamShouldAlwaysGetAnAd:(id)arg1 configuration:(id)arg2;
- (void)scribeMissingAdsForResponse:(id)arg1 account:(id)arg2 configuration:(id)arg3;
- (void)handleDynamicAdsAPIResponseError:(id)arg1 account:(id)arg2;
- (id)buildResponseItemsDictionaryWithRequestedAdParams:(id)arg1 videoAdsArray:(id)arg2 passthroughArray:(id)arg3;
- (void)twitterAPIGetDynamicAdsWithAccount:(id)arg1 adRequestParams:(id)arg2 triggerAd:(id)arg3 configuration:(id)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (void)requestDynamicAdsWithAccount:(id)arg1 adRequestParams:(id)arg2 triggerAd:(id)arg3 configuration:(id)arg4;
- (id)adRequestParamFromStatus:(id)arg1;
- (_Bool)dynamicAdEnabledInStatus:(id)arg1 configuration:(id)arg2;
- (id)dynamicAdEnabledStatusesFromStatuses:(id)arg1 configuration:(id)arg2;
- (void)prefetchDynamicAdsForVideoStatusesIfNeeded:(id)arg1 withAccount:(id)arg2 configuration:(id)arg3;
- (void)fetchAdForStatusID:(id)arg1 impressionID:(id)arg2 liveEventID:(id)arg3 account:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)invalidateCache;
- (void)didShowDynamicAd:(id)arg1 withAccount:(id)arg2;
- (id)init;

@end
