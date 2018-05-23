//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIListsMembershipsCommand : TFSTwitterAPICommand
{
    _Bool _filterToOwnedLists;
    TFNTwitterAccountModel *_accountModel;
    NSNumber *_userID;
    NSString *_screenName;
    NSNumber *_count;
    NSString *_cursor;
}

@property(nonatomic) _Bool filterToOwnedLists; // @synthesize filterToOwnedLists=_filterToOwnedLists;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 userID:(id)arg4 screenName:(id)arg5 count:(id)arg6 cursor:(id)arg7 filterToOwnedLists:(_Bool)arg8 source:(unsigned long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

