//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/NSObject-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol TIPImagePipelineInspectionResultEntry <NSObject>
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) unsigned long long bytesUsed;
@property(readonly, nonatomic) struct CGSize dimensions;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

