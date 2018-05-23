//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, TFNTwitterQuickPromoteModule, TFNTwitterStatus, TFNTwitterUserDataSource, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterPaginatedResults, TFSTwitterPlace, TFSTwitterUserExtendedProfile, UIColor;
@protocol TFNTwitterStatusSocialContext;

@protocol T1ProfileDataSource <NSObject>
@property(readonly, nonatomic) NSString *loadingErrorMessage;
@property(readonly, nonatomic) unsigned long long friendsFollowingTotalCount;
@property(readonly, copy, nonatomic) TFSTwitterPaginatedResults *friendsFollowing;
@property(readonly, copy, nonatomic) NSArray *clusterFollowRecommendations;
@property(readonly, copy, nonatomic) NSArray *userRecommendations;
@property(readonly, nonatomic) TFNTwitterQuickPromoteModule *quickPromoteModule;
@property(readonly, nonatomic) TFNTwitterStatus *pinnedTweet;
@property(readonly, nonatomic) NSNumber *teamsInvitationCount;
@property(readonly, nonatomic) NSNumber *unreadFollowerRequestCount;
@property(readonly, nonatomic) NSNumber *followingCount;
@property(readonly, nonatomic) NSNumber *followerCount;
@property(readonly, nonatomic) NSNumber *favoriteTweetCount;
@property(readonly, nonatomic) NSNumber *mediaTweetCount;
@property(readonly, nonatomic) NSNumber *tweetCount;
@property(readonly, nonatomic, getter=isDataReady) _Bool dataReady;
@property(readonly, nonatomic, getter=isContentWithheldForViewerCountry) _Bool contentWithheldForViewerCountry;
@property(readonly, nonatomic) unsigned long long blockingViewerRelationshipState;
@property(readonly, nonatomic) _Bool hasFollowRequest;
@property(readonly, nonatomic) _Bool viewerCanDM;
@property(readonly, nonatomic, getter=isViewerLiveFollowing) _Bool viewerLiveFollowing;
@property(readonly, nonatomic, getter=isViewerDeviceFollowing) _Bool viewerDeviceFollowing;
@property(readonly, nonatomic, getter=isTwitterAlertsActivatedByViewer) _Bool twitterAlertsActivatedByViewer;
@property(readonly, nonatomic, getter=isBlockedByViewer) _Bool blockedByViewer;
@property(readonly, nonatomic, getter=isMutedByViewer) _Bool mutedByViewer;
@property(readonly, nonatomic, getter=isFollowedByViewer) _Bool followedByViewer;
@property(readonly, nonatomic, getter=isFollowingViewer) _Bool followingViewer;
@property(readonly, nonatomic, getter=isUserRelationshipReady) _Bool userRelationshipReady;
@property(readonly, nonatomic) _Bool needsSetup;
@property(readonly, nonatomic, getter=isTwitterAlertsInstitution) _Bool twitterAlertsInstitution;
@property(readonly, nonatomic, getter=isSuspendedAccount) _Bool suspendedAccount;
@property(readonly, nonatomic, getter=isProtectedAccount) _Bool protectedAccount;
@property(readonly, nonatomic, getter=isVerifiedAccount) _Bool verifiedAccount;
@property(readonly, nonatomic) long long interstitialType;
@property(retain, nonatomic) id <TFNTwitterStatusSocialContext> socialContext;
@property(readonly, nonatomic, getter=isViewingOwnProfile) _Bool viewingOwnProfile;
@property(readonly, nonatomic) TFSTwitterEntityURL *entityURL;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldBioEntities;
@property(readonly, copy, nonatomic) NSString *withheldBio;
@property(readonly, nonatomic) TFSTwitterEntitySet *bioEntities;
@property(readonly, copy, nonatomic) NSString *bio;
@property(readonly, nonatomic) TFSTwitterPlace *structuredLocation;
@property(readonly, copy, nonatomic) NSString *location;
@property(readonly, nonatomic) UIColor *profileLinkColor;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile;
@property(readonly, nonatomic) _Bool isUserInvalid;
@property(readonly, nonatomic) TFNTwitterUserDataSource *userDataSource;
- (void)requestClusterFollowRecommendationsIfNeeded;
- (void)invalidateDataForced:(_Bool)arg1;
- (void)invalidateData;
- (void)reloadRelationship;
@end

