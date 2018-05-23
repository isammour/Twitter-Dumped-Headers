//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TFNTwitterAccount;

@interface TFNTwitterHomeFriendshipSet : NSObject
{
    NSMutableSet *_followingSet;
    NSMutableDictionary *_currentSessionFollowingDateDictionary;
    TFNTwitterAccount *_account;
    long long _sinceId;
}

- (void).cxx_destruct;
- (id)_firstStatusInStreamObjectsOrNil:(id)arg1;
- (void)update;
- (void)_userDidBecomeInactive;
- (void)_streamDidUpdate;
- (void)_didUnfollowUser:(id)arg1;
- (void)_didFollowUser:(id)arg1;
- (_Bool)isFollowingUncertain:(id)arg1;
- (_Bool)isFollowing:(id)arg1;
- (_Bool)isFollowedRecently:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

