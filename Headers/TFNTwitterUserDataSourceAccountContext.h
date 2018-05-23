//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, TFNTwitterUserDataSource;

@interface TFNTwitterUserDataSourceAccountContext : NSObject
{
    TFNTwitterUserDataSource *_accountUserDataSource;
    NSMapTable *_dataSourcesByUserID;
    NSMapTable *_dataSourcesByUsername;
}

@property(readonly, nonatomic) NSMapTable *dataSourcesByUsername; // @synthesize dataSourcesByUsername=_dataSourcesByUsername;
@property(readonly, nonatomic) NSMapTable *dataSourcesByUserID; // @synthesize dataSourcesByUserID=_dataSourcesByUserID;
@property(retain, nonatomic) TFNTwitterUserDataSource *accountUserDataSource; // @synthesize accountUserDataSource=_accountUserDataSource;
- (void).cxx_destruct;
- (void)refreshUserDataSource:(id)arg1 force:(_Bool)arg2 withCommandService:(id)arg3 accountModel:(id)arg4 verifyCredentialsCommandQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)dataSourceForUserReference:(id)arg1;
- (void)addDataSource:(id)arg1;
- (id)init;

@end

