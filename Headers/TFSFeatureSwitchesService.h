//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFSFeatureSwitchesManifest;
@protocol OS_dispatch_queue, TFSFeatureSwitchesHosting, TFSLogger;

@interface TFSFeatureSwitchesService : NSObject
{
    _Bool _initialRefreshWasNotified;
    NSMutableDictionary *_featureSwitchesByAccount;
    NSObject<OS_dispatch_queue> *_featureSwitchesByAccountQueue;
    id _restartObserver;
    id _updateObserver;
    id _pendingConfigUpdateObserver;
    id _partialUpdateObserver;
    id _archiveStartObserver;
    id _archiveEndObserver;
    id <TFSFeatureSwitchesHosting> _host;
    id <TFSLogger> _logger;
}

+ (void)shutdown;
+ (id)initializedServiceWithContentsOfFile:(id)arg1 forDeviceGuestID:(unsigned long long)arg2 isUsingVoiceOver:(_Bool)arg3 host:(id)arg4 configuration:(id)arg5 logger:(id)arg6 error:(out id *)arg7;
@property(retain, nonatomic) id <TFSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <TFSFeatureSwitchesHosting> host; // @synthesize host=_host;
@property(retain, nonatomic) id archiveEndObserver; // @synthesize archiveEndObserver=_archiveEndObserver;
@property(retain, nonatomic) id archiveStartObserver; // @synthesize archiveStartObserver=_archiveStartObserver;
@property(retain, nonatomic) id partialUpdateObserver; // @synthesize partialUpdateObserver=_partialUpdateObserver;
@property(retain, nonatomic) id pendingConfigUpdateObserver; // @synthesize pendingConfigUpdateObserver=_pendingConfigUpdateObserver;
@property(retain, nonatomic) id updateObserver; // @synthesize updateObserver=_updateObserver;
@property(retain, nonatomic) id restartObserver; // @synthesize restartObserver=_restartObserver;
@property(nonatomic) _Bool initialRefreshWasNotified; // @synthesize initialRefreshWasNotified=_initialRefreshWasNotified;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *featureSwitchesByAccountQueue; // @synthesize featureSwitchesByAccountQueue=_featureSwitchesByAccountQueue;
@property(retain, nonatomic) NSMutableDictionary *featureSwitchesByAccount; // @synthesize featureSwitchesByAccount=_featureSwitchesByAccount;
- (void).cxx_destruct;
- (void)_uncacheFeatureSwitchesForAccountID:(id)arg1;
- (id)_featureSwitchesForAccount:(id)arg1;
- (void)resetImpressions;
- (void)resetImpressionsForAccountID:(id)arg1;
- (_Bool)accountID:(id)arg1 isInExperimentForKey:(id)arg2;
- (void)partiallyApplyPendingForAccount:(id)arg1 keys:(id)arg2;
- (void)applyPendingForAccount:(id)arg1;
- (void)forceRefreshForAccount:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)refreshForAccountID:(id)arg1 timeout:(double)arg2 maxStale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)rawFeatureSwitchesDictionaryForAccountID:(id)arg1;
- (id)secondaryConfigurationForKey:(id)arg1 accountID:(id)arg2;
- (id)arrayForKey:(id)arg1 accountID:(id)arg2;
- (id)stringForKey:(id)arg1 accountID:(id)arg2;
- (id)numberForKey:(id)arg1 accountID:(id)arg2;
- (long long)integerForKey:(id)arg1 accountID:(id)arg2;
- (double)CGFloatForKey:(id)arg1 accountID:(id)arg2;
- (double)doubleForKey:(id)arg1 accountID:(id)arg2;
- (_Bool)boolForKey:(id)arg1 accountID:(id)arg2;
- (_Bool)removeAccountID:(id)arg1;
- (_Bool)preflightAccountID:(id)arg1;
- (void)shutdown;
- (_Bool)isInitialized;
- (id)initWithHost:(id)arg1 logger:(id)arg2;
- (id)init;
- (id)archivePathForAccountID:(id)arg1;
- (_Bool)accountID:(id)arg1 hasNonDefaultValueForKey:(id)arg2;
- (double)unsafePeekDoubleForKey:(id)arg1 accountID:(id)arg2;
- (_Bool)unsafePeekBoolForKey:(id)arg1 accountID:(id)arg2;
- (id)unsafePeekArrayForKey:(id)arg1 accountID:(id)arg2;
- (id)unsafePeekStringForKey:(id)arg1 accountID:(id)arg2;
- (id)queriedKeysAndValuesForTestCase;
- (id)overriddenFeatureSwitchKeysForTestCase;
- (id)overriddenFeatureSwitchKeysForRun;
- (id)queriedFeatureSwitchKeysForRun;
- (void)setSecondaryConfiguration:(id)arg1 forKey:(id)arg2 accountID:(id)arg3;
- (void)resetFeatureSwitchValueForKey:(id)arg1 accountID:(id)arg2;
- (void)setFeatureSwitchValue:(id)arg1 forKey:(id)arg2 accountID:(id)arg3;
- (void)resetFeatureSwitchesForAccountID:(id)arg1;
- (void)removeOverrideForKey:(id)arg1 accountID:(id)arg2;
- (id)overriddenRawValueForKey:(id)arg1 accountID:(id)arg2;
- (void)overrideAllValuesInDictionary:(id)arg1 accountID:(id)arg2;
- (void)overrideRawValue:(id)arg1 forKey:(id)arg2 accountID:(id)arg3;
- (id)featureSwitchValueForKey:(id)arg1 accountID:(id)arg2;
- (_Bool)updateAccountID:(id)arg1 config:(id)arg2;
- (_Bool)updateAccountID:(id)arg1 configData:(id)arg2;
- (id)featureSwitchesForAccount:(id)arg1;
@property(readonly, nonatomic) TFSFeatureSwitchesManifest *manifest;

@end

