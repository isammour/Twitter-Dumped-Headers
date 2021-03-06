//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNScopedContainerViewController.h>

#import <T1Twitter/TFNScopedContainerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, T1CustomTimelineCreatedListViewController, T1CustomTimelineFollowingListViewController, TFNTwitterAccount, TFNTwitterUser;

@interface T1CustomTimelineListViewController : TFNScopedContainerViewController <TFNTwitterAuthenticated, TFNScopedContainerViewControllerDelegate>
{
    T1CustomTimelineCreatedListViewController *_createdTimeline;
    T1CustomTimelineFollowingListViewController *_followingTimeline;
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
}

@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribePage;
- (id)scribe;
- (id)scopedContainerViewController:(id)arg1 titleForSegmentAtIndex:(long long)arg2;
- (_Bool)t1_showsSearchAction;
- (_Bool)t1_showsComposeAction;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

