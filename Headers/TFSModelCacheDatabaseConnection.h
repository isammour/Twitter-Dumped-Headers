//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TFSModelCacheDatabaseConnection : NSObject
{
    _Bool _usesPreparedStatementCache;
    struct sqlite3 *_sqliteConnection;
    NSMutableDictionary *_sqlToPreparedStatements;
    NSMutableDictionary *_indexedTableNameToMaxRowID;
}

+ (id)newConnection;
@property(readonly, nonatomic) NSMutableDictionary *indexedTableNameToMaxRowID; // @synthesize indexedTableNameToMaxRowID=_indexedTableNameToMaxRowID;
@property(readonly, nonatomic) NSMutableDictionary *sqlToPreparedStatements; // @synthesize sqlToPreparedStatements=_sqlToPreparedStatements;
@property(readonly, nonatomic) struct sqlite3 *sqliteConnection; // @synthesize sqliteConnection=_sqliteConnection;
@property(nonatomic) _Bool usesPreparedStatementCache; // @synthesize usesPreparedStatementCache=_usesPreparedStatementCache;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)_tfsmc_logErrorToSession:(id)arg1 withDomain:(id)arg2 code:(long long)arg3 message:(id)arg4;
- (void)_tfsmc_logSQLiteErrorToSession:(id)arg1;
- (_Bool)_tfsmc_isResultCode:(int)arg1 equalToExpectedResultCode:(int)arg2 session:(id)arg3;
- (_Bool)isDone:(int)arg1 session:(id)arg2;
- (_Bool)isOK:(int)arg1 session:(id)arg2;
- (void)_tfsmc_isInsertingRowID:(long long)arg1 inTableName:(id)arg2;
- (id)indexedTableNameToMaxRowIDWithSession:(id)arg1;
- (long long)mostRecentChangedRowCount;
- (_Bool)executeSQL:(id)arg1 withParameters:(id)arg2 session:(id)arg3 enumerateRowsWithBlock:(CDUnknownBlockType)arg4;
- (_Bool)executeSQL:(id)arg1 withParameters:(id)arg2 session:(id)arg3;
- (_Bool)executeSQL:(id)arg1 withSession:(id)arg2;
- (_Bool)openPath:(id)arg1 withSession:(id)arg2;

@end

