//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterMultiResolutionImageSourceRequestContext : NSObject
{
    CDUnknownBlockType _previewImageCompletion;
    CDUnknownBlockType _finalImageCompletion;
    struct CGSize _expectedDimensions;
}

@property(nonatomic) struct CGSize expectedDimensions; // @synthesize expectedDimensions=_expectedDimensions;
@property(copy, nonatomic) CDUnknownBlockType finalImageCompletion; // @synthesize finalImageCompletion=_finalImageCompletion;
@property(copy, nonatomic) CDUnknownBlockType previewImageCompletion; // @synthesize previewImageCompletion=_previewImageCompletion;
- (void).cxx_destruct;

@end

