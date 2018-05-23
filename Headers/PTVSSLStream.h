//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol LHLSSocketDelegate, OS_dispatch_queue, PTVModelSSLPinningDelegate;

@interface PTVSSLStream : NSObject <NSStreamDelegate>
{
    id <LHLSSocketDelegate> _delegate;
    id <PTVModelSSLPinningDelegate> _sslPinningDelegate;
    id _weakSelf;
    NSInputStream *_input;
    NSOutputStream *_output;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_sendQueue;
    long long _bytesInQueue;
    long long _bytesSent;
    long long _headSent;
    _Bool _isValidated;
    _Bool _openCompleted;
    _Bool _streamClosed;
    NSString *_host;
    int _port;
    _Bool _ssl;
    void *_isOnQueue;
    CDUnknownBlockType _onDrained;
}

- (void).cxx_destruct;
- (void)shutdown;
- (void)doShutdown;
- (long long)getQueueLength;
- (void)getAndResetBytesSent:(long long *)arg1 queueLength:(long long *)arg2;
- (void)send:(id)arg1;
- (void)onOpen:(id)arg1;
- (void)onRead;
- (void)tryWrite;
- (void)onQueuedEvent:(unsigned long long)arg1 stream:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)makeConnection;
- (void)dealloc;
- (void)setDrainEvent:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 sslPinningDelegate:(id)arg2 connectTo:(id)arg3 remotePort:(id)arg4 ssl:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
