//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol LHLSPlayerClientDelegate><LHLSRenderDelegate, LHLSTimeHandler;

@protocol LHLSPlayerClient <NSObject>
@property _Bool wasProxyError;
@property(readonly) __weak id <LHLSTimeHandler> masterClock;
@property(readonly) double latency;
- (void)dispatchAtPTS:(double)arg1 block:(void (^)(void))arg2;
- (NSDictionary *)getStatistics;
- (void)setLocalQueueLength:(double)arg1;
- (void)shutdown;
- (void)connectToServer:(NSDictionary *)arg1 forURL:(NSString *)arg2 playVideo:(_Bool)arg3 downlinkJitterComponent:(double)arg4 minBufferLength:(double)arg5 maxBufferLength:(double)arg6 constantBufferLength:(double)arg7;
- (void)setDelegate:(id <LHLSPlayerClientDelegate><LHLSRenderDelegate>)arg1;

@optional
@property(readonly) double currentBitrate;
@property(readonly) double queueLength;
@property(readonly) double lastTransitTime;
@end

