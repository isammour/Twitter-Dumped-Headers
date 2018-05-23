//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSAuth/TFSAuthRequestAuthorizer-Protocol.h>

@class NSString;

@interface TFSAuthBearerRequestAuthorizer : NSObject <TFSAuthRequestAuthorizer>
{
    NSString *_bearerToken;
}

@property(copy, nonatomic) NSString *bearerToken; // @synthesize bearerToken=_bearerToken;
- (void).cxx_destruct;
- (id)authorizationForURLRequest:(id)arg1 context:(id)arg2 error:(out id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

