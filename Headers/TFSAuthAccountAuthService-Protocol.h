//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURLRequest, TFSAuthAccountOAuth1Credential;

@protocol TFSAuthAccountAuthService <NSObject>
- (void)reverseAuthForAccountID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)signRequestWithSystemAccount:(NSURLRequest *)arg1 parameters:(NSDictionary *)arg2 multipart:(_Bool)arg3 accountID:(NSString *)arg4 completion:(void (^)(NSURLRequest *, NSError *))arg5;
- (TFSAuthAccountOAuth1Credential *)credentialForAccountID:(NSString *)arg1;
@end

