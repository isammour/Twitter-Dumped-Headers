//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, TFNTwitterAccountModel;

@interface TFSTwitterAPIActivityAboutMeCommand : TFSTwitterAPICommand
{
    _Bool _includeAlert;
    long long _accountUserID;
    TFNTwitterAccountModel *_accountModel;
    NSNumber *_sinceID;
    NSNumber *_maxID;
    NSNumber *_count;
    NSNumber *_modelVersion;
    unsigned long long _filters;
    unsigned long long _forceBuckets;
}

@property(readonly, nonatomic) unsigned long long forceBuckets; // @synthesize forceBuckets=_forceBuckets;
@property(readonly, nonatomic) unsigned long long filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) _Bool includeAlert; // @synthesize includeAlert=_includeAlert;
@property(readonly, nonatomic) NSNumber *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(readonly, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(readonly, nonatomic) NSNumber *maxID; // @synthesize maxID=_maxID;
@property(readonly, nonatomic) NSNumber *sinceID; // @synthesize sinceID=_sinceID;
@property(readonly, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
@property(readonly, nonatomic) long long accountUserID; // @synthesize accountUserID=_accountUserID;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 sinceID:(id)arg5 maxID:(id)arg6 count:(id)arg7 modelVersion:(id)arg8 filters:(unsigned long long)arg9 includeAlert:(_Bool)arg10 forceBuckets:(unsigned long long)arg11 source:(unsigned long long)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

