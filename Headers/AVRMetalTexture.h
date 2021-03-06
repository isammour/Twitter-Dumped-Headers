//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVRMetalTexture : NSObject
{
    _Bool _updated;
    NSArray *_planes;
    long long _format;
    struct __CVBuffer *_textureStorageY;
    struct __CVBuffer *_textureStorageUV;
    struct __CVBuffer *_textureStorageRGB;
    struct CGSize _size;
}

@property(nonatomic) struct __CVBuffer *textureStorageRGB; // @synthesize textureStorageRGB=_textureStorageRGB;
@property(nonatomic) struct __CVBuffer *textureStorageUV; // @synthesize textureStorageUV=_textureStorageUV;
@property(nonatomic) struct __CVBuffer *textureStorageY; // @synthesize textureStorageY=_textureStorageY;
@property(nonatomic) _Bool updated; // @synthesize updated=_updated;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
@property(readonly, nonatomic) NSArray *planes; // @synthesize planes=_planes;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releasePlanes;
- (void)acquirePlanes;
- (id)initWithSize:(struct CGSize)arg1 lumaTexture:(struct __CVBuffer *)arg2 chromaTexture:(struct __CVBuffer *)arg3;
- (id)initWithSize:(struct CGSize)arg1 superLumaTexture:(id)arg2 chromaTexture:(struct __CVBuffer *)arg3;
- (id)initWithSize:(struct CGSize)arg1 rgbTexture:(struct __CVBuffer *)arg2;

@end

