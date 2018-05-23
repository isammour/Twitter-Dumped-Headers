//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPIUsersUsernameAvailableCommand : TFSTwitterAPICommand
{
    NSString *_fullName;
    NSString *_userName;
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 fullName:(id)arg2 username:(id)arg3 email:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
