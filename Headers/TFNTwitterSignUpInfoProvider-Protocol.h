//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;

@protocol TFNTwitterSignUpInfoProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *password;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
@property(readonly, copy, nonatomic) NSString *email;
@property(readonly, copy, nonatomic) NSString *fullName;

@optional
@property(copy, nonatomic) NSString *knownDeviceToken;
@property(copy, nonatomic) NSString *preVerifiedPhoneNumber;
@property(nonatomic, getter=isPreVerified) _Bool preVerified;
@property(nonatomic, getter=areSMSNotificationsEnabled) _Bool SMSNotificationsEnabled;
@property(nonatomic, getter=isNumeric) _Bool numeric;
@property(copy, nonatomic) NSString *normalizedPhoneNumber;
@property(copy, nonatomic) NSString *formattedPhoneNumber;
@property(copy, nonatomic) NSString *simCountryCode;
@property(readonly, nonatomic, getter=isPhoneSignUp) _Bool phoneSignUp;
@property(readonly, copy, nonatomic) NSString *uiMetricResult;
@property(readonly, nonatomic) _Bool phoneDiscoveryOptIn;
@property(readonly, nonatomic) _Bool emailDiscoveryOptIn;
@end

