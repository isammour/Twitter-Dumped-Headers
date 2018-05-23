//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVBroadcastOverflowTableViewController.h>

#import <PeriscopeViewer/PTVGiftContributorObserver-Protocol.h>
#import <PeriscopeViewer/PTVGiftingContributorTableViewCellDelegate-Protocol.h>
#import <PeriscopeViewer/UITableViewDataSource-Protocol.h>
#import <PeriscopeViewer/UITableViewDelegate-Protocol.h>

@class NSArray, NSSet, NSString, PTVBroadcast, PTVContributorsTableViewHeaderView, PTVGiftContributorWatcher, PTVPaymanService;
@protocol PTVGiftingContributorsTableViewControllerDelegate, PTVLoggedInUserProtocol;

@interface PTVGiftingContributorsTableViewController : PTVBroadcastOverflowTableViewController <UITableViewDelegate, UITableViewDataSource, PTVGiftingContributorTableViewCellDelegate, PTVGiftContributorObserver>
{
    NSArray *_presentContributors;
    NSArray *_leftContributors;
    NSSet *_topContributors;
    id <PTVLoggedInUserProtocol> _loggedInUser;
    _Bool _isBroadcastEnded;
    _Bool _loggedInUserIsBroadcaster;
    PTVContributorsTableViewHeaderView *_tableHeader;
    NSString *_chatToken;
    PTVPaymanService *_paymanService;
    PTVBroadcast *_broadcast;
    PTVGiftingContributorsTableViewController *_weakSelf;
    id <PTVGiftingContributorsTableViewControllerDelegate> _delegate;
    PTVGiftContributorWatcher *_giftContributorWatcher;
    long long _starTotal;
}

@property(nonatomic) long long starTotal; // @synthesize starTotal=_starTotal;
@property(retain, nonatomic) PTVGiftContributorWatcher *giftContributorWatcher; // @synthesize giftContributorWatcher=_giftContributorWatcher;
@property(nonatomic) __weak id <PTVGiftingContributorsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setContributors:(id)arg1 presentUserIds:(id)arg2;
- (void)didLoadContributors:(id)arg1;
- (void)loadContributors;
- (id)indexPathForContributor:(id)arg1;
- (id)contributorAtIndexPath:(id)arg1;
- (id)initWithLoggedInUser:(id)arg1 broadcast:(id)arg2 chatToken:(id)arg3 paymanService:(id)arg4;
- (long long)maxContribution;
- (void)giftContributorWatcher:(id)arg1 didUpdateStarTotal:(long long)arg2 previousTotal:(long long)arg3;
- (void)giftContributorWatcher:(id)arg1 didGetContribution:(id)arg2 fromContributor:(id)arg3;
- (void)giftContributorWatcher:(id)arg1 didUpdateContributorList:(id)arg2;
- (void)giftingContributorTableViewCellDidTapFollowButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)lastIndexPath;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

