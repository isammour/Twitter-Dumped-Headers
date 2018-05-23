//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TFSTimer;
@protocol OS_dispatch_queue;

@interface TFNTwitterGetBroadcastManager : NSObject
{
    NSMutableDictionary *_ongoingCommands;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_refreshRequests;
    NSMutableDictionary *_refreshObserverCount;
    TFSTimer *_timer;
    unsigned long long _elapsedTicks;
}

+ (id)sharedManager;
@property(nonatomic) unsigned long long elapsedTicks; // @synthesize elapsedTicks=_elapsedTicks;
@property(retain, nonatomic) TFSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *refreshObserverCount; // @synthesize refreshObserverCount=_refreshObserverCount;
@property(retain, nonatomic) NSMutableDictionary *refreshRequests; // @synthesize refreshRequests=_refreshRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSMutableDictionary *ongoingCommands; // @synthesize ongoingCommands=_ongoingCommands;
- (void).cxx_destruct;
- (void)_tfn_appWillEnterForeground:(id)arg1;
- (void)_tfn_appDidEnterBackground:(id)arg1;
- (void)_tfn_activeAccountDidChange:(id)arg1;
- (void)_tfn_disposeTimer;
- (void)_tfn_createAndScheduleTimerIfNil;
- (void)_tfn_didReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_tfn_cancelCommandForID:(id)arg1;
- (_Bool)_tfn_isCommandOngoing:(id)arg1;
- (void)_tfn_addCommand:(id)arg1 withID:(id)arg2;
- (id)_tfn_requestUpdateWithBroadcastIDs:(id)arg1 accountID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_tfn_dispatchPeriodicRequestForBroadcastIDs:(id)arg1 accountID:(id)arg2;
- (void)_tfn_refreshRequests:(id)arg1;
- (void)getBroadcastForBroadcastIDOrShareToken:(id)arg1 accountID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterForPeriodicUpdatesForIdentifier:(id)arg1;
- (id)registerForPeriodicUpdatesForInterval:(double)arg1 broadcastID:(id)arg2 account:(id)arg3 fireImmediately:(_Bool)arg4;
- (void)_tfn_cancelAllCommands;
- (void)dealloc;
- (id)init;

@end

