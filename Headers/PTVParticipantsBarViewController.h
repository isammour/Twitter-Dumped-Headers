//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeViewer/PTVBroadcastControllerObserver-Protocol.h>
#import <PeriscopeViewer/PTVChatControllerObserver-Protocol.h>
#import <PeriscopeViewer/PTVParticipantsBarCellViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVParticipantsBarTotalStarsCellDelegate-Protocol.h>
#import <PeriscopeViewer/UICollectionViewDataSource-Protocol.h>
#import <PeriscopeViewer/UICollectionViewDelegate-Protocol.h>
#import <PeriscopeViewer/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, PTVBroadcastController, PTVGiftContributorWatcher, PTVParticipantsBarView;
@protocol PTVParticipantsBarViewControllerDelegate;

@interface PTVParticipantsBarViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, PTVParticipantsBarCellViewDelegate, PTVChatControllerObserver, UICollectionViewDelegateFlowLayout, PTVParticipantsBarTotalStarsCellDelegate, PTVBroadcastControllerObserver>
{
    NSMutableArray *_participants;
    NSMutableSet *_presentUserIds;
    _Bool _starTotalLabelHidden;
    _Bool _introViewDidHide;
    _Bool _loadedStarTotal;
    id <PTVParticipantsBarViewControllerDelegate> _delegate;
    PTVBroadcastController *_broadcastController;
    PTVGiftContributorWatcher *_contributorWatcher;
    NSArray *_currentContributors;
    NSArray *_allContributors;
    NSTimer *_hideTotalLabelTimer;
}

+ (_Bool)ShouldShowStarTotalForUpdateFromOldValue:(long long)arg1 newValue:(long long)arg2 isPublishing:(_Bool)arg3;
@property(retain, nonatomic) NSTimer *hideTotalLabelTimer; // @synthesize hideTotalLabelTimer=_hideTotalLabelTimer;
@property(nonatomic) _Bool loadedStarTotal; // @synthesize loadedStarTotal=_loadedStarTotal;
@property(copy, nonatomic) NSArray *allContributors; // @synthesize allContributors=_allContributors;
@property(readonly, nonatomic) NSArray *currentContributors; // @synthesize currentContributors=_currentContributors;
@property(readonly, nonatomic) PTVGiftContributorWatcher *contributorWatcher; // @synthesize contributorWatcher=_contributorWatcher;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) __weak id <PTVParticipantsBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveLiveHeartFromRemoteID:(id)arg1 isSuperheart:(_Bool)arg2;
- (void)userDidLeaveChat:(id)arg1;
- (void)userDidJoinChat:(id)arg1;
- (_Bool)isFollowingUser:(id)arg1;
- (_Bool)isLoggedInUser:(id)arg1;
- (void)updateCurrentContributors;
- (void)insertParticipants:(id)arg1 removeParticipantsAtIndexes:(id)arg2;
- (void)removeAllParticipants;
- (void)removeParticipantsWithRemoteId:(id)arg1;
- (void)insertParticipant:(id)arg1;
- (void)setParticipants:(id)arg1;
- (id)indexPathOfContributorWithRemoteId:(id)arg1;
- (id)indexPathOfParticipantWithRemoteId:(id)arg1;
- (id)participantUserAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDisplay;
- (void)setupCollectionView;
- (id)collectionView;
- (void)broadcastIntroViewDidHide;
- (void)hideStarTotalAfterDelay;
- (void)setStarTotalLabelHidden:(_Bool)arg1;
- (void)contributorWatcherDidUpdateStarTotal:(long long)arg1 previousTotal:(long long)arg2;
- (void)setupViews;
@property(readonly, nonatomic) PTVParticipantsBarView *barView;
- (id)loggedInUser;
- (id)contributingUserIds;
- (void)updateContributorCellAmounts;
- (void)filterParticipantsContributingUserIDs:(id)arg1 presentUserIDs:(id)arg2;
- (void)didGetContribution:(id)arg1 fromContributor:(id)arg2;
- (void)contributorListDidUpdate:(id)arg1;
- (void)chatController:(id)arg1 didSubscribeWithSuccess:(_Bool)arg2;
- (void)chatController:(id)arg1 userDidLeaveChat:(id)arg2;
- (void)chatController:(id)arg1 userDidJoinChat:(id)arg2;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;
- (void)broadcastTotalStarsCellDidTap:(id)arg1;
- (void)participantBarCellViewDidLongPress:(id)arg1;
- (void)participantBarCellViewDidTap:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadView;
- (id)initWithDelegate:(id)arg1 broadcastController:(id)arg2 contributorWatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

