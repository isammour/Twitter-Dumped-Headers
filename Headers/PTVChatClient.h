//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVChatConnectionDelegate-Protocol.h>

@class NSString, NSURLSession, PTVChatAccessPoint, PTVChatConnection;
@protocol OS_dispatch_queue, OS_dispatch_source, PTVChatClientDelegate;

@interface PTVChatClient : NSObject <PTVChatConnectionDelegate>
{
    unsigned long long _flags;
    PTVChatAccessPoint *_accessPoint;
    NSURLSession *_session;
    NSString *_currentRoom;
    NSString *_historyEndpoint;
    NSObject<OS_dispatch_queue> *_outgoingQueue;
    _Bool _isOutgoingQueueSuspended;
    NSObject<OS_dispatch_source> *_idleTimer;
    _Bool _isIdleTimerSuspended;
    _Bool _connecting;
    _Bool _killed;
    id <PTVChatClientDelegate> _delegate;
    unsigned long long _numReceived;
    unsigned long long _numSent;
    PTVChatConnection *_conn;
}

+ (id)_newSession;
@property(retain, nonatomic) PTVChatConnection *conn; // @synthesize conn=_conn;
@property(nonatomic) unsigned long long numSent; // @synthesize numSent=_numSent;
@property(nonatomic) unsigned long long numReceived; // @synthesize numReceived=_numReceived;
@property(nonatomic) __weak id <PTVChatClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addLogEntry:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)didSendMessage:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)_startIdleTimer;
- (void)didConnect;
- (void)dealloc;
- (void)historySince:(double)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)rosterForRoom:(id)arg1;
- (void)sendMessage:(id)arg1 language:(id)arg2;
- (void)leaveRoom:(id)arg1;
- (void)joinRoom:(id)arg1;
- (void)_queueWireMessage:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)_queueControlMessage:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)_queueChatMessage:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)kill;
- (void)connect;
- (id)initWithAccessPoint:(id)arg1 flags:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

