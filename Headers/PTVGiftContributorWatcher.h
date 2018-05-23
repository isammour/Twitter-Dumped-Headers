//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVBroadcastControllerObserver-Protocol.h>
#import <PeriscopeViewer/PTVChatControllerObserver-Protocol.h>

@class NSArray, NSCache, NSMutableArray, NSMutableSet, NSSet, NSString, PTVBroadcastController, PTVPaymanService, PTVWatchBroadcastAnalyticsManager, PTVWeakSet;

@interface PTVGiftContributorWatcher : NSObject <PTVChatControllerObserver, PTVBroadcastControllerObserver>
{
    PTVPaymanService *_paymanService;
    PTVGiftContributorWatcher *_weakSelf;
    NSMutableArray *_latestContributorList;
    NSMutableSet *_contributingUserIds;
    PTVWeakSet *_observers;
    _Bool _watchingContributors;
    double _refreshInterval;
    NSCache *_userCache;
    PTVWatchBroadcastAnalyticsManager *_watchBroadcastAnalyticsManager;
    long long _starTotal;
    PTVBroadcastController *_broadcastController;
}

@property(nonatomic) _Bool watchingContributors; // @synthesize watchingContributors=_watchingContributors;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) long long starTotal; // @synthesize starTotal=_starTotal;
@property(retain, nonatomic) PTVWatchBroadcastAnalyticsManager *watchBroadcastAnalyticsManager; // @synthesize watchBroadcastAnalyticsManager=_watchBroadcastAnalyticsManager;
@property(readonly, nonatomic) NSCache *userCache; // @synthesize userCache=_userCache;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
- (void).cxx_destruct;
- (void)stopWatchingContributors;
- (void)didLoadUsers:(id)arg1 forContributors:(id)arg2;
- (void)loadUsersForContributors:(id)arg1;
- (void)loadUsersWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didGetLatestContributorList:(id)arg1;
- (void)didUpdateContributors:(id)arg1;
- (void)fetchStarTotalIfNeeded;
- (void)startWatchingContributors;
- (void)updateContributorsIfWatching;
- (void)updateContributorsForced:(_Bool)arg1;
- (void)sortContributors;
- (void)updateContibutionsForUserID:(id)arg1 participantIndex:(int)arg2 gift:(id)arg3;
- (void)updateContibutionsForMessageIfNeeded:(id)arg1;
@property(readonly, nonatomic) NSSet *contributingUserIds;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)chatController;
- (id)loggedInUser;
- (id)initWithBroadcastController:(id)arg1;
@property(readonly, nonatomic) NSArray *allContributors;
- (void)chatControllerConnectionDidFail:(id)arg1;
- (void)chatController:(id)arg1 didSubscribeWithSuccess:(_Bool)arg2;
- (void)chatControllerDidJoinChatRoom:(id)arg1;
- (void)chatController:(id)arg1 userDidJoinChat:(id)arg2;
- (void)chatController:(id)arg1 didReceiveQueuedMessage:(id)arg2 deliveryQueueSize:(unsigned long long)arg3;
- (void)chatController:(id)arg1 didSendMessage:(id)arg2;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

