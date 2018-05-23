//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1MomentCapsuleAdapterDelegate-Protocol.h>

@class NSArray, NSString, T1MomentCapsuleTableRowAdapter, TFNTwitterAccount;
@protocol T1MomentCapsuleListViewControllerFooterDelegate, T1MomentCapsuleListViewControllerPullToRefreshDelegate, T1MomentViewControllerDelegate, TFNTwitterMomentSportEventsDataManager;

@interface T1MomentCapsuleListViewController : TFNItemsDataViewController <T1MomentCapsuleAdapterDelegate>
{
    NSArray *_capsuleList;
    id <T1MomentViewControllerDelegate> _delegate;
    id <T1MomentCapsuleListViewControllerFooterDelegate> _footerDelegate;
    id <T1MomentCapsuleListViewControllerPullToRefreshDelegate> _pullToRefreshDelegate;
    id <TFNTwitterMomentSportEventsDataManager> _sportsDataManager;
    unsigned long long _displayStyle;
    TFNTwitterAccount *_account;
    T1MomentCapsuleTableRowAdapter *_listAdapter;
}

@property(retain, nonatomic) T1MomentCapsuleTableRowAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) id <TFNTwitterMomentSportEventsDataManager> sportsDataManager; // @synthesize sportsDataManager=_sportsDataManager;
@property(nonatomic) __weak id <T1MomentCapsuleListViewControllerPullToRefreshDelegate> pullToRefreshDelegate; // @synthesize pullToRefreshDelegate=_pullToRefreshDelegate;
@property(nonatomic) __weak id <T1MomentCapsuleListViewControllerFooterDelegate> footerDelegate; // @synthesize footerDelegate=_footerDelegate;
@property(nonatomic) __weak id <T1MomentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *capsuleList; // @synthesize capsuleList=_capsuleList;
- (void).cxx_destruct;
- (void)didTapCTAMomentViewModel:(id)arg1;
- (void)didTapMomentViewModel:(id)arg1 sender:(id)arg2;
- (void)didTapFollowMomentViewModel:(id)arg1;
- (double)contentHeight;
- (void)update:(_Bool)arg1;
- (void)loadTop:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (long long)editingStyleForItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)calculatedLayoutMetrics;
- (void)scrollToFirstVisibleItemAnimated:(_Bool)arg1;
- (void)_updateWithTheme;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 sportsDataManager:(id)arg2 displayStyle:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

