//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface NOZCompressResult : NSObject
{
    _Bool _didSucceed;
    NSString *_destinationPath;
    NSError *_operationError;
    double _duration;
    long long _uncompressedSize;
    long long _compressedSize;
}

@property(nonatomic) long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property(nonatomic) long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (void).cxx_destruct;
- (id)description;
- (float)compressionRatio;

@end

