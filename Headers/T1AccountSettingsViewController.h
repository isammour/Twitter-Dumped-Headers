//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1SecuritySettingsViewControllerDelegate-Protocol.h>

@class TFNTwitterAccount;

@interface T1AccountSettingsViewController : TFNItemsDataViewController <T1SecuritySettingsViewControllerDelegate>
{
    // Error parsing type: , name: account
    // Error parsing type: , name: changeCountryPresenter
    // Error parsing type: , name: countryDescriptionItem
    // Error parsing type: , name: emailAndPhoneLoader
    // Error parsing type: , name: addEmailPresenter
    // Error parsing type: , name: addPhonePresenter
    // Error parsing type: , name: changeUsernamePresenter
    // Error parsing type: , name: changePasswordItem.storage
    // Error parsing type: , name: securityItem.storage
    // Error parsing type: , name: twitterDataItem.storage
    // Error parsing type: , name: emailAndPhoneFailedLoadNotification.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)accountChangedWithNotification:(id)arg1;
- (void)didEnterForeground:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)emailAndPhoneInfoDidUpdate:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)securitySettingsViewControllerDidUpdatePhoneNumber:(id)arg1;
- (void)update:(_Bool)arg1;
- (_Bool)tfn_prefersSubtitleInTitleHeaderView;
- (_Bool)t1_showsComposeAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reachabilityChanged:(long long)arg1;
- (void)communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)communicationAgent:(id)arg1 didRegisterObserverWithInitialReachabilityFlags:(unsigned int)arg2 status:(long long)arg3 carrierInfo:(id)arg4 WWANRadioAccessTechnology:(id)arg5;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

