//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNDatabaseConnection;

@interface TFNDatabaseStatement : NSObject
{
    TFNDatabaseConnection *_connection;
    struct sqlite3_stmt *_handle;
    NSString *_sql;
}

@property(readonly, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) struct sqlite3_stmt *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (_Bool)isNullForIndex:(long long)arg1;
- (id)stringForIndex:(long long)arg1;
- (id)dataForIndex:(long long)arg1;
- (id)dateForIndex:(long long)arg1;
- (double)doubleForIndex:(long long)arg1;
- (long long)longLongForIndex:(long long)arg1;
- (long long)integerForIndex:(long long)arg1;
- (_Bool)boolForIndex:(long long)arg1;
- (void)bindNullForIndex:(long long)arg1;
- (void)bindString:(id)arg1 forIndex:(long long)arg2;
- (void)bindData:(id)arg1 forIndex:(long long)arg2;
- (void)bindDate:(id)arg1 forIndex:(long long)arg2;
- (void)bindDouble:(double)arg1 forIndex:(long long)arg2;
- (void)bindLongLong:(long long)arg1 forIndex:(long long)arg2;
- (void)bindInteger:(long long)arg1 forIndex:(long long)arg2;
- (void)bindBool:(_Bool)arg1 forIndex:(long long)arg2;
- (void)close;
- (void)reset;
- (long long)step;
- (id)_connection;
@property(readonly, nonatomic) long long resultSetColumnCount;
@property(readonly, nonatomic) long long parameterCount;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 sql:(id)arg2 error:(id *)arg3;
- (id)init;

@end
