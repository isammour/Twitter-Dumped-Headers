//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString;

@interface TFNTwitterAdvancedNotificationFilters : NSObject <NSCopying>
{
    _Bool _filterAccountsNotFollowingEnabled;
    _Bool _filterAccountsNotFollowingMeEnabled;
    _Bool _filterNewAccountsEnabled;
    _Bool _filterAccountsWithADefaultAvatarEnabled;
    _Bool _filterAccountsWithUnverifiedEmailEnabled;
    _Bool _filterAccountsWithUnverifiedPhoneEnabled;
    NSString *_accountID;
}

+ (id)advancedNotificationFiltersWithJSONData:(id)arg1 accountID:(id)arg2 error:(id *)arg3;
@property(nonatomic, getter=isFilterAccountsWithUnverifiedPhoneEnabled) _Bool filterAccountsWithUnverifiedPhoneEnabled; // @synthesize filterAccountsWithUnverifiedPhoneEnabled=_filterAccountsWithUnverifiedPhoneEnabled;
@property(nonatomic, getter=isFilterAccountsWithUnverifiedEmailEnabled) _Bool filterAccountsWithUnverifiedEmailEnabled; // @synthesize filterAccountsWithUnverifiedEmailEnabled=_filterAccountsWithUnverifiedEmailEnabled;
@property(nonatomic, getter=isFilterAccountsWithADefaultAvatarEnabled) _Bool filterAccountsWithADefaultAvatarEnabled; // @synthesize filterAccountsWithADefaultAvatarEnabled=_filterAccountsWithADefaultAvatarEnabled;
@property(nonatomic, getter=isFilterNewAccountsEnabled) _Bool filterNewAccountsEnabled; // @synthesize filterNewAccountsEnabled=_filterNewAccountsEnabled;
@property(nonatomic, getter=isFilterAccountsNotFollowingMeEnabled) _Bool filterAccountsNotFollowingMeEnabled; // @synthesize filterAccountsNotFollowingMeEnabled=_filterAccountsNotFollowingMeEnabled;
@property(nonatomic, getter=isFilterAccountsNotFollowingEnabled) _Bool filterAccountsNotFollowingEnabled; // @synthesize filterAccountsNotFollowingEnabled=_filterAccountsNotFollowingEnabled;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)_postPropertyDidChangeNotification;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 accountID:(id)arg2;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

