//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1DirectMessageTypeaheadUserFetchable-Protocol.h>

@class NSArray, NSMutableArray, TFNTwitterAccount, TFSTwitterTypeaheadService;

@interface TFNTwitterSearchTypeaheadStore : NSObject <T1DirectMessageTypeaheadUserFetchable>
{
    NSMutableArray *_recentSearches;
    TFNTwitterAccount *_account;
    TFSTwitterTypeaheadService *_cs2Service;
    NSMutableArray *_recentSearchResultTypes;
    id _lastRemoteLookupObserver;
    double _cs2LastUserPrefetchSuccessTime;
    double _cs2userPrefetchBackoffTime;
    long long _userPrefetchSize;
}

+ (id)_searchStrings:(id)arg1 matching:(id)arg2;
+ (unsigned long long)requestSourceTypeForSourceType:(long long)arg1;
+ (long long)requestResultTypeForResultType:(long long)arg1;
+ (id)sharedQueue;
@property(nonatomic) long long userPrefetchSize; // @synthesize userPrefetchSize=_userPrefetchSize;
@property(nonatomic) double cs2userPrefetchBackoffTime; // @synthesize cs2userPrefetchBackoffTime=_cs2userPrefetchBackoffTime;
@property(nonatomic) double cs2LastUserPrefetchSuccessTime; // @synthesize cs2LastUserPrefetchSuccessTime=_cs2LastUserPrefetchSuccessTime;
@property(retain, nonatomic) id lastRemoteLookupObserver; // @synthesize lastRemoteLookupObserver=_lastRemoteLookupObserver;
@property(readonly, nonatomic) NSMutableArray *recentSearchResultTypes; // @synthesize recentSearchResultTypes=_recentSearchResultTypes;
@property(retain, nonatomic) TFSTwitterTypeaheadService *cs2Service; // @synthesize cs2Service=_cs2Service;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSArray *recentSearches; // @synthesize recentSearches=_recentSearches;
- (void).cxx_destruct;
- (id)private_typeaheadLocalUserFromUser:(id)arg1;
- (id)private_typeaheadLocalUserFromTypeaheadUser:(id)arg1;
- (void)private_compositionDidSend:(id)arg1;
- (void)private_didUnfollowUser:(id)arg1;
- (void)private_didFollowUser:(id)arg1;
- (id)_deprecatedUserCachePaths;
- (id)_savedSearchesMatching:(id)arg1;
- (id)_recentSearchesMatching:(id)arg1;
- (void)recentHashtagsWithResultsBlock:(CDUnknownBlockType)arg1;
- (void)addRecentHashtags:(id)arg1;
- (void)assimilateHashtagsFromStatuses:(id)arg1;
- (void)_removeRecentSearch:(id)arg1;
- (void)removeRecentSearch:(id)arg1;
- (void)clearRecentSearches;
- (void)storeRecentSearchForUserID:(long long)arg1;
- (void)_storeRecentSearch:(id)arg1 forResultType:(long long)arg2;
- (void)storeRecentSearch:(id)arg1 forResultType:(long long)arg2;
- (void)storeRecentSearch:(id)arg1;
- (void)recentSearchesForResultType:(long long)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (id)recentSearchesForResultType:(long long)arg1;
- (void)typeaheadRemoteLookupWithQuery:(id)arg1 resultType:(long long)arg2 source:(long long)arg3 maxResults:(id)arg4 geoRequestFilter:(_Bool)arg5 contextText:(id)arg6 resultsBlock:(CDUnknownBlockType)arg7;
- (id)typeaheadResultsForUsersWithResultsBlock:(CDUnknownBlockType)arg1;
- (void)cancelTypeaheadLocalLookupWithIdentifier:(id)arg1;
- (id)typeaheadLocalLookupWithQuery:(id)arg1 resultType:(long long)arg2 resultsBlock:(CDUnknownBlockType)arg3;
- (id)typeaheadLookupWithQuery:(id)arg1 resultType:(long long)arg2 source:(long long)arg3 maxResults:(id)arg4 geoRequestFilter:(_Bool)arg5 contextText:(id)arg6 resultsBlock:(CDUnknownBlockType)arg7;
- (id)typeaheadLookupWithQuery:(id)arg1 resultType:(long long)arg2 source:(long long)arg3 maxResults:(id)arg4 contextText:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6;
- (void)addStatusesFromHomeTimeline:(id)arg1;
- (void)notifySharedStatusInDirectMessage:(id)arg1;
- (void)notifyViewedCardInStatus:(id)arg1;
- (void)notifyViewedMediaInStatus:(id)arg1;
- (void)notifyViewedStatusInTweetDetail:(id)arg1;
- (void)notifyUnfollowedUser:(id)arg1;
- (void)notifyFollowedUser:(id)arg1;
- (void)notifyViewedUserProfile:(id)arg1;
- (void)notifyLikedStatus:(id)arg1;
- (void)notifyQuotedStatus:(id)arg1;
- (void)notifyRetweetedStatus:(id)arg1;
- (void)notifyRepliedToUser:(id)arg1;
- (void)notifySelectedTypeaheadUser:(id)arg1;
- (id)_typeaheadUserCacheFileForVersion:(id)arg1;
- (id)_typeaheadUserCacheFilePath;
- (id)_typeaheadTopicCacheFileForNewFormat:(_Bool)arg1;
- (void)refreshUserCacheIfNecessaryWithForce:(_Bool)arg1 retryIfFailed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)refreshUserCacheIfNecessaryWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

