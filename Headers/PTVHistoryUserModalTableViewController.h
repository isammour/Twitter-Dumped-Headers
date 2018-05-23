//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVTableViewController.h>

#import <PeriscopeViewer/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastTableViewCellKVODelegate-Protocol.h>
#import <PeriscopeViewer/PTVWatchViewDelegate-Protocol.h>

@class NSArray, NSObject, NSString, NSTimer;
@protocol PTVHistoryUserModalTableViewControllerDelegate, PTVLoggedInUserProtocol, PTVModalPresentationManagerDelegate;

@interface PTVHistoryUserModalTableViewController : PTVTableViewController <PTVBroadcastTableViewCellKVODelegate, MFMailComposeViewControllerDelegate, PTVWatchViewDelegate>
{
    NSString *_remoteID;
    PTVHistoryUserModalTableViewController *_weakSelf;
    NSArray *_sections;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    _Bool _disableClickableHashTags;
    id <PTVModalPresentationManagerDelegate> _modalDelegate;
    id <PTVHistoryUserModalTableViewControllerDelegate> _historyUserModalTableDelegate;
    NSTimer *_liveRefreshTimer;
}

@property(retain, nonatomic) NSTimer *liveRefreshTimer; // @synthesize liveRefreshTimer=_liveRefreshTimer;
@property(nonatomic) _Bool disableClickableHashTags; // @synthesize disableClickableHashTags=_disableClickableHashTags;
@property(nonatomic) __weak id <PTVHistoryUserModalTableViewControllerDelegate> historyUserModalTableDelegate; // @synthesize historyUserModalTableDelegate=_historyUserModalTableDelegate;
@property(nonatomic) __weak id <PTVModalPresentationManagerDelegate> modalDelegate; // @synthesize modalDelegate=_modalDelegate;
- (void).cxx_destruct;
- (void)refreshInfo;
- (void)scheduleTimer;
- (void)deleteIndexPath:(id)arg1;
- (void)launchBroadcast:(id)arg1 watchContext:(id)arg2;
- (void)userModalDidSelectWatchLive;
- (void)selectCellAtIndexPath:(id)arg1;
- (void)_setSections;
- (id)previousScreenConstant;
- (id)cellAtIndexPath:(id)arg1 forSection:(int)arg2;
- (double)heightForRowAtIndexPath:(id)arg1 inSection:(int)arg2;
- (long long)numberOfRowsInSection:(int)arg1;
- (id)broadcastAtIndexPath:(id)arg1;
- (int)sectionTypeForSection:(unsigned long long)arg1;
- (id)historyData;
- (id)initWithLoggedInUser:(id)arg1 userID:(id)arg2;
- (void)didSelectErrorRowAtIndexPath:(id)arg1;
- (void)didSelectLoadingRowAtIndexPath:(id)arg1;
- (void)didSelectEmptyRowAtIndexPath:(id)arg1;
- (void)didSelectDataRowAtIndexPath:(id)arg1;
- (id)errorCellForRowAtIndexPath:(id)arg1;
- (id)loadingCellForRowAtIndexPath:(id)arg1;
- (id)emptyCellForRowAtIndexPath:(id)arg1;
- (id)dataCellForRowAtIndexPath:(id)arg1;
- (double)heightForDataRowAtIndexPath:(id)arg1;
- (double)heightForErrorRowAtIndexPath:(id)arg1;
- (double)heightForLoadingRowAtIndexPath:(id)arg1;
- (double)heightForEmptyRowAtIndexPath:(id)arg1;
- (long long)numberOfErrorRowsInSection:(long long)arg1;
- (long long)numberOfLoadingRowsInSection:(long long)arg1;
- (long long)numberOfEmptyRowsInSection:(long long)arg1;
- (long long)numberOfDataRowsInSection:(long long)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)broadcastFeaturedStatusDidChangeForCell:(id)arg1;
- (void)didSelectHashtag:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldLoad;
- (void)stateChanged;
- (void)error:(id)arg1 context:(id)arg2;
- (id)context;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

