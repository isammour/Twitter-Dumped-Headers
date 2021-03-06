//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSModelCacheConfiguration, TFSModelCacheDatabase;
@protocol OS_dispatch_queue;

@interface TFSModelDiskCache : NSObject
{
    _Bool _isReadOnly;
    _Bool _suppressingOfflineErrorDuringFirstOpeningAttempt;
    NSString *_databaseFilePath;
    NSString *_accountIdentifier;
    TFSModelCacheConfiguration *_configuration;
    NSString *_databaseDirectoryPath;
    long long _LRUCapacity;
    NSObject<OS_dispatch_queue> *_databaseStateSerialQueue;
    TFSModelCacheDatabase *_database;
    long long _databaseState;
    long long _timestamp;
}

+ (id)databaseFilePathFromDatabaseDirectory:(id)arg1;
+ (id)databaseDirectoryPathFromBaseDirectory:(id)arg1;
+ (id)_tfsmc_errorWithCode:(long long)arg1 extraDescription:(id)arg2 filePath:(id)arg3 underlyingError:(id)arg4;
+ (id)_tfsmc_errorWithCode:(long long)arg1;
+ (void)_tfsmc_enqueueDeletionWithConfiguration:(id)arg1;
+ (void)_tfsmc_enqueueDeletionIfNotYetRunForPathInConfiguration:(id)arg1;
+ (id)_tfsmc_deletionQueue;
+ (void)removeCacheFilesForAccountIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)_tfsmc_directoryPathForAllAccountsWithConfiguration:(id)arg1;
+ (id)accountIdentifiersOnDiskForConfiguration:(id)arg1;
+ (id)directoryPathWithAccountIdentifier:(id)arg1 configuration:(id)arg2;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool suppressingOfflineErrorDuringFirstOpeningAttempt; // @synthesize suppressingOfflineErrorDuringFirstOpeningAttempt=_suppressingOfflineErrorDuringFirstOpeningAttempt;
@property(nonatomic) long long databaseState; // @synthesize databaseState=_databaseState;
@property(retain, nonatomic) TFSModelCacheDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseStateSerialQueue; // @synthesize databaseStateSerialQueue=_databaseStateSerialQueue;
@property(readonly, nonatomic) long long LRUCapacity; // @synthesize LRUCapacity=_LRUCapacity;
@property(readonly, nonatomic) NSString *databaseDirectoryPath; // @synthesize databaseDirectoryPath=_databaseDirectoryPath;
@property(readonly, nonatomic) TFSModelCacheConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) NSString *databaseFilePath; // @synthesize databaseFilePath=_databaseFilePath;
@property(readonly, nonatomic) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
- (void).cxx_destruct;
- (void)_tfsmc_needsSerialQueue_removeDatabaseIfWriteableAndReportError:(id)arg1 withSession:(id)arg2;
- (void)_tfsmc_removeDatabaseIfWriteableAndReportError:(id)arg1 withSession:(id)arg2;
- (_Bool)_tfsmc_executeSQLStrings:(id *)arg1 count:(long long)arg2 withSession:(id)arg3;
- (void)_tfsmc_needsSerialQueue_createDatabaseIfNecessaryAndReadOpeningTimestampWithSession:(id)arg1;
- (id)_tfsmc_databaseIfAvailableWithSession:(id)arg1;
- (id)_tfsmc_databaseIfAvailableForWritingWithSession:(id)arg1;
- (void)close;
- (void)flush;
- (void)ifWriteableEnqueueRemoveRecordsForKeys:(id)arg1 addRecords:(id)arg2 session:(id)arg3 completionInAnyCase:(CDUnknownBlockType)arg4;
- (void)ifWriteableEnqueueUpdateUsageTimestampForKeys:(id)arg1 withSession:(id)arg2;
- (void)enumerateItemKeysForSearchKey:(id)arg1 operator:(long long)arg2 lowercaseValues:(id)arg3 resultCountLimit:(long long)arg4 session:(id)arg5 perResult:(CDUnknownBlockType)arg6;
- (id)_tfsmc_recordFromStatement:(struct sqlite3_stmt *)arg1;
- (void)enumerateRecordsForKeys:(id)arg1 withSession:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithAccountIdentifier:(id)arg1 configuration:(id)arg2;
- (id)databaseIfAvailableForDiagnosticsWithSession:(id)arg1;
- (id)databaseDirectoryPathForDiagnostics;

@end

