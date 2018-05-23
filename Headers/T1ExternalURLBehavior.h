//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class T1OpenExternalURLSessionManager;

@interface T1ExternalURLBehavior : NSObject <NSCopying>
{
    _Bool _opensExternalURLs;
    _Bool _externalURLsAreTrusted;
    T1OpenExternalURLSessionManager *_sessionManager;
}

+ (id)untrustedExternalURLBehaviorWithManager:(id)arg1;
+ (id)trustedExternalURLBehaviorWithManager:(id)arg1;
+ (id)behaviorIgnoringExternalURL;
@property(readonly, nonatomic) T1OpenExternalURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) _Bool externalURLsAreTrusted; // @synthesize externalURLsAreTrusted=_externalURLsAreTrusted;
@property(readonly, nonatomic) _Bool opensExternalURLs; // @synthesize opensExternalURLs=_opensExternalURLs;
- (void).cxx_destruct;
- (void)convertToTrusted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAllowingExternalURLs:(_Bool)arg1 externalURLsAreTrusted:(_Bool)arg2 sessionManager:(id)arg3;

@end

