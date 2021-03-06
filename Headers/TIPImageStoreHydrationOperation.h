//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPDisabledExternalMutabilityOperation.h>

@class NSError, TIPImagePipeline;
@protocol TIPImageStoreRequest, TIPImageStoreRequestHydrater;

@interface TIPImageStoreHydrationOperation : TIPDisabledExternalMutabilityOperation
{
    id <TIPImageStoreRequest> _request;
    TIPImagePipeline *_pipeline;
    id <TIPImageStoreRequestHydrater> _hydrater;
    // Error parsing type: AB, name: _isFinished
    // Error parsing type: AB, name: _isExecuting
    // Error parsing type: AB, name: _didStart
    NSError *_error;
    id <TIPImageStoreRequest> _hydratedRequest;
}

@property(readonly, nonatomic) id <TIPImageStoreRequest> hydratedRequest; // @synthesize hydratedRequest=_hydratedRequest;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)_tip_complete:(id)arg1 error:(id)arg2;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (id)initWithRequest:(id)arg1 pipeline:(id)arg2 hydrater:(id)arg3;

@end

