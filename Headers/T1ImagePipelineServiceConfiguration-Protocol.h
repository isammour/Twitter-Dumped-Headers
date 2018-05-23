//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol TIPImagePipelineObserver;

@protocol T1ImagePipelineServiceConfiguration
@property(nonatomic, getter=isClearMemoryCachesOnApplicationBackgroundEnabled) _Bool clearMemoryCachesOnApplicationBackgroundEnabled;
@property(nonatomic) _Bool serializeCGContextAccess;
@property long long maxConcurrentImagePipelineDownloadCount;
@property long long maxRatioSizeOfCacheEntry;
@property long long maxBytesForAllDiskCaches;
@property long long maxBytesForAllMemoryCaches;
@property long long maxBytesForAllRenderedCaches;
- (void)addImagePipelineObserver:(id <TIPImagePipelineObserver>)arg1;
@end

