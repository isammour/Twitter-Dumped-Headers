//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIFriendsFollowingIdsCommand : TFSTwitterAPICommand
{
    _Bool _skipStatus;
    NSNumber *_userID;
    NSString *_screenName;
    NSString *_cursor;
    TFNTwitterAccountModel *_accountModel;
}

@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
@property(nonatomic) _Bool skipStatus; // @synthesize skipStatus=_skipStatus;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 screenName:(id)arg4 cursor:(id)arg5 skipStatus:(_Bool)arg6 source:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 userID:(id)arg4 cursor:(id)arg5 skipStatus:(_Bool)arg6 source:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

