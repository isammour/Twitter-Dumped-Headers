//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterXAuthPasswordResponse : NSObject
{
    int _loginVerificationRequestType;
    int _loginVerificationRequestCause;
    NSString *_token;
    NSString *_tokenSecret;
    NSString *_screenName;
    long long _userId;
    NSString *_knownDeviceToken;
    NSString *_loginVerificationRequestId;
    long long _loginVerificationUserId;
    NSString *_challengeURLString;
}

+ (id)xauthPasswordResponseWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *challengeURLString; // @synthesize challengeURLString=_challengeURLString;
@property(readonly, nonatomic) int loginVerificationRequestCause; // @synthesize loginVerificationRequestCause=_loginVerificationRequestCause;
@property(readonly, nonatomic) int loginVerificationRequestType; // @synthesize loginVerificationRequestType=_loginVerificationRequestType;
@property(readonly, nonatomic) long long loginVerificationUserId; // @synthesize loginVerificationUserId=_loginVerificationUserId;
@property(readonly, copy, nonatomic) NSString *loginVerificationRequestId; // @synthesize loginVerificationRequestId=_loginVerificationRequestId;
@property(readonly, copy, nonatomic) NSString *knownDeviceToken; // @synthesize knownDeviceToken=_knownDeviceToken;
@property(readonly, nonatomic) long long userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, copy, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

