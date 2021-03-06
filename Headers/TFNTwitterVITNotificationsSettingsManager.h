//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSUserDefaults, TFNTwitterAccount;

@interface TFNTwitterVITNotificationsSettingsManager : NSObject
{
    _Bool _abuseFilter;
    _Bool _lowQualityFilter;
    TFNTwitterAccount *_account;
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic, getter=isLowQualityFilterEnabled) _Bool lowQualityFilter; // @synthesize lowQualityFilter=_lowQualityFilter;
@property(nonatomic, getter=isAbuseFilterEnabled) _Bool abuseFilter; // @synthesize abuseFilter=_abuseFilter;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_prefixForActivitySettingsWithAccount:(id)arg1;
- (id)_defaultsKey:(id)arg1;
- (void)_updateFilteredStreamSettings;
- (void)_updateSettings;
- (void)_storeSettingsConfiguration;
- (void)_loadStoredSettingsConfiguration;
@property(readonly, nonatomic) unsigned long long activityBucketValue;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 defaults:(id)arg2;
- (id)init;

@end

