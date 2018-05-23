//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterStatus;

@interface TFNTwitterMediaPreviewInfo : NSObject
{
    TFNTwitterStatus *_status;
    TFNTwitterStatus *_outerStatus;
    unsigned long long _mediaIndex;
}

+ (id)_tfn_ownedMediaPreviewInfoListWithStatus:(id)arg1 outerStatus:(id)arg2;
+ (id)_tfn_mediaPreviewInfoForStatus:(id)arg1 outerStatus:(id)arg2 options:(unsigned long long)arg3;
+ (id)mediaPreviewInfoListWithStatuses:(id)arg1 includeDummyStatuses:(_Bool)arg2 options:(unsigned long long)arg3;
+ (id)mediaPreviewInfoListWithStatuses:(id)arg1 options:(unsigned long long)arg2;
+ (id)mediaPreviewInfoListWithStatuses:(id)arg1;
+ (id)mediaPreviewInfoListWithStatus:(id)arg1;
@property(readonly, nonatomic) unsigned long long mediaIndex; // @synthesize mediaIndex=_mediaIndex;
@property(readonly, nonatomic) TFNTwitterStatus *outerStatus; // @synthesize outerStatus=_outerStatus;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)altText;
- (id)entityURL;
- (struct CGSize)imageDimensions;
- (id)imageURLString;
- (id)_mediaInfo;
@property(readonly, nonatomic) TFNTwitterStatus *containerStatus;
- (id)initWithStatus:(id)arg1 outerStatus:(id)arg2 mediaIndex:(long long)arg3;

@end

