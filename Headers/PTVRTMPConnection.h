//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/LHLSSocketDelegate-Protocol.h>

@class NSData, NSDate, NSDictionary, NSMutableArray, NSString, PTVRTMPStreamSet, PTVSSLStream;

@interface PTVRTMPConnection : NSObject <LHLSSocketDelegate>
{
    NSDictionary *_params;
    PTVSSLStream *_socket;
    int _state;
    NSDate *_timebase;
    NSData *_handshake;
    long long _headConsumed;
    NSMutableArray *_receivedQueue;
    PTVRTMPStreamSet *_rtmp;
    int _bytesNext;
    unsigned int _peerWindowSize;
    unsigned int _receivedFromPeer;
    unsigned int _lastAckSentAt;
    int _lastTransaction;
    CDUnknownBlockType _onMessage;
    CDUnknownBlockType _onConnect;
    int _portInUse;
    NSString *_fmsVer;
    _Bool _useTLS;
    _Bool _usePSP;
    NSDate *_lastMessage;
    _Bool _draining;
    _Bool _wasProxyError;
    int mediaStream;
    unsigned int _windowSize;
    unsigned int _lastAckReceived;
    unsigned int _totalSent;
    NSString *target;
}

@property _Bool wasProxyError; // @synthesize wasProxyError=_wasProxyError;
@property unsigned int totalSent; // @synthesize totalSent=_totalSent;
@property unsigned int lastAckReceived; // @synthesize lastAckReceived=_lastAckReceived;
@property unsigned int windowSize; // @synthesize windowSize=_windowSize;
@property(retain) NSString *target; // @synthesize target;
@property int mediaStream; // @synthesize mediaStream;
- (void).cxx_destruct;
- (void)getAndResetBytesSent:(long long *)arg1 dropped:(long long *)arg2 queueLength:(long long *)arg3;
- (void)processPacket:(id)arg1;
- (void)socket:(id)arg1 gotData:(id)arg2 from:(id)arg3;
- (void)socketClosed:(id)arg1;
- (void)socketBound:(id)arg1 error:(long long)arg2;
- (void)socketConnected:(id)arg1 error:(long long)arg2;
- (void)onMessage:(id)arg1;
- (void)sendCommand:(id)arg1 params:(id)arg2;
- (_Bool)sendMessage:(id)arg1;
- (void)setChunkSize:(int)arg1;
- (void)setBufferLength:(int)arg1 forStream:(int)arg2;
- (int)timeInMS;
- (id)getReceivedLength:(int)arg1;
- (void)appendData:(id)arg1;
- (void)sendConnect;
- (void)sendInitialHandshake;
- (void)drainQueue:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (void)connectToServer:(id)arg1 withBlock:(CDUnknownBlockType)arg2 onConnect:(CDUnknownBlockType)arg3 sslPinningDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

