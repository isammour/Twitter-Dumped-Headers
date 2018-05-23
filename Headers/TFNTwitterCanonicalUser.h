//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSString, TFNTwitterSharedUserData, TFSCallbackDispatcher, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterRelationship, TFSTwitterRelationshipManager, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference;

@interface TFNTwitterCanonicalUser : NSObject <NSCoding, TFSPlistSerialization>
{
    _Bool _hasStructuredLocation;
    _Bool _protectedUser;
    _Bool _suspended;
    _Bool _isLifelineInstitution;
    _Bool _hasCollections;
    _Bool _needsPhoneVerification;
    _Bool _nsfw;
    _Bool _isWhitelistedForAdsSubscription;
    _Bool _isUsernameless;
    _Bool _hasExtendedProfileBirthday;
    _Bool _loadedFromDisk;
    _Bool _couldBeStale;
    _Bool _assimilatingSharedUserData;
    unsigned int _profileLinkColorHexTriplet;
    TFSTwitterEntityMedia *_profileBannerMediaEntity;
    TFSTwitterPlace *_structuredLocation;
    NSString *_bio;
    NSString *_url;
    TFSTwitterEntitySet *_bioEntities;
    TFSTwitterEntitySet *_urlEntities;
    NSString *_location;
    long long _numberOfFollowing;
    long long _numberOfFollowers;
    long long _numberOfFollowersNormal;
    long long _numberOfFollowersFast;
    NSNumber *_statusesCountNumber;
    NSNumber *_mediaCountNumber;
    NSNumber *_favoritesCountNumber;
    NSNumber *_pinnedTweetIDNumber;
    NSDate *_createdDate;
    long long _translatorType;
    NSString *_phoneNumber;
    NSArray *_withheldInCountries;
    NSString *_withheldBio;
    TFSTwitterEntitySet *_withheldBioEntities;
    TFSTwitterUserDesignatorInfo *_highlightedDesignatorInfo;
    TFSTwitterUserExtendedProfile *_extendedProfile;
    long long _advertiserAccountType;
    NSArray *_advertiserAccountServiceLevels;
    long long _analyticsType;
    long long _profileInterstitialType;
    TFSCallbackDispatcher *_pinTweetEventDispatcher;
    TFSCallbackDispatcher *_unpinTweetEventDispatcher;
    TFSCallbackDispatcher *_updateEventDispatcher;
    TFNTwitterSharedUserData *_sharedUserData;
    TFSTwitterRelationshipManager *_relationshipManager;
    TFSTwitterEntityMedia *_pendingProfileBannerMediaEntity;
    NSString *_pendingProfileBannerMediaEntityToken;
    NSData *_profileBannerMediaEntityJSONData;
    NSData *_structuredLocationJSONData;
    NSData *_urlEntitiesJSONData;
    NSData *_bioEntitiesJSONData;
    NSData *_extendedProfileJSONData;
    NSData *_advertiserAccountServiceLevelsJSONData;
    NSData *_withheldBioEntitiesJSONData;
    NSData *_highlightedDesignatorInfoJSONData;
}

+ (long long)_parseAnalyticsTypeFromJSONDictionary:(id)arg1;
+ (long long)numberOfColumnsInUsers;
@property(readonly, nonatomic) NSData *highlightedDesignatorInfoJSONData; // @synthesize highlightedDesignatorInfoJSONData=_highlightedDesignatorInfoJSONData;
@property(readonly, nonatomic) NSData *withheldBioEntitiesJSONData; // @synthesize withheldBioEntitiesJSONData=_withheldBioEntitiesJSONData;
@property(readonly, nonatomic) NSData *advertiserAccountServiceLevelsJSONData; // @synthesize advertiserAccountServiceLevelsJSONData=_advertiserAccountServiceLevelsJSONData;
@property(readonly, nonatomic) NSData *extendedProfileJSONData; // @synthesize extendedProfileJSONData=_extendedProfileJSONData;
@property(readonly, nonatomic) NSData *bioEntitiesJSONData; // @synthesize bioEntitiesJSONData=_bioEntitiesJSONData;
@property(readonly, nonatomic) NSData *urlEntitiesJSONData; // @synthesize urlEntitiesJSONData=_urlEntitiesJSONData;
@property(readonly, nonatomic) NSData *structuredLocationJSONData; // @synthesize structuredLocationJSONData=_structuredLocationJSONData;
@property(readonly, nonatomic) NSData *profileBannerMediaEntityJSONData; // @synthesize profileBannerMediaEntityJSONData=_profileBannerMediaEntityJSONData;
@property(readonly, copy, nonatomic) NSString *pendingProfileBannerMediaEntityToken; // @synthesize pendingProfileBannerMediaEntityToken=_pendingProfileBannerMediaEntityToken;
@property(readonly, nonatomic) TFSTwitterEntityMedia *pendingProfileBannerMediaEntity; // @synthesize pendingProfileBannerMediaEntity=_pendingProfileBannerMediaEntity;
@property(readonly, nonatomic) _Bool assimilatingSharedUserData; // @synthesize assimilatingSharedUserData=_assimilatingSharedUserData;
@property(readonly, nonatomic) TFSTwitterRelationshipManager *relationshipManager; // @synthesize relationshipManager=_relationshipManager;
@property(readonly, nonatomic) TFNTwitterSharedUserData *sharedUserData; // @synthesize sharedUserData=_sharedUserData;
@property(readonly, nonatomic) TFSCallbackDispatcher *updateEventDispatcher; // @synthesize updateEventDispatcher=_updateEventDispatcher;
@property(readonly, nonatomic) TFSCallbackDispatcher *unpinTweetEventDispatcher; // @synthesize unpinTweetEventDispatcher=_unpinTweetEventDispatcher;
@property(readonly, nonatomic) TFSCallbackDispatcher *pinTweetEventDispatcher; // @synthesize pinTweetEventDispatcher=_pinTweetEventDispatcher;
@property(nonatomic) _Bool couldBeStale; // @synthesize couldBeStale=_couldBeStale;
@property(nonatomic) _Bool loadedFromDisk; // @synthesize loadedFromDisk=_loadedFromDisk;
@property(readonly, nonatomic) long long profileInterstitialType; // @synthesize profileInterstitialType=_profileInterstitialType;
@property(nonatomic) long long analyticsType; // @synthesize analyticsType=_analyticsType;
@property(retain, nonatomic) NSArray *advertiserAccountServiceLevels; // @synthesize advertiserAccountServiceLevels=_advertiserAccountServiceLevels;
@property(nonatomic) long long advertiserAccountType; // @synthesize advertiserAccountType=_advertiserAccountType;
@property(retain, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile; // @synthesize extendedProfile=_extendedProfile;
@property(readonly, nonatomic) _Bool hasExtendedProfileBirthday; // @synthesize hasExtendedProfileBirthday=_hasExtendedProfileBirthday;
@property(readonly, nonatomic) _Bool isUsernameless; // @synthesize isUsernameless=_isUsernameless;
@property(readonly, nonatomic) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo; // @synthesize highlightedDesignatorInfo=_highlightedDesignatorInfo;
@property(retain, nonatomic) TFSTwitterEntitySet *withheldBioEntities; // @synthesize withheldBioEntities=_withheldBioEntities;
@property(copy, nonatomic) NSString *withheldBio; // @synthesize withheldBio=_withheldBio;
@property(readonly, copy, nonatomic) NSArray *withheldInCountries; // @synthesize withheldInCountries=_withheldInCountries;
@property(readonly, nonatomic) _Bool isWhitelistedForAdsSubscription; // @synthesize isWhitelistedForAdsSubscription=_isWhitelistedForAdsSubscription;
@property(nonatomic) _Bool nsfw; // @synthesize nsfw=_nsfw;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) _Bool needsPhoneVerification; // @synthesize needsPhoneVerification=_needsPhoneVerification;
@property(nonatomic) _Bool hasCollections; // @synthesize hasCollections=_hasCollections;
@property(nonatomic) long long translatorType; // @synthesize translatorType=_translatorType;
@property(nonatomic) _Bool isLifelineInstitution; // @synthesize isLifelineInstitution=_isLifelineInstitution;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) _Bool protectedUser; // @synthesize protectedUser=_protectedUser;
@property(readonly, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) NSNumber *pinnedTweetIDNumber; // @synthesize pinnedTweetIDNumber=_pinnedTweetIDNumber;
@property(readonly, nonatomic) NSNumber *favoritesCountNumber; // @synthesize favoritesCountNumber=_favoritesCountNumber;
@property(readonly, nonatomic) NSNumber *mediaCountNumber; // @synthesize mediaCountNumber=_mediaCountNumber;
@property(readonly, nonatomic) NSNumber *statusesCountNumber; // @synthesize statusesCountNumber=_statusesCountNumber;
@property(readonly, nonatomic) long long numberOfFollowersFast; // @synthesize numberOfFollowersFast=_numberOfFollowersFast;
@property(readonly, nonatomic) long long numberOfFollowersNormal; // @synthesize numberOfFollowersNormal=_numberOfFollowersNormal;
@property(readonly, nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
@property(readonly, nonatomic) long long numberOfFollowing; // @synthesize numberOfFollowing=_numberOfFollowing;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet; // @synthesize profileLinkColorHexTriplet=_profileLinkColorHexTriplet;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) TFSTwitterEntitySet *urlEntities; // @synthesize urlEntities=_urlEntities;
@property(retain, nonatomic) TFSTwitterEntitySet *bioEntities; // @synthesize bioEntities=_bioEntities;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(retain, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity; // @synthesize profileBannerMediaEntity=_profileBannerMediaEntity;
- (void).cxx_destruct;
- (id)_constructMediaEntityFromDictionary:(id)arg1 imageURL:(id)arg2 colorPaletteKey:(id)arg3;
- (long long)private_profileInterstitialTypeForString:(id)arg1;
- (long long)_translatorTypeFromJSONDictionary:(id)arg1;
- (long long)_advertiserAccountTypeFromString:(id)arg1;
- (id)_structuredLocationForJSONDictionary:(id)arg1;
- (void)_postUpdateNotificationWithUserInfo:(id)arg1;
- (void)_assimilateCanonicalUser:(id)arg1;
- (void)_removeObserverForSharedUserData;
- (void)_addObserverForSharedUserData;
- (void)setMutedByCurrentAccount:(_Bool)arg1;
- (void)setBlockedByCurrentAccount:(_Bool)arg1;
- (void)setFollowRequestSentByCurrentAccount:(_Bool)arg1;
- (void)setLiveFollowedByCurrentAccount:(_Bool)arg1;
- (void)setDeviceFollowedByCurrentAccount:(_Bool)arg1;
- (void)setFollowedByCurrentAccount:(_Bool)arg1;
- (id)relationshipChangeByPushingCancelFollowRequestChange;
- (id)relationshipChangeByPushingAcceptFollowRequestChange;
- (id)relationshipChangeByPushingDisableWantRetweetsChange;
- (id)relationshipChangeByPushingEnableWantRetweetsChange;
- (id)relationshipChangeByPushingUnmuteChange;
- (id)relationshipChangeByPushingMuteChange;
- (id)relationshipChangeByPushingUnblockChange;
- (id)relationshipChangeByPushingBlockChange;
- (id)relationshipChangeByPushingLifelineUnfollowChange;
- (id)relationshipChangeByPushingDeviceUnfollowChange;
- (id)relationshipChangeByPushingUnfollowChange;
- (id)relationshipChangeByPushingLifelineFollowChange;
- (id)relationshipChangeByPushingLiveUnfollowChange;
- (id)relationshipChangeByPushingLiveFollowChange;
- (id)relationshipChangeByPushingDeviceFollowChange;
- (id)relationshipChangeByPushingFollowChange;
- (_Bool)finishRelationshipChange:(id)arg1 success:(_Bool)arg2;
- (void)updateRelationshipFromBatchUnfollowResult;
- (void)updateRelationshipFromBatchFollowResultWithIsProtectedUser:(_Bool)arg1;
- (_Bool)updateRelationship:(id)arg1;
- (void)addNumberOfStatuses:(long long)arg1;
- (void)addNumberOfFollowers:(long long)arg1;
- (void)addNumberOfFollowing:(long long)arg1;
- (id)searchSpace;
- (void)cancelPendingProfileBannerURLWithToken:(id)arg1;
- (id)tokenBySettingPendingProfileBannerURL:(id)arg1 dimensions:(struct CGSize)arg2;
- (void)cancelPendingProfileImageURLWithToken:(id)arg1;
- (id)tokenBySettingPendingProfileImageURL:(id)arg1 dimensions:(struct CGSize)arg2;
- (void)replaceSharedUserDataForAssimilation:(id)arg1;
- (void)assimilateCanonicalUser:(id)arg1;
- (_Bool)shouldAssimilateCanonicalUser:(id)arg1;
- (void)setSharedUserData:(id)arg1;
@property(readonly, nonatomic) _Bool hasBannerImageURL;
@property(readonly, nonatomic) long long profileImageState;
@property(readonly, nonatomic) long long numberOfFavorites;
@property(readonly, nonatomic) long long numberOfMediaStatuses;
@property(readonly, nonatomic) long long numberOfStatuses;
@property(readonly, nonatomic) NSString *bioDisplayText;
@property(readonly, nonatomic) NSString *bioForProfileEditing;
@property(readonly, nonatomic) NSString *urlForProfileEditing;
@property(readonly, nonatomic) NSString *twitterURLForEmail;
@property(readonly, nonatomic) NSString *twitterURL;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) _Bool hasFreshFullRelationship;
@property(readonly, nonatomic) _Bool hasFreshRelationship;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(readonly, nonatomic) _Bool hasStructuredLocation; // @synthesize hasStructuredLocation=_hasStructuredLocation;
@property(retain, nonatomic) TFSTwitterPlace *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
@property(retain, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) _Bool isPartialUser;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(copy, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
- (_Bool)insertIntoUsersWithTransaction:(id)arg1 existingUser:(id)arg2 forShadowTable:(_Bool)arg3 error:(id *)arg4;
- (id)initWithResultSet:(id)arg1 columnIndex:(long long *)arg2;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initQuotedStatusInfoUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntity:(id)arg4 verified:(_Bool)arg5;
- (id)initWithJSONDictionary:(id)arg1 fromGraphQL:(_Bool)arg2;
- (id)initTestCanonicalUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntity:(id)arg4 verified:(_Bool)arg5;
- (id)initWithSharedUserData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

