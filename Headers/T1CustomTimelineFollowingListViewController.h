//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1CustomTimelineHeaderDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, T1CustomTimelineTableRowAdapter, TFNTwitterAccount, TFNTwitterCustomTimelineList, TFNTwitterUser;

@interface T1CustomTimelineFollowingListViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1CustomTimelineHeaderDelegate>
{
    T1CustomTimelineTableRowAdapter *_tableRowAdapter;
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
    TFNTwitterCustomTimelineList *_timelineList;
}

@property(retain, nonatomic) TFNTwitterCustomTimelineList *timelineList; // @synthesize timelineList=_timelineList;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)customTimelineHeaderCell:(id)arg1 didTapFollow:(id)arg2;
- (void)_globalTimelineDidUpdate:(id)arg1;
- (void)_customTimelineListDidUpdate:(id)arg1;
- (_Bool)showCreateButton;
- (void)_updateSections;
- (void)filterTimelines;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

