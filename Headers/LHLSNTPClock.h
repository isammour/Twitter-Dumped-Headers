//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/LHLSSocketDelegate-Protocol.h>

@class LHLSSocket, NSDate, NSString;

@interface LHLSNTPClock : NSObject <LHLSSocketDelegate>
{
    double _clockOffset;
    NSDate *_lastFetched;
    double _sentTime;
    LHLSSocket *_socket;
}

+ (id)date;
+ (id)clock;
- (void).cxx_destruct;
- (void)socket:(id)arg1 gotData:(id)arg2 from:(id)arg3;
- (void)socketClosed:(id)arg1;
- (void)socketBound:(id)arg1 error:(long long)arg2;
- (void)sendRequest;
- (void)socketConnected:(id)arg1 error:(long long)arg2;
- (void)updateTime;
@property(readonly) NSDate *now;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

