//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIPImageCacheEntry;

@interface TIPRenderedCacheItem : NSObject
{
    NSString *_transformerIdentifier;
    TIPImageCacheEntry *_entry;
    struct CGSize _sourceImageDimensions;
}

@property(readonly, nonatomic) TIPImageCacheEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) struct CGSize sourceImageDimensions; // @synthesize sourceImageDimensions=_sourceImageDimensions;
@property(readonly, copy, nonatomic) NSString *transformerIdentifier; // @synthesize transformerIdentifier=_transformerIdentifier;
- (void).cxx_destruct;
- (id)initWithEntry:(id)arg1 transformerIdentifier:(id)arg2 sourceImageDimensions:(struct CGSize)arg3;

@end

