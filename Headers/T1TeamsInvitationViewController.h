//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersItemsTableViewController.h>

#import <T1Twitter/TFNTooltipDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface T1TeamsInvitationViewController : T1UsersItemsTableViewController <TFNTooltipDelegate>
{
    NSMutableArray *_invitations;
}

@property(retain, nonatomic) NSMutableArray *invitations; // @synthesize invitations=_invitations;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (long long)dashContentItemType;
- (void)_didDeclineTeamsInvitationFromUser:(id)arg1;
- (void)_didAcceptTeamsInvitationFromUser:(id)arg1;
- (void)_didUpdateTeamsInvitationFromUser:(id)arg1;
- (void)_triggerTooltipEvent;
- (void)_setupTooltipEvent;
- (id)_t1_noInvitationItem;
- (id)_t1_descriptionItemWithMultipleInvites:(_Bool)arg1;
- (void)retrieveInvitationsForceRefresh:(_Bool)arg1;
- (void)update:(_Bool)arg1;
- (id)title;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
