//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, TFNTwitterAccount, TFNTwitterUser;
@protocol OS_dispatch_queue;

@interface TFNTwitterUserList : NSObject
{
    struct {
        unsigned int isLoading:1;
        unsigned int isAtEnd:1;
        unsigned int loadMoreLessThanMinCount:5;
    } _flags;
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
    unsigned long long _countPerPageRequest;
    NSString *_emptyStreamMessage;
    NSString *_emptyStreamSubtext;
    CDUnknownBlockType _loadUsersBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_users;
    NSString *_cursor;
}

+ (id)_tfn_userForUserOrRecommendation:(id)arg1;
+ (id)_tfn_usersOrRecommendationsWithValidatedUsernames:(id)arg1;
- (void).cxx_destruct;
- (void)_tfn_addUsersOrRecommendations:(id)arg1;
- (id)_tfn_dummyUserOfType:(long long)arg1;
- (void)_tfn_receiveUsersWithSuccess:(_Bool)arg1 receivedUsersCount:(unsigned long long)arg2 validatedUserOrRecommendations:(id)arg3 error:(id)arg4;
- (void)_tfn_postUpdateNotification;
- (void)_tfn_receiveUsers:(_Bool)arg1 paginatedResults:(id)arg2 error:(id)arg3;
- (void)loadMore;
@property(readonly, nonatomic) NSArray *users;
- (void)removeUser:(id)arg1;
- (void)insertUser:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithAccount:(id)arg1 user:(id)arg2 countPerPageRequest:(unsigned long long)arg3 emptyStreamMessage:(id)arg4 emptyStreamSubtext:(id)arg5 loadUsersBlock:(CDUnknownBlockType)arg6;
- (id)initWithAccount:(id)arg1 user:(id)arg2 loadUsersBlock:(CDUnknownBlockType)arg3;

@end
