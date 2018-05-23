//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPISignupVerifyBeginCommand : TFSTwitterAPICommand
{
    _Bool _notificationsDisabled;
    _Bool _byVoice;
    NSString *_phoneNumber;
    NSString *_countryCode;
}

@property(nonatomic) _Bool byVoice; // @synthesize byVoice=_byVoice;
@property(nonatomic) _Bool notificationsDisabled; // @synthesize notificationsDisabled=_notificationsDisabled;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 phoneNumber:(id)arg2 countryCode:(id)arg3 notificationsDisabled:(_Bool)arg4 byVoice:(_Bool)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
