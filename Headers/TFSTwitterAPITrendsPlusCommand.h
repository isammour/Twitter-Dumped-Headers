//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class TFNTwitterAccountModel;

@interface TFSTwitterAPITrendsPlusCommand : TFSTwitterAPICommand
{
    _Bool _allowPromotedContent;
    long long _accountUserID;
    TFNTwitterAccountModel *_accountModel;
}

+ (id)validTrendsModules;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
@property(nonatomic) long long accountUserID; // @synthesize accountUserID=_accountUserID;
@property(nonatomic) _Bool allowPromotedContent; // @synthesize allowPromotedContent=_allowPromotedContent;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountUserID:(long long)arg3 accountModel:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

