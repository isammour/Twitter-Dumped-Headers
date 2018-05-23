//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterCalculatedMediaRenderLayout : NSObject
{
    struct CGRect _boundingArea;
    struct CGRect _mediaArea;
    struct CGRect _focusArea;
}

@property(nonatomic) struct CGRect focusArea; // @synthesize focusArea=_focusArea;
@property(nonatomic) struct CGRect mediaArea; // @synthesize mediaArea=_mediaArea;
@property(nonatomic) struct CGRect boundingArea; // @synthesize boundingArea=_boundingArea;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)focusAreaFullyCoversDisplaySize:(struct CGSize)arg1;
- (id)initWithBoundingArea:(struct CGRect)arg1 mediaArea:(struct CGRect)arg2 focusArea:(struct CGRect)arg3;

@end

