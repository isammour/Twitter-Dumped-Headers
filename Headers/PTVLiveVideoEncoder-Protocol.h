//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSData, NSDictionary;
@protocol PTVAVEncoderDelegate;

@protocol PTVLiveVideoEncoder <NSObject>
@property(nonatomic) __weak id <PTVAVEncoderDelegate> delegate;
- (void)signalSourceChange;
- (void)requestKeyframe;
- (void)setBlank:(_Bool)arg1;
- (void)setMetadata:(NSDictionary *)arg1 immediate:(_Bool)arg2;
- (struct __CVPixelBufferPool *)bufferPool;
- (void)shutdown;
- (NSData *)getConfigData;
- (void)encodeBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)encodeWithBlock:(int (^)(NSArray *, double, struct opaqueCMSampleBuffer *))arg1 onParams:(int (^)(NSData *))arg2;
- (void)setSettings:(NSDictionary *)arg1;
@end

