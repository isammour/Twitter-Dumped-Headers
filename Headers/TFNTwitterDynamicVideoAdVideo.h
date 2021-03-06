//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterAVPlayerControllerVideo.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSNumber, NSString, NSURL, TFNTwitterPromotedContent;

@interface TFNTwitterDynamicVideoAdVideo : TFNTwitterAVPlayerControllerVideo <TFSPlistSerialization>
{
    long long _type;
    NSString *_videoID;
    NSURL *_assetURL;
    NSString *_contentType;
    NSNumber *_ownerId;
    NSString *_ownerName;
    NSString *_ctaUrl;
    unsigned long long _ctaType;
    TFNTwitterPromotedContent *_promotedContent;
}

- (void)setPromotedContent:(id)arg1;
- (id)promotedContent;
- (void)setCtaType:(unsigned long long)arg1;
- (unsigned long long)ctaType;
- (void)setCtaUrl:(id)arg1;
- (id)ctaUrl;
@property(readonly, copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
- (void)setOwnerId:(id)arg1;
- (id)ownerId;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setAssetURL:(id)arg1;
- (id)assetURL;
- (void)setVideoID:(id)arg1;
- (id)videoID;
- (void)setType:(long long)arg1;
- (long long)type;
- (void).cxx_destruct;
- (id)tavCTAInfo;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithJSONDictionary:(id)arg1 promotedContent:(id)arg2;
- (id)initWithAssetURL:(id)arg1 videoID:(id)arg2 contentType:(id)arg3 ownerID:(id)arg4 ownerName:(id)arg5 promotedContent:(id)arg6 ctaType:(unsigned long long)arg7 ctaURL:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

