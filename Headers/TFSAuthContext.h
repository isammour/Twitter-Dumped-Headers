//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSAuthConsumerCredential;

@interface TFSAuthContext : NSObject
{
    unsigned long long _authType;
    TFSAuthConsumerCredential *_requestingAppCredential;
    NSString *_bearerToken;
    NSString *_callbackURLString;
}

@property(readonly, copy, nonatomic) NSString *callbackURLString; // @synthesize callbackURLString=_callbackURLString;
@property(readonly, copy, nonatomic) NSString *bearerToken; // @synthesize bearerToken=_bearerToken;
@property(readonly, nonatomic) TFSAuthConsumerCredential *requestingAppCredential; // @synthesize requestingAppCredential=_requestingAppCredential;
@property(nonatomic) unsigned long long authType; // @synthesize authType=_authType;
- (void).cxx_destruct;
- (id)initWithBearerToken:(id)arg1;
- (id)initWithAuthType:(unsigned long long)arg1 consumerCredential:(id)arg2 callbackURLString:(id)arg3;
- (id)initWithAuthType:(unsigned long long)arg1 consumerCredential:(id)arg2 bearerToken:(id)arg3 callbackURLString:(id)arg4;

@end

