//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterAccount;
@protocol T1AccountCreator;

@interface T1SignUpManager : NSObject
{
    TFNTwitterAccount *_createdAccount;
    id <T1AccountCreator> _accountCreator;
}

@property(readonly, nonatomic) id <T1AccountCreator> accountCreator; // @synthesize accountCreator=_accountCreator;
@property(retain, nonatomic) TFNTwitterAccount *createdAccount; // @synthesize createdAccount=_createdAccount;
- (void).cxx_destruct;
- (void)_logAction:(id)arg1 forComponent:(id)arg2 withParameters:(id)arg3;
- (void)_logAction:(id)arg1 forComponent:(id)arg2;
- (void)_logAction:(id)arg1;
- (void)_handleResponseFailureWithError:(id)arg1;
- (void)_handleResponseSuccessWithInfo:(id)arg1 token:(id)arg2 secret:(id)arg3 user:(id)arg4 knownDeviceToken:(id)arg5;
- (void)signUpWithInfo:(id)arg1;
- (id)initWithAccountCreator:(id)arg1;

@end

