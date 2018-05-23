//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNFoundMediaImage : NSObject
{
    NSString *_URLString;
    NSString *_stillImageURLString;
    unsigned long long _dataLength;
    struct CGSize _imageDimensions;
}

+ (id)primaryImageFromImages:(id)arg1;
+ (id)_fetchImageContainerForImage:(id)arg1 animated:(_Bool)arg2 withOptions:(id)arg3 firstFrameCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)fetchAnimatedGIFImageForImage:(id)arg1 withOptions:(id)arg2 firstFrameCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)fetchImageForImage:(id)arg1 withOptions:(id)arg2 firstFrameCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, copy, nonatomic) NSString *stillImageURLString; // @synthesize stillImageURLString=_stillImageURLString;
@property(readonly, copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1 stillImageURLString:(id)arg2 imageDimensions:(struct CGSize)arg3 dataLength:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

