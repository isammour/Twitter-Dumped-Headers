//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TIPImageFileStoreRequest-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, UIImage;
@protocol TIPImageStoreRequestHydrater;

@interface TFNAccountImageStoreRequest : NSObject <TIPImageFileStoreRequest>
{
    NSURL *_imageURL;
    NSString *_imageIdentifier;
    NSString *_imageFilePath;
    NSString *_imageType;
    double _timeToLive;
    struct CGSize _imageDimensions;
}

@property(readonly, nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly, copy, nonatomic) NSString *imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, copy, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithUserID:(long long)arg1 imageURLString:(id)arg2 imageFilePath:(id)arg3 imageDimensions:(struct CGSize)arg4;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *animationFrameDurations;
@property(readonly, nonatomic) unsigned long long animationLoopCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDictionary *decoderConfigMap;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <TIPImageStoreRequestHydrater> hydrater;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) long long options;
@property(readonly) Class superclass;

@end

