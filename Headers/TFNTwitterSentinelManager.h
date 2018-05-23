//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface TFNTwitterSentinelManager : NSObject
{
    NSDictionary *_sentinelSet;
    NSMutableDictionary *_loadingSentinels;
    _Bool _purgeArchiveSentinelsExist;
    _Bool _watchdogCrashDuringLastExecution;
}

+ (id)sharedSentinelManager;
@property(readonly, nonatomic) _Bool watchdogCrashDuringLastExecution; // @synthesize watchdogCrashDuringLastExecution=_watchdogCrashDuringLastExecution;
@property(readonly, nonatomic) _Bool purgeArchiveSentinelsExist; // @synthesize purgeArchiveSentinelsExist=_purgeArchiveSentinelsExist;
- (void).cxx_destruct;
- (_Bool)_hasPendingCrashReports;
- (void)_createAccountSwitchSentinel;
- (void)_createTwentySecondSentinel:(long long)arg1;
- (_Bool)_checkSentinelsOnApplicationLaunch:(_Bool)arg1;
- (id)sentinelForType:(long long)arg1;
- (id)loadingSentinelForType:(long long)arg1;
- (_Bool)removeSentinelFile:(long long)arg1;
- (_Bool)createSentinelFile:(long long)arg1 subTypeName:(id)arg2;
- (void)cleanup;
- (void)start:(_Bool)arg1;
- (id)init;

@end

