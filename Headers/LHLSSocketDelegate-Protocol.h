//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class LHLSSocket, NSData;

@protocol LHLSSocketDelegate <NSObject>
- (void)socket:(LHLSSocket *)arg1 gotData:(NSData *)arg2 from:(NSData *)arg3;
- (void)socketClosed:(LHLSSocket *)arg1;
- (void)socketBound:(LHLSSocket *)arg1 error:(long long)arg2;
- (void)socketConnected:(LHLSSocket *)arg1 error:(long long)arg2;
@end

