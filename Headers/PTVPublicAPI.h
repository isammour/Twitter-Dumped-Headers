//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVPublicAPI : NSObject
{
}

+ (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
+ (id)_HeartThemeBorderURLForTheme:(id)arg1;
+ (id)_HeartThemeFillURLForTheme:(id)arg1;
+ (void)_SuccessAction:(id)arg1 Paramaters:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)SetAuthorizationToken:(id)arg1 ForService:(id)arg2;
+ (void)GetAuthorizationTokenForService:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)InvalidateCachedAuthorizationTokenForService:(id)arg1;
+ (id)CachedAuthorizationTokenForService:(id)arg1;
+ (void)GetReplayChunksForBroadcastWithID:(id)arg1 WorkClient:(id)arg2 CachePolicy:(long long)arg3;
+ (void)ReportAbuseForBroadcast:(id)arg1 Session:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)BlockBroadcaster:(id)arg1 Session:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (id)GetFeaturedBookmarkIconWithMask:(id)arg1 ForColorHexString:(id)arg2;
+ (id)FeaturedIconCache;
+ (void)UploadThumbnailData:(id)arg1 ToURL:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetRemoteHeartTheme:(id)arg1 ForClient:(id)arg2 CachePolicy:(long long)arg3 ImageProcessingHandler:(CDUnknownBlockType)arg4;
+ (id)CreateColorizedImageForColor:(id)arg1 WithMask:(id)arg2;
+ (id)CreateColorizedImageForColor:(id)arg1 AlphaImage:(id)arg2;
+ (void)GenerateColorizedImageWithColor:(id)arg1 Mask:(id)arg2 CacheKey:(id)arg3 Client:(id)arg4;
+ (void)GenerateColorizedImageWithAlphaImage:(id)arg1 Color:(id)arg2 Client:(id)arg3 CacheKey:(id)arg4;
+ (void)GenerateTwitterHeart:(id)arg1 ForClient:(id)arg2 Mask:(id)arg3 Theme:(id)arg4;
+ (void)GenerateHeart:(long long)arg1 ForClient:(id)arg2 Mask:(id)arg3 Theme:(id)arg4;
+ (void)GetRemoteImage:(id)arg1 ForClient:(id)arg2 CachePolicy:(long long)arg3 CacheKey:(id)arg4 ImageProcessingHandler:(CDUnknownBlockType)arg5;
+ (void)GetRemoteImage:(id)arg1 ForClient:(id)arg2 CachePolicy:(long long)arg3 CacheKeyPrefix:(id)arg4 ImageProcessingHandler:(CDUnknownBlockType)arg5;
+ (void)StopWatchingWithSession:(id)arg1 StopWatchingDate:(id)arg2 AddedParameters:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)PingWatchingWithSession:(id)arg1 AddedParameters:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)StartWatchingWithLifeCycleToken:(id)arg1 IsAutoPlay:(_Bool)arg2 PreviewTimeInterval:(double)arg3 AddedParameters:(id)arg4 WorkClient:(id)arg5 CachePolicy:(long long)arg6;
+ (void)AccessChatWithChatToken:(id)arg1 CanRetry:(_Bool)arg2 ForWorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)AccessVideoForBroadcast:(id)arg1 ShouldFetchHighlightURLs:(_Bool)arg2 PreviousLifeCycleToken:(id)arg3 PreviousChatToken:(id)arg4 CanRetry:(_Bool)arg5 ForWorkClient:(id)arg6 CachePolicy:(long long)arg7;
+ (id)WatchedBroadcasts;
+ (void)GetBroadcastHistoryForUserID:(id)arg1 WorkClient:(id)arg2 CachePolicy:(long long)arg3;
+ (void)RefreshUserObject:(id)arg1 UserID:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)GetFeaturedBroadcastsWithPreferredLanguages:(id)arg1 ExcludeBroadcastsWithoutLocation:(_Bool)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetBroadcastsForMapRegion:(CDStruct_90e2a262)arg1 IncludeReplays:(_Bool)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetChannelsRequest:(id)arg1 ResponseClass:(Class)arg2 AdditionalQueryParameters:(id)arg3 Completion:(CDUnknownBlockType)arg4;
+ (void)RefreshMetaDataForBroadcasts:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)GetBroadcastIDsForChannel:(id)arg1 Completion:(CDUnknownBlockType)arg2;
+ (void)GetSuggestedCollectionsWithReportedBroadcasts:(id)arg1 MaxBroadcastsPerChannel:(long long)arg2 CreatedBroadcasts:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetAroundTheWorldBroadcastsChannelWithReportedBroadcasts:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)GetTVOSCategoriesAndChannelsWithWorkClient:(id)arg1 CachePolicy:(long long)arg2 BlockedUsers:(id)arg3 ReportedBroadcasts:(id)arg4;
+ (void)GetGlobalCategoriesForClient:(id)arg1 CachePolicy:(long long)arg2 BlockedUsers:(id)arg3 ReportedBroadcasts:(id)arg4;

@end

