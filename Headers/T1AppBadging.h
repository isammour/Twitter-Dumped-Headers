//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1AppBadging : NSObject
{
    // Error parsing type: , name: userDefaults
    // Error parsing type: , name: stateAccessQueue
    // Error parsing type: , name: serializationQueue
    // Error parsing type: , name: appBadgingState
}

+ (id)AccountBadgesDidChangeUpdatedValues;
+ (id)AccountBadgesDidChangeNotification;
+ (id)AppIconBadgeCountDidChangeUpdatedValue;
+ (id)AppIconBadgeCountDidChangeNotification;
+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)forceUpdate;
- (_Bool)shouldShowBadgeOnSwitcherForUserID:(unsigned long long)arg1;
- (_Bool)unreadContentExistsExcludingUserIDs:(id)arg1;
- (void)setLocalUnseenDMCount:(long long)arg1 userID:(unsigned long long)arg2 date:(id)arg3;
- (void)setLocalActivityCount:(long long)arg1 userID:(unsigned long long)arg2 date:(id)arg3;
- (void)setUserVerified:(_Bool)arg1 userID:(unsigned long long)arg2;
- (void)setUserIDs:(id)arg1 currentUserID:(id)arg2;
- (void)setRemoteBadgeCount:(long long)arg1 userID:(unsigned long long)arg2 date:(id)arg3;
- (void)setCurrentUserID:(unsigned long long)arg1;
@property(nonatomic) _Bool badgeCountSumsAcrossAccounts;
- (id)userBadgeCountsForUserIDs:(id)arg1;
@property(nonatomic, readonly) long long appIconBadgeCount;

@end

