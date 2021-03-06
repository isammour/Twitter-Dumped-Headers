//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TSEUserSource;

@interface TSEAccountSource : NSObject
{
    _Bool _accountInfoLoaded;
    NSArray *_systemAccounts;
    TSEUserSource *_userSource;
    NSMutableArray *_mutableAccounts;
    NSString *_applicationGroupName;
}

@property(retain, nonatomic) NSString *applicationGroupName; // @synthesize applicationGroupName=_applicationGroupName;
@property(readonly, nonatomic) NSMutableArray *mutableAccounts; // @synthesize mutableAccounts=_mutableAccounts;
@property(readonly, nonatomic, getter=isAccountInfoLoaded) _Bool accountInfoLoaded; // @synthesize accountInfoLoaded=_accountInfoLoaded;
@property(retain, nonatomic) TSEUserSource *userSource; // @synthesize userSource=_userSource;
@property(readonly) NSArray *systemAccounts; // @synthesize systemAccounts=_systemAccounts;
- (void).cxx_destruct;
- (id)_applicationSavedTwitterState;
- (void)_loadWithUserDefaultsDictionary:(id)arg1;
- (_Bool)_removeStrandedAccounts;
- (void)_linkAccounts:(id)arg1 toSystemAccounts:(id)arg2;
- (void)_setupSystemAccountInAllAccounts:(id)arg1;
- (void)_systemAccountsDidChange:(id)arg1;
- (void)_syncWithSystemAccounts;
- (void)_tek_postAccountSourceDidUpdateNotification;
- (void)fetchUserData;
- (void)setSelectedAccount:(id)arg1;
- (id)parentAppSelectedAccount;
- (id)selectedAccount;
@property(readonly, copy, nonatomic) NSArray *accounts;
- (id)initWithApplicationGroupName:(id)arg1 userSource:(id)arg2;

@end

