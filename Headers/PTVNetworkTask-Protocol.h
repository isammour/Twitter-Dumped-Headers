//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSData, NSError, NSURL;

@protocol PTVNetworkTask <NSObject>
- (void)onRedirection:(NSURL *)arg1;
- (void)onError:(NSError *)arg1;
- (void)onCancel;
- (void)onEndOfStream;
- (void)onData:(NSData *)arg1;
@end
