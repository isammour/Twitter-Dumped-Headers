//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVWorkClientLoader.h>

@class NSObject, NSString, PTVMergeParticipantUser;
@protocol PTVLoggedInUserProtocol;

@interface PTVUserLoader : PTVWorkClientLoader
{
    PTVMergeParticipantUser *_user;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    NSString *_remoteUserID;
}

+ (void)loadUserFromNetworkWithRemoteID:(id)arg1 loggedInUser:(id)arg2 callback:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *remoteUserID; // @synthesize remoteUserID=_remoteUserID;
@property(readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
- (void).cxx_destruct;
- (void)setUser:(id)arg1;
@property(readonly, nonatomic) PTVMergeParticipantUser *user;
- (id)initWithCachePolicy:(long long)arg1 loggedInUser:(id)arg2 remoteUserID:(id)arg3;
- (void)didReceiveNetworkData:(id)arg1;
- (void)didReceiveCachedData:(id)arg1;
- (void)performLoadWithWorkClient:(id)arg1 cachePolicy:(long long)arg2;

@end
