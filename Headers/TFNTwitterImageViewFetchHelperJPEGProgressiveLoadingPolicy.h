//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TIPImageFetchProgressiveLoadingPolicy-Protocol.h>

@class NSString, TFNTwitterImageViewFetchHelper;

@interface TFNTwitterImageViewFetchHelperJPEGProgressiveLoadingPolicy : NSObject <TIPImageFetchProgressiveLoadingPolicy>
{
    TFNTwitterImageViewFetchHelper *_owner;
}

@property(readonly, nonatomic) __weak TFNTwitterImageViewFetchHelper *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (long long)tip_imageFetchOperation:(id)arg1 behaviorForProgress:(long long)arg2 frameCount:(unsigned long long)arg3 progress:(float)arg4 type:(id)arg5 dimensions:(struct CGSize)arg6 renderCount:(unsigned long long)arg7;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

