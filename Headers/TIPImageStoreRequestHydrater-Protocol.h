//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TIPImagePipeline;
@protocol TIPImageStoreRequest;

@protocol TIPImageStoreRequestHydrater <NSObject>
- (void)tip_hydrateImageStoreRequest:(id <TIPImageStoreRequest>)arg1 imagePipeline:(TIPImagePipeline *)arg2 completion:(void (^)(id <TIPImageStoreRequest>, NSError *))arg3;
@end

