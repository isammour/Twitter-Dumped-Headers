//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterExtensionKit/TFNAuthSigner.h>

@class NSString;

@interface TFNOAuthSigner : TFNAuthSigner
{
    NSString *_oAuthToken;
    NSString *_oAuthTokenSecret;
    double _oAuthClockDelta;
}

@property(nonatomic) double oAuthClockDelta; // @synthesize oAuthClockDelta=_oAuthClockDelta;
@property(copy, nonatomic) NSString *oAuthTokenSecret; // @synthesize oAuthTokenSecret=_oAuthTokenSecret;
@property(copy, nonatomic) NSString *oAuthToken; // @synthesize oAuthToken=_oAuthToken;
- (void).cxx_destruct;
- (id)_normalizedURLString;
- (id)_oAuthAuthorizationHeader;
- (id)signedMutableURLRequest;

@end

