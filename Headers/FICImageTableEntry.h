//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FICImageCache, FICImageTableChunk, NSMutableArray;

@interface FICImageTableEntry : NSObject
{
    FICImageTableChunk *_imageTableChunk;
    void *_bytes;
    unsigned long long _length;
    NSMutableArray *_deallocBlocks;
    long long _index;
    FICImageCache *imageCache;
}

+ (long long)metadataVersion;
@property(nonatomic) __weak FICImageCache *imageCache; // @synthesize imageCache;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) FICImageTableChunk *imageTableChunk; // @synthesize imageTableChunk=_imageTableChunk;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) void *bytes; // @synthesize bytes=_bytes;
- (void).cxx_destruct;
- (void)preheat;
- (void)flush;
- (CDStruct_2c0d991e *)_metadata;
- (void)dealloc;
- (void)executeBlockOnDealloc:(CDUnknownBlockType)arg1;
- (id)initWithImageTableChunk:(id)arg1 bytes:(void *)arg2 length:(unsigned long long)arg3;
@property(nonatomic) CDStruct_bd2f613f sourceImageUUIDBytes;
@property(nonatomic) CDStruct_bd2f613f entityUUIDBytes;
@property(readonly, nonatomic) unsigned long long imageLength;

@end

