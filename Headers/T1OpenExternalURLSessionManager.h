//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNExternalURLAbuseProtection;

@interface T1OpenExternalURLSessionManager : NSObject
{
    TFNExternalURLAbuseProtection *_abuseProtection;
}

+ (void)_tfn_resetURLsKnownToFail;
+ (void)_tfn_setURLIsKnownToFail:(id)arg1;
+ (_Bool)_tfn_isURLIsKnownToFail:(id)arg1;
+ (void)setProtectsAgainstUntrustedURLs:(_Bool)arg1;
+ (_Bool)protectsAgainstUntrustedURLs;
+ (void)initialize;
@property(readonly, nonatomic) TFNExternalURLAbuseProtection *abuseProtection; // @synthesize abuseProtection=_abuseProtection;
- (void).cxx_destruct;
- (unsigned long long)_tfn_openOutboundURL:(id)arg1;
- (_Bool)_tfn_promptUserToLoadURL:(id)arg1;
- (_Bool)_tfn_shouldBlockLoadForURL:(id)arg1;
- (unsigned long long)openExternalURL:(id)arg1 context:(id)arg2;
- (id)init;

@end

