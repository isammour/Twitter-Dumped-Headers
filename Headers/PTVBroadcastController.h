//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVChatControllerObserver-Protocol.h>
#import <PeriscopeViewer/PTVUserModelControllerDelegate-Protocol.h>

@class NSDate, NSString, PTVBroadcast, PTVBroadcastThumbnailManager, PTVChatController, PTVMergeParticipantUser, PTVPlaybackPoint, PTVTwitterAuthenticationModel, PTVUserModelController, PTVVideoPosition, PTVWeakSet;
@protocol PTVBroadcastControllerDelegate, PTVLoggedInUserProtocol, PTVTwitterIntegrationDelegate;

@interface PTVBroadcastController : NSObject <PTVUserModelControllerDelegate, PTVChatControllerObserver>
{
    PTVBroadcastController *_weakSelf;
    PTVWeakSet *_observers;
    PTVUserModelController *_loadBroadcasterModel;
    _Bool _isPublishing;
    _Bool _cinemaModeEnabled;
    _Bool _hasRetweetedBroadcast;
    _Bool _hasSharedBroadcastWithAllFollowers;
    _Bool _observingBroadcast;
    id <PTVBroadcastControllerDelegate> _delegate;
    PTVBroadcast *_broadcast;
    PTVMergeParticipantUser *_broadcaster;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVPlaybackPoint *_playbackPoint;
    PTVPlaybackPoint *_previousPlaybackPoint;
    PTVVideoPosition *_previousPlaybackPosition;
    PTVChatController *_chatController;
    id <PTVTwitterIntegrationDelegate> _twitterIntegrationDelegate;
    PTVTwitterAuthenticationModel *_twitterAuthenticationModel;
    PTVBroadcastThumbnailManager *_thumbnailManager;
}

+ (_Bool)IsSharingHighlightsEnabledWithTwitterIntegrationDelegate:(id)arg1;
+ (_Bool)IsViewingHighlightsEnabledWithTwitterIntegrationDelegate:(id)arg1;
+ (id)CalculateInitialPlaybackPointForBroadcast:(id)arg1 StartingPosition:(id)arg2 IsPublishing:(_Bool)arg3 TwitterIntegrationDelegate:(id)arg4;
@property(nonatomic) _Bool observingBroadcast; // @synthesize observingBroadcast=_observingBroadcast;
@property(readonly, nonatomic) PTVBroadcastThumbnailManager *thumbnailManager; // @synthesize thumbnailManager=_thumbnailManager;
@property(nonatomic) _Bool hasSharedBroadcastWithAllFollowers; // @synthesize hasSharedBroadcastWithAllFollowers=_hasSharedBroadcastWithAllFollowers;
@property(nonatomic) _Bool hasRetweetedBroadcast; // @synthesize hasRetweetedBroadcast=_hasRetweetedBroadcast;
@property(retain, nonatomic) PTVTwitterAuthenticationModel *twitterAuthenticationModel; // @synthesize twitterAuthenticationModel=_twitterAuthenticationModel;
@property(nonatomic) __weak id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate; // @synthesize twitterIntegrationDelegate=_twitterIntegrationDelegate;
@property(nonatomic) _Bool cinemaModeEnabled; // @synthesize cinemaModeEnabled=_cinemaModeEnabled;
@property(readonly, nonatomic) PTVChatController *chatController; // @synthesize chatController=_chatController;
@property(readonly, nonatomic) PTVVideoPosition *previousPlaybackPosition; // @synthesize previousPlaybackPosition=_previousPlaybackPosition;
@property(readonly, nonatomic) PTVPlaybackPoint *previousPlaybackPoint; // @synthesize previousPlaybackPoint=_previousPlaybackPoint;
@property(readonly, nonatomic) PTVPlaybackPoint *playbackPoint; // @synthesize playbackPoint=_playbackPoint;
@property(readonly, nonatomic) _Bool isPublishing; // @synthesize isPublishing=_isPublishing;
@property(readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(readonly, nonatomic) PTVMergeParticipantUser *broadcaster; // @synthesize broadcaster=_broadcaster;
@property(readonly, nonatomic) PTVBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(nonatomic) __weak id <PTVBroadcastControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareBroadcastWithFollowerIDs:(id)arg1 channelIDs:(id)arg2 invitationCount:(long long)arg3 timeCode:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shareBroadcastWithSpecificFollowerIDs:(id)arg1 channelIDs:(id)arg2 invitationCount:(long long)arg3 timeCode:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shareBroadcastWithAllFollowersAtTimeCode:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool shouldShowRetweetButton;
@property(readonly, nonatomic) _Bool canShareHighlight;
@property(readonly, nonatomic, getter=isSharingHighlightsEnabled) _Bool sharingHighlightsEnabled;
- (void)didReachEndOfVideo;
@property(readonly, nonatomic, getter=isViewingHighlightsEnabled) _Bool viewingHighlightsEnabled;
- (void)didUpdatePlaybackPointFrom:(id)arg1;
- (void)willUpdatePlaybackPointTo:(id)arg1;
- (void)updatePlaybackPoint:(id)arg1;
- (id)playbackPointForUpdatedBroadcastState;
- (id)playbackPointForSeekingToPosition:(id)arg1;
- (void)seekToBeginningOfReplay;
- (void)seekToPosition:(id)arg1;
- (void)seekToLive;
@property(readonly, nonatomic) _Bool canSendSuggestedEmojiHearts;
@property(readonly, nonatomic) _Bool canSendGiftHearts;
@property(readonly, nonatomic) _Bool canAccessGiftHearts;
@property(readonly, nonatomic) _Bool isVirtualGiftingEnabled;
- (void)logEventWithFormat:(id)arg1;
- (void)logEvent:(id)arg1;
@property(readonly, nonatomic) long long totalParticipantsCount;
@property(readonly, nonatomic) unsigned long long presentOccupancy;
@property(readonly, nonatomic) int participantIndex;
- (void)emptyChatDeliveryQueue;
- (void)stopChatDelivery;
- (void)startChatDeliveryIfNeeded;
- (void)disconnectChat;
- (_Bool)connectChat;
@property(readonly, nonatomic) unsigned long long chatRoomPermissionType;
- (_Bool)didReceiveMessage:(id)arg1 isForReplay:(_Bool)arg2;
- (id)deliveryDateForMessage:(id)arg1 isForReplay:(_Bool)arg2;
@property(readonly, nonatomic) double replayDuration;
@property(readonly, nonatomic) double currentReplayTimeInterval;
@property(readonly, nonatomic) NSDate *programDateTime;
@property(readonly, nonatomic) unsigned long long ntpForNow;
@property(readonly, nonatomic) unsigned long long ntpForCurrentFrame;
- (void)loadBroadcasterIfNeeded;
- (void)updateBroadcaster:(id)arg1;
- (void)broadcastViewerSharingEnabledDidChange;
- (void)broadcastShareDataDidChange;
- (void)broadcastBestEndDateDidChange;
- (void)broadcastNTotalWatchedDidChange;
- (void)broadcastNWatchingTotalDidChange;
- (void)broadcastAcceptGiftsDidChange;
- (void)broadcastProfileImageURLDidChange;
- (void)broadcastBroadcastingTitleDidChange;
- (void)broadcastLocationTitleDidChange;
- (void)broadcastHasLocationDidChange;
- (void)broadcastUserNameDidChange;
- (void)broadcastUserDisplayNameDidChange;
- (void)broadcastUserIDDidChange;
- (void)broadcastHeartThemesDidChange;
- (void)broadcastPreferredImageURLDidChange;
- (void)broadcastAvailableForReplayDidChange;
- (void)broadcastStateDidChange;
- (void)stopObservingBroadcast;
- (void)startObservingBroadcast;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didChangeBroadcast;
- (void)willChangeBroadcast;
- (void)setBroadcast:(id)arg1;
@property(readonly, nonatomic) _Bool loggedInUserIsBroadcaster;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;
- (void)removeBroadcastControllerObserver:(id)arg1;
- (void)addBroadcastControllerObserver:(id)arg1;
- (id)initWithDelegate:(id)arg1 broadcast:(id)arg2 loggedInUser:(id)arg3 twitterIntegrationDelegate:(id)arg4 twitterAuthenticationModel:(id)arg5 isPublishing:(_Bool)arg6 startingPosition:(id)arg7;
- (void)userModelController:(id)arg1 didLoadUser:(id)arg2 withError:(id)arg3;
- (void)chatController:(id)arg1 didLogEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

