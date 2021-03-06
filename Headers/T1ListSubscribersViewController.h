//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersViewController.h>

#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterList, TFNTwitterUserListSubscribersList;

@interface T1ListSubscribersViewController : T1UsersViewController <TFNTwitterAuthenticated>
{
    TFNTwitterUserListSubscribersList *_subscribersList;
    TFNTwitterList *_list;
}

@property(retain, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)_subscribersListDidUpdate:(id)arg1;
- (void)requestUsers;
- (void)_registerNotificationHandlers;
- (void)_unregisterNotificationHandlers;
- (void)viewDidLoad;

// Remaining properties
@property(retain, nonatomic) TFNTwitterAccount *account;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

