//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSDictionary, NSString;

@interface TFSScribeThriftRequestInfo : NSObject <TBase, NSCoding>
{
    _Bool _idsIsSet;
    _Bool _clientIpAddressIsSet;
    _Bool _oauthAppIdIsSet;
    _Bool _userAgentIsSet;
    _Bool _languageCodeIsSet;
    _Bool _countryCodeIsSet;
    NSDictionary *_ids;
    NSString *_clientIpAddress;
    long long _oauthAppId;
    NSString *_userAgent;
    NSString *_languageCode;
    NSString *_countryCode;
}

@property(readonly, nonatomic) _Bool countryCodeIsSet; // @synthesize countryCodeIsSet=_countryCodeIsSet;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) _Bool languageCodeIsSet; // @synthesize languageCodeIsSet=_languageCodeIsSet;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) _Bool userAgentIsSet; // @synthesize userAgentIsSet=_userAgentIsSet;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) _Bool oauthAppIdIsSet; // @synthesize oauthAppIdIsSet=_oauthAppIdIsSet;
@property(nonatomic) long long oauthAppId; // @synthesize oauthAppId=_oauthAppId;
@property(readonly, nonatomic) _Bool clientIpAddressIsSet; // @synthesize clientIpAddressIsSet=_clientIpAddressIsSet;
@property(copy, nonatomic) NSString *clientIpAddress; // @synthesize clientIpAddress=_clientIpAddress;
@property(readonly, nonatomic) _Bool idsIsSet; // @synthesize idsIsSet=_idsIsSet;
@property(copy, nonatomic) NSDictionary *ids; // @synthesize ids=_ids;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIds:(id)arg1 clientIpAddress:(id)arg2 oauthAppId:(long long)arg3 userAgent:(id)arg4 languageCode:(id)arg5 countryCode:(id)arg6;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

