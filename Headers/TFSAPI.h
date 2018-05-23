//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TFSAPIAuthenticator, TFSAPIHeaderProvider;

@interface TFSAPI : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id <TFSAPIAuthenticator> _authenticator;
    id <TFSAPIHeaderProvider> _headerProvider;
    NSMutableDictionary *_sessions;
}

- (void).cxx_destruct;
- (id)sessionForAccountID:(id)arg1 authContext:(id)arg2;
- (id)initWithAuthenticator:(id)arg1 headerProvider:(id)arg2;
- (id)init;

@end

