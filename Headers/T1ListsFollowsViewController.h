//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ListsListViewController.h>

@class NSMutableSet, NSSet, T1ListTableRowAdapter, TFNTwitterAccount, TFNTwitterUser, TFNTwitterUserListListFollowing, TFSTwitterUserReference;
@protocol T1ListsOwnerDelegate;

@interface T1ListsFollowsViewController : T1ListsListViewController
{
    T1ListTableRowAdapter *_tableRowAdapter;
    NSMutableSet *_selectedLists;
    NSSet *_originalSet;
    TFNTwitterUserListListFollowing *_ownedListsFollowingUser;
    TFNTwitterAccount *_account;
    TFSTwitterUserReference *_userReference;
    TFNTwitterUser *_targetUser;
    id <T1ListsOwnerDelegate> _delegate;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <T1ListsOwnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterUser *targetUser; // @synthesize targetUser=_targetUser;
- (void)setUserReference:(id)arg1;
- (id)userReference;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;
- (id)scribeSection;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateSaveEnabled;
- (void)_unsubscribeFromList:(id)arg1;
- (void)_removeList:(id)arg1;
- (void)_addList:(id)arg1;
- (void)_deleteList:(id)arg1;
- (void)_resetSubscriptions;
- (void)_ownedListsFollowingDidUpdate:(id)arg1;
- (void)_globalListDidRemoveSubscriber:(id)arg1;
- (void)_globalListDidAddSubscriber:(id)arg1;
- (void)_globalListDidCreate:(id)arg1;
- (void)_subscriptionsDidUpdate:(id)arg1;
- (void)_saveTapped:(id)arg1;
- (void)_closeTapped:(id)arg1;
- (id)emptyListActionText;
- (id)emptyListMessage;
- (id)emptyListHeading;
- (void)viewDidLoad;
- (id)init;

@end
