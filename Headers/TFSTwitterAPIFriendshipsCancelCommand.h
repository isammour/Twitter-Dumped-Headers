//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIFriendshipsCancelCommand : TFSTwitterAPICommand
{
    _Bool _earned;
    TFNTwitterAccountModel *_accountModel;
    NSNumber *_userID;
    NSString *_screenName;
    NSString *_impressionID;
}

@property(nonatomic) _Bool earned; // @synthesize earned=_earned;
@property(retain, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 userID:(id)arg4 screenName:(id)arg5 impressionID:(id)arg6 earned:(_Bool)arg7 source:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

