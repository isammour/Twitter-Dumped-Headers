//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsSingleListCommand : TFSTwitterAPICommand
{
    NSNumber *_userID;
    NSString *_screenName;
}

@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 userID:(id)arg3 screenName:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

