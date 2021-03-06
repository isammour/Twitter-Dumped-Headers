//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterAPIMomentsCommand.h>

@class NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIMomentsPivotCommand : TFSTwitterAPIMomentsCommand
{
    long long _accountUserID;
    TFNTwitterAccountModel *_accountModel;
    NSString *_momentID;
}

@property(retain, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
@property(nonatomic) long long accountUserID; // @synthesize accountUserID=_accountUserID;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 momentID:(id)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

