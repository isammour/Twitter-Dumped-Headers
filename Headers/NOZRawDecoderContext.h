//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ZipUtilities/NOZDecoderContext-Protocol.h>

@class NSString;

@interface NOZRawDecoderContext : NSObject <NOZDecoderContext>
{
    _Bool _hasFinished;
    CDUnknownBlockType _flushCallback;
}

@property(nonatomic) _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property(copy, nonatomic) CDUnknownBlockType flushCallback; // @synthesize flushCallback=_flushCallback;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

