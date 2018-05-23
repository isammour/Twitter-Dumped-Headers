//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSMutableArray, NSNumber, NSString, TFNTwitterUser, TFSTwitterUserReference;

@interface TFNTwitterUserDataSource : NSObject <TFSTwitterScribableItem>
{
    _Bool _representsUserForAssociatedAccount;
    _Bool _forceRefresh;
    _Bool _refreshing;
    NSString *_accountID;
    TFNTwitterUser *_user;
    TFSTwitterUserReference *_userReference;
    double _lastRefreshAttemptTime;
    double _retryAfterTime;
    NSMutableArray *_refreshCompletionBlocks;
}

@property(readonly, nonatomic) NSMutableArray *refreshCompletionBlocks; // @synthesize refreshCompletionBlocks=_refreshCompletionBlocks;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) double retryAfterTime; // @synthesize retryAfterTime=_retryAfterTime;
@property(nonatomic) double lastRefreshAttemptTime; // @synthesize lastRefreshAttemptTime=_lastRefreshAttemptTime;
@property(readonly, nonatomic) _Bool representsUserForAssociatedAccount; // @synthesize representsUserForAssociatedAccount=_representsUserForAssociatedAccount;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference; // @synthesize userReference=_userReference;
@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)private_postUpdateNotificationWithUserInfo:(id)arg1;
- (void)private_userBlockingUpdate:(id)arg1;
- (void)private_userDidUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayFullName;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) _Bool hasUser;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) long long userID;
- (void)internal_updateWithUser:(id)arg1;
- (id)scribeParametersWithProfileID:(_Bool)arg1 scribeItem:(_Bool)arg2;
- (id)scribeParameters;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
- (_Bool)isEqualToUserReference:(id)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initInternalWithAccountID:(id)arg1 user:(id)arg2 orUserReference:(id)arg3 forAssociatedAccount:(_Bool)arg4;
- (id)initInternalForAssociatedUserWithAccountID:(id)arg1 userReference:(id)arg2;
- (id)initInternalWithAccountID:(id)arg1 userReference:(id)arg2;
- (id)initInternalWithAccountID:(id)arg1 user:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly) Class superclass;

@end
