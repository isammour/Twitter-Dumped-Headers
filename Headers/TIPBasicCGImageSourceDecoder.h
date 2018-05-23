//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPImageDecoder-Protocol.h>

@class NSString;

@interface TIPBasicCGImageSourceDecoder : NSObject <TIPImageDecoder>
{
    NSString *_UTType;
}

@property(readonly, copy, nonatomic) NSString *UTType; // @synthesize UTType=_UTType;
- (void).cxx_destruct;
- (id)tip_decodeImageWithData:(id)arg1 config:(id)arg2;
- (_Bool)tip_supportsProgressiveDecoding;
- (long long)tip_finalizeDecoding:(id)arg1;
- (id)tip_renderImage:(id)arg1 mode:(long long)arg2;
- (long long)tip_append:(id)arg1 data:(id)arg2;
- (id)tip_initiateDecoding:(id)arg1 expectedDataLength:(unsigned long long)arg2 buffer:(id)arg3;
- (long long)tip_detectDecodableData:(id)arg1 earlyGuessImageType:(id)arg2;
- (id)initWithUTType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
