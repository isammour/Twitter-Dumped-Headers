//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVPublishParams : NSObject
{
    int _audioBitrate;
    int _framerate;
    int _gopLengthInFrames;
    int _height;
    int _width;
    int _minVideoBitrate;
    int _maxVideoBitrate;
    double _videoBitrateRatio;
}

@property(readonly, nonatomic) double videoBitrateRatio; // @synthesize videoBitrateRatio=_videoBitrateRatio;
@property(readonly, nonatomic) int maxVideoBitrate; // @synthesize maxVideoBitrate=_maxVideoBitrate;
@property(readonly, nonatomic) int minVideoBitrate; // @synthesize minVideoBitrate=_minVideoBitrate;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int gopLengthInFrames; // @synthesize gopLengthInFrames=_gopLengthInFrames;
@property(readonly, nonatomic) int framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
- (int)videoBitrateForBandwidth:(int)arg1;
- (id)initWithDict:(id)arg1;

@end

