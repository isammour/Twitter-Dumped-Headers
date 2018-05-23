//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPImageFetchDelegate-Protocol.h>

@class NSString;

@interface TIPSimpleImageFetchDelegate : NSObject <TIPImageFetchDelegate>
{
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)_tip_internal_complete:(id)arg1 error:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

