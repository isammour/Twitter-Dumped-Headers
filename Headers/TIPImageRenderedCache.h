//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPImageCache-Protocol.h>
#import <TwitterImagePipeline/TIPInspectableCache-Protocol.h>
#import <TwitterImagePipeline/TIPLRUCacheDelegate-Protocol.h>

@class NSString, TIPLRUCache;

@interface TIPImageRenderedCache : NSObject <TIPLRUCacheDelegate, TIPImageCache, TIPInspectableCache>
{
    TIPLRUCache *_manifest;
    long long _atomicTotalCost;
}

@property long long atomicTotalCost; // @synthesize atomicTotalCost=_atomicTotalCost;
@property(readonly, nonatomic) TIPLRUCache *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;
- (void)inspect:(CDUnknownBlockType)arg1;
- (void)tip_cache:(id)arg1 didEvictEntry:(id)arg2;
- (void)clearImagesWithIdentifier:(id)arg1;
- (void)storeImageEntry:(id)arg1 transformerIdentifier:(id)arg2 sourceImageDimensions:(struct CGSize)arg3;
- (id)imageEntryWithIdentifier:(id)arg1 transformerIdentifier:(id)arg2 targetDimensions:(struct CGSize)arg3 targetContentMode:(long long)arg4 sourceImageDimensions:(out struct CGSize *)arg5;
- (void)clearAllImages:(CDUnknownBlockType)arg1;
- (void)_tip_addByteCount:(unsigned long long)arg1 removeByteCount:(unsigned long long)arg2;
- (void)_tip_didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) long long cacheType;
@property(readonly, nonatomic) unsigned long long totalCost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

