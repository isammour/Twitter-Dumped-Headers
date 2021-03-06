//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSItemProviderWriting-Protocol.h>
#import <T1Twitter/T1InlineMediaViewModel-Protocol.h>
#import <T1Twitter/T1PeopleDiscoveryScribableItem-Protocol.h>
#import <T1Twitter/T1PlayerFactoryIdentifiable-Protocol.h>
#import <T1Twitter/T1StatusViewModel-Protocol.h>
#import <T1Twitter/TFNDateComparable-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerSessionSource-Protocol.h>
#import <T1Twitter/TFNTwitterCanonicalTimelineStatus-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceObject-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceProvider-Protocol.h>
#import <T1Twitter/TFNTwitterFeedbackInfoSource-Protocol.h>
#import <T1Twitter/TFNTwitterFollowPromptSource-Protocol.h>
#import <T1Twitter/TFNTwitterMutableDismissibleItem-Protocol.h>
#import <T1Twitter/TFNTwitterTimelineObject-Protocol.h>
#import <T1Twitter/TFNTwitterUserRelatable-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSNumber, NSString, NSURL, TAVAnalyticsMediaIdentifier, TFNTwitterCampaignMetadata, TFNTwitterCanonicalStatus, TFNTwitterCardData, TFNTwitterCluster, TFNTwitterConversationStructure, TFNTwitterDisplayTextModel, TFNTwitterFeedbackInfo, TFNTwitterFeedbackModule, TFNTwitterFollowPrompt, TFNTwitterGeotag, TFNTwitterMediaInfo, TFNTwitterPromotedCardVariant, TFNTwitterPromotedContent, TFNTwitterStatusConversationContext, TFNTwitterSuggestsInfo, TFNTwitterTweetPrompt, TFNTwitterUser, TFSTwitterCameraMoment, TFSTwitterEntitySet, TFSTwitterUserReference, UIDragItem;
@protocol T1InlineMediaViewModel, T1StatusViewModel, TFNTwitterAVPlayerSessionSource, TFNTwitterCardDataSource, TFNTwitterStatusBanner, TFNTwitterStatusSocialContext, TFNTwitterTimelineEntryContext;

@interface TFNTwitterStatus : NSObject <T1InlineMediaViewModel, T1StatusViewModel, T1PlayerFactoryIdentifiable, T1PeopleDiscoveryScribableItem, NSCoding, TFNTwitterCanonicalTimelineStatus, TFSTwitterScribableItem, TFNDateComparable, TFNTwitterUserRelatable, TFNTwitterMutableDismissibleItem, TFNTwitterCardDataSourceObject, TFNTwitterCardDataSourceProvider, TFNTwitterAVPlayerSessionSource, TFNTwitterTimelineObject, TFNTwitterFeedbackInfoSource, TFNTwitterFollowPromptSource, NSItemProviderWriting>
{
    NSString *_unifiedID;
    TFNTwitterStatusConversationContext *_conversationContext;
    TFNTwitterDisplayTextModel *_displayTextModel;
    TFNTwitterDisplayTextModel *_withheldDisplayTextModel;
    _Bool _dismissing;
    _Bool _didPrepare;
    _Bool _recommendedByMagicRecs;
    _Bool _tombstoneDismissed;
    _Bool _isPinned;
    _Bool _isLongFormTweet;
    _Bool _isIncompleteLongFormTweet;
    _Bool _isEventStatus;
    _Bool _isConversationAncestor;
    _Bool _isConversationContext;
    _Bool _isConversationFocalStatus;
    _Bool _isConversationSelfThread;
    _Bool _isConversationPrecededByAncestor;
    _Bool _isConversationRoot;
    _Bool _derivedSocialContextInitialized;
    CDStruct_ce75bf4d _flags;
    TFNTwitterFeedbackInfo *_feedbackInfo;
    TFNTwitterCanonicalStatus *_canonicalStatus;
    long long _quoteID;
    TFNTwitterStatus *_quotedStatus;
    TFNTwitterPromotedContent *_promotedContent;
    TFNTwitterCampaignMetadata *_campaignMetadata;
    TFNTwitterPromotedCardVariant *_promotedCardVariant;
    TFNTwitterStatus *_retweetedStatus;
    TFNTwitterStatus *_retweetingStatus;
    NSDate *_fakeDate;
    long long _collectionID;
    NSString *_collectionURL;
    NSArray *_collectionItems;
    TFNTwitterStatus *_outerCollectionStatus;
    unsigned long long _statusDisplayType;
    id <TFNTwitterTimelineEntryContext> _timelineEntryContext;
    long long _timelineSortIndex;
    id <TFNTwitterStatusSocialContext> _socialContext;
    NSString *_highlightContextType;
    NSArray *_highlightContextMatchedTrends;
    NSString *_contextReasonIconType;
    NSString *_contextReasonText;
    NSAttributedString *_attachmentTombstoneLabel;
    NSURL *_attachmentTombstoneCTAURL;
    NSString *_attachmentTombstoneButtonAction;
    id <TFNTwitterStatusBanner> _banner;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    TFNTwitterFeedbackModule *_feedbackModule;
    TFNTwitterFollowPrompt *_followPrompt;
    TFNTwitterTweetPrompt *_tweetPrompt;
    NSString *_momentID;
    TFNTwitterCluster *_cluster;
    NSString *_debugString;
    unsigned long long _summaryType;
    double _score;
    NSString *_conversationSection;
    TFNTwitterConversationStructure *_conversationPayload;
    long long _conversationFocalStatusID;
    long long _authenticatedUserID;
    NSArray *_hitHighlights;
    struct _NSRange _attachmentTombstoneCTARange;
}

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (_Bool)isCanonicalStatusValid:(id)arg1;
+ (long long)numberOfColumnsInMyRetweets;
+ (long long)numberOfColumnsInStatuses;
+ (id)_collectionStatusIDNumbersInTimelinePlistDictionary:(id)arg1;
+ (id)allStatusIDsInTimelinePlistDictionary:(id)arg1;
+ (id)statusIDNumberInTimelinePlistDictionary:(id)arg1;
+ (_Bool)isStatusTimelinePlistDictionary:(id)arg1;
+ (id)statusesByIdDictionaryWithStatusesArray:(id)arg1;
+ (id)statusesByIdDictionaryWithJSONDictionary:(id)arg1 users:(id)arg2;
+ (id)statusesByIdDictionaryWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)statusesWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)statusesWithJSONArray:(id)arg1 users:(id)arg2;
+ (id)statusesWithJSONArray:(id)arg1;
+ (id)testStatusWithJSONData:(id)arg1 statusID:(long long)arg2 users:(id)arg3 error:(id *)arg4;
+ (id)statusWithJSONData:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool derivedSocialContextInitialized; // @synthesize derivedSocialContextInitialized=_derivedSocialContextInitialized;
@property(retain, nonatomic) NSArray *hitHighlights; // @synthesize hitHighlights=_hitHighlights;
@property(nonatomic) CDStruct_ce75bf4d flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) long long authenticatedUserID; // @synthesize authenticatedUserID=_authenticatedUserID;
@property(nonatomic) long long conversationFocalStatusID; // @synthesize conversationFocalStatusID=_conversationFocalStatusID;
@property(nonatomic) _Bool isConversationRoot; // @synthesize isConversationRoot=_isConversationRoot;
@property(nonatomic) _Bool isConversationPrecededByAncestor; // @synthesize isConversationPrecededByAncestor=_isConversationPrecededByAncestor;
@property(nonatomic) _Bool isConversationSelfThread; // @synthesize isConversationSelfThread=_isConversationSelfThread;
@property(nonatomic) _Bool isConversationFocalStatus; // @synthesize isConversationFocalStatus=_isConversationFocalStatus;
@property(nonatomic) _Bool isConversationContext; // @synthesize isConversationContext=_isConversationContext;
@property(nonatomic) _Bool isConversationAncestor; // @synthesize isConversationAncestor=_isConversationAncestor;
@property(retain, nonatomic) TFNTwitterConversationStructure *conversationPayload; // @synthesize conversationPayload=_conversationPayload;
@property(retain, nonatomic) NSString *conversationSection; // @synthesize conversationSection=_conversationSection;
@property(nonatomic) _Bool isEventStatus; // @synthesize isEventStatus=_isEventStatus;
@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) _Bool isIncompleteLongFormTweet; // @synthesize isIncompleteLongFormTweet=_isIncompleteLongFormTweet;
@property(nonatomic) unsigned long long summaryType; // @synthesize summaryType=_summaryType;
@property(readonly, nonatomic) _Bool isLongFormTweet; // @synthesize isLongFormTweet=_isLongFormTweet;
@property(copy, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(retain, nonatomic) TFNTwitterCluster *cluster; // @synthesize cluster=_cluster;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(retain, nonatomic) TFNTwitterTweetPrompt *tweetPrompt; // @synthesize tweetPrompt=_tweetPrompt;
@property(retain, nonatomic) TFNTwitterFollowPrompt *followPrompt; // @synthesize followPrompt=_followPrompt;
@property(retain, nonatomic) TFNTwitterFeedbackModule *feedbackModule; // @synthesize feedbackModule=_feedbackModule;
@property(retain, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(nonatomic) _Bool isPinned; // @synthesize isPinned=_isPinned;
@property(retain, nonatomic) id <TFNTwitterStatusBanner> banner; // @synthesize banner=_banner;
@property(retain, nonatomic) NSString *attachmentTombstoneButtonAction; // @synthesize attachmentTombstoneButtonAction=_attachmentTombstoneButtonAction;
@property(retain, nonatomic) NSURL *attachmentTombstoneCTAURL; // @synthesize attachmentTombstoneCTAURL=_attachmentTombstoneCTAURL;
@property(nonatomic) struct _NSRange attachmentTombstoneCTARange; // @synthesize attachmentTombstoneCTARange=_attachmentTombstoneCTARange;
@property(retain, nonatomic) NSAttributedString *attachmentTombstoneLabel; // @synthesize attachmentTombstoneLabel=_attachmentTombstoneLabel;
@property(nonatomic, getter=isTombstoneDismissed) _Bool tombstoneDismissed; // @synthesize tombstoneDismissed=_tombstoneDismissed;
@property(copy, nonatomic) NSString *contextReasonText; // @synthesize contextReasonText=_contextReasonText;
@property(copy, nonatomic) NSString *contextReasonIconType; // @synthesize contextReasonIconType=_contextReasonIconType;
@property(nonatomic, getter=isRecommendedByMagicRecs) _Bool recommendedByMagicRecs; // @synthesize recommendedByMagicRecs=_recommendedByMagicRecs;
@property(copy, nonatomic) NSArray *highlightContextMatchedTrends; // @synthesize highlightContextMatchedTrends=_highlightContextMatchedTrends;
@property(copy, nonatomic) NSString *highlightContextType; // @synthesize highlightContextType=_highlightContextType;
@property(retain, nonatomic) id <TFNTwitterStatusSocialContext> socialContext; // @synthesize socialContext=_socialContext;
@property(nonatomic) long long timelineSortIndex; // @synthesize timelineSortIndex=_timelineSortIndex;
@property(retain, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext; // @synthesize timelineEntryContext=_timelineEntryContext;
@property(nonatomic) unsigned long long statusDisplayType; // @synthesize statusDisplayType=_statusDisplayType;
@property(readonly, nonatomic) _Bool didPrepare; // @synthesize didPrepare=_didPrepare;
@property(nonatomic) __weak TFNTwitterStatus *outerCollectionStatus; // @synthesize outerCollectionStatus=_outerCollectionStatus;
@property(retain, nonatomic) NSArray *collectionItems; // @synthesize collectionItems=_collectionItems;
@property(retain, nonatomic) NSString *collectionURL; // @synthesize collectionURL=_collectionURL;
@property(nonatomic) long long collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSDate *fakeDate; // @synthesize fakeDate=_fakeDate;
@property(readonly, nonatomic) __weak TFNTwitterStatus *retweetingStatus; // @synthesize retweetingStatus=_retweetingStatus;
@property(retain, nonatomic) TFNTwitterStatus *retweetedStatus; // @synthesize retweetedStatus=_retweetedStatus;
@property(retain, nonatomic) TFNTwitterPromotedCardVariant *promotedCardVariant; // @synthesize promotedCardVariant=_promotedCardVariant;
@property(retain, nonatomic) TFNTwitterCampaignMetadata *campaignMetadata; // @synthesize campaignMetadata=_campaignMetadata;
@property(retain, nonatomic) TFNTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(retain, nonatomic) TFNTwitterStatus *quotedStatus; // @synthesize quotedStatus=_quotedStatus;
@property(nonatomic) long long quoteID; // @synthesize quoteID=_quoteID;
@property(readonly, nonatomic) TFNTwitterCanonicalStatus *canonicalStatus; // @synthesize canonicalStatus=_canonicalStatus;
@property(retain, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo; // @synthesize feedbackInfo=_feedbackInfo;
@property(readonly, nonatomic, getter=isDismissing) _Bool dismissing;
- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)dictionaryValueForMutableCopyIncludingContextObjects:(_Bool)arg1;
- (id)_initWithMutableCopyDictionary:(id)arg1 outerCollectionStatus:(id)arg2;
- (id)initWithMutableCopyDictionary:(id)arg1;
- (id)_displayTextKeyForKey:(id)arg1 options:(unsigned long long)arg2;
- (id)mutableCopyIncludingContextObjects:(_Bool)arg1;
@property(readonly, nonatomic) NSString *dynamicAdsScribeValue;
@property(readonly, nonatomic) _Bool isRankedTimelineTweet;
@property(readonly, nonatomic) _Bool isIncompleteQuotedStatus;
@property(readonly, nonatomic) _Bool isMediaForwardQuoteStatus;
@property(readonly, nonatomic) _Bool isQuoteStatus;
@property(readonly, nonatomic) _Bool isQuoted;
@property(readonly, nonatomic) _Bool isSuggestionTypeInjected;
@property(readonly, nonatomic) _Bool isSuggestionTypeRecommended;
@property(readonly, nonatomic) _Bool isSuggested;
@property(readonly, nonatomic, getter=hasContextReason) _Bool contextReason;
@property(readonly, nonatomic) NSString *textWithExpandedURLs;
@property(readonly, nonatomic) NSString *twitterURL;
@property(readonly, nonatomic) NSString *twitterStatusesURL;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property(readonly, nonatomic) NSDictionary *extraScribeItem;
@property(readonly, nonatomic) NSDictionary *scribeItemForQuotedTweet;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
- (void)setIsCurrentlyFirstImpression:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
- (void)setIsDuplicateContentIDInstance:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
- (id)scribeItemContentID;
- (id)scribeItemFirstImpressionID;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, nonatomic) NSDictionary *scribeParameters;
@property(readonly, copy, nonatomic) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property(readonly, nonatomic) _Bool shouldBeRenderedFromRight;
@property(readonly, nonatomic) TFNTwitterStatusConversationContext *conversationContext;
@property(readonly, nonatomic) _Bool isSelfReply;
@property(readonly) _Bool isReplyAndShouldShowSocialContext;
@property(readonly) _Bool isConversationSingleBranchedReplyStatus;
@property(readonly) _Bool isConversationStatus;
@property(readonly, nonatomic) _Bool suppressMediaForward;
@property(readonly, nonatomic) _Bool isVideoPoll;
@property(readonly, nonatomic) _Bool isThreeSixtyVideo;
@property(readonly, nonatomic) _Bool isBroadcast;
@property(readonly, nonatomic) _Bool isLiveEvent;
@property(readonly, nonatomic) _Bool isLiveVideo;
@property(readonly, nonatomic) _Bool isMomentCard;
@property(readonly, nonatomic) _Bool isSurvey;
@property(readonly, nonatomic) _Bool isPoll;
@property(readonly, nonatomic) _Bool isPeriscope;
@property(readonly, nonatomic) _Bool isVine;
@property(readonly, nonatomic) _Bool allowDynamicAd;
@property(readonly, nonatomic) _Bool isVideoUnlockConversationCard;
@property(readonly, nonatomic) _Bool isCardOfCanvasType;
@property(readonly, nonatomic) _Bool isAdsVideoCard;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) _Bool isPhoto;
@property(readonly, nonatomic) _Bool isMediaEntityVideo;
@property(readonly, nonatomic) _Bool isGIF;
@property(readonly, nonatomic) _Bool isAmplifyCardVideo;
@property(readonly, nonatomic) NSString *playerID;
@property(readonly, nonatomic) NSNumber *autoPlayPublisherBlacklistID;
@property(readonly, nonatomic) long long fromUserID;
@property(readonly, nonatomic) NSString *promotedContentImpressionID;
@property(readonly, nonatomic) TFNTwitterStatus *playerStatus;
@property(readonly, nonatomic) NSNumber *playerStatusID;
@property(readonly, nonatomic) UIDragItem *dragItem;
@property(readonly, nonatomic) TFSTwitterCameraMoment *cameraMoment;
@property(readonly, nonatomic) _Bool isSelfThreadStatus;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isUserRecommendation;
@property(readonly, nonatomic) _Bool isRTBCreative;
@property(readonly, nonatomic) _Bool isPoliticalAd;
@property(readonly, nonatomic) _Bool isEarned;
@property(readonly, nonatomic) _Bool hasPromotedContent;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) _Bool isArchiveHighlight;
@property(readonly, nonatomic) _Bool isTopTweet;
@property(readonly, nonatomic) _Bool isTopNews;
@property(readonly, nonatomic) _Bool isPopular;
@property(readonly, nonatomic) _Bool isReply;
@property(readonly, nonatomic) _Bool isRetweetByAuthenticatedUser;
@property(readonly) _Bool isRetweetedReply;
@property(readonly, nonatomic) _Bool isRetweetAndShouldShowSocialContext;
@property(readonly, nonatomic) _Bool isRetweet;
@property(readonly, nonatomic) NSString *retweetedByAccessibilityLabel;
- (id)accessibilityTextForOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) NSArray *mediaForwardStatuses;
@property(readonly, nonatomic) TFNTwitterStatus *mediaForwardStatus;
@property(readonly, nonatomic) TFNTwitterStatus *representeeStatus;
@property(readonly, nonatomic) TFNTwitterStatus *representedStatus;
@property(readonly, nonatomic) NSDate *comparableDate;
@property(readonly, nonatomic) TFNTwitterUser *retweetedBy;
@property(readonly, nonatomic) NSArray *hiddenURLEntities;
@property(readonly, nonatomic) NSArray *hiddenMentionEntities;
@property(readonly, nonatomic) NSArray *usernames;
@property(readonly, nonatomic) unsigned long long displayTextOffset;
@property(readonly, nonatomic) NSString *displayText;
@property(readonly, nonatomic) NSString *fullText;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSNumber *statusIDNumber;
- (id)entityForURL:(id)arg1;
- (id)cardDataSourceForCollectionCardData:(id)arg1;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, copy, nonatomic) NSString *senderDisplayFullName;
@property(readonly, copy, nonatomic) NSString *senderDisplayUsername;
@property(readonly, nonatomic) long long senderID;
@property(readonly, nonatomic) NSNumber *sourceID;
@property(readonly, nonatomic) unsigned long long dismissibleContentType;
- (void)setDismissing:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDismissible) _Bool dismissible;
- (void)removeTaggedUserWithUserID:(long long)arg1;
@property(readonly, nonatomic) _Bool primaryMediaRequiresAttribution;
@property(readonly, nonatomic) NSNumber *mediaScribeType;
@property(readonly, nonatomic) NSNumber *mediaScribePublisherID;
@property(readonly, nonatomic) NSString *mediaPlaylistUrl;
@property(readonly, nonatomic) NSString *mediaScribeContentID;
- (id)mediaUserWithUserIDIsTaggedIn:(long long)arg1;
@property(readonly, nonatomic) NSArray *inlineMediaInfos;
@property(readonly, nonatomic) NSNumber *primaryMediaOwnerID;
@property(readonly, nonatomic) TFSTwitterUserReference *primaryMediaOwnerReference;
@property(readonly, nonatomic) TFNTwitterMediaInfo *primaryMediaInfo;
@property(readonly, nonatomic) long long primaryCardType;
@property(readonly, nonatomic) unsigned long long primaryMediaType;
@property(readonly, nonatomic) NSString *primaryMediaVideoURL;
@property(readonly, nonatomic) NSString *playerCardStreamURL;
@property(readonly, nonatomic) _Bool isFollowForwardTweet;
@property(nonatomic) unsigned long long autoExpandMode;
@property(nonatomic) _Bool hasRecordedDwellImpression;
@property(nonatomic) _Bool hasRecordedImpression;
@property(readonly, nonatomic) _Bool seenAsFavorited;
@property(readonly, nonatomic) _Bool seenAsRetweeted;
@property(nonatomic) unsigned long long searchResultType;
- (void)_tfn_removeObserverForChildStatus:(id)arg1;
- (void)_tfn_removeObserverForQuotedStatus;
- (void)_removeObserverForCanonicalStatus;
- (void)_tfn_addObserverForChildStatus:(id)arg1;
- (void)_tfn_addObserverForQuotedStatus;
- (void)_addObserverForCanonicalStatus;
- (id)displayTextPlaceRangesForOptions:(unsigned long long)arg1;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)arg1;
- (id)displayTextHashflagsForOptions:(unsigned long long)arg1;
- (id)displayTextURLRangesForOptions:(unsigned long long)arg1;
- (id)displayTextRangesForOptions:(unsigned long long)arg1;
- (id)_displayText;
- (id)displayTextForOptions:(unsigned long long)arg1;
- (void)updateCollectionItemsWithStatuses:(id)arg1;
@property(readonly, nonatomic) long long selfThreadID;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) _Bool isWithheld;
@property(nonatomic) _Bool retweetChangePending;
@property(nonatomic) _Bool retweetedByLoadingAccount;
@property(nonatomic) _Bool favoriteChangePending;
@property(nonatomic) _Bool favoritedByLoadingAccount;
@property(readonly, nonatomic) NSString *supplementalLanguage;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *withheldScope;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldEntities;
@property(readonly, copy, nonatomic) NSString *withheldText;
@property(readonly, nonatomic) NSArray *withheldInCountries;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(nonatomic) long long replyCount;
@property(nonatomic) long long favoriteCount;
@property(nonatomic) long long retweetCount;
@property(nonatomic) long long retweetID;
@property(readonly, nonatomic) unsigned long long encodedDisplayTextLength;
@property(readonly, nonatomic) _Bool isLifelineAlert;
@property(readonly, nonatomic) _Bool isPossiblySensitiveEditable;
@property(readonly, nonatomic) _Bool isPossiblySensitive;
@property(nonatomic, getter=isConversationMuted) _Bool conversationMuted;
@property(readonly, nonatomic) _Bool isConversationMuted;
@property(readonly, nonatomic) TFNTwitterCardData *cardData;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
@property(readonly, nonatomic) TFNTwitterGeotag *geotag;
- (long long)quotedStatusID;
@property(readonly, nonatomic) NSString *inReplyToUsername;
@property(readonly, nonatomic) long long inReplyToUserID;
@property(readonly, nonatomic) long long inReplyToStatusID;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TFNTwitterUser *fromUser;
@property(readonly, nonatomic) NSString *originalText;
@property(readonly, nonatomic) long long statusID;
- (void)setCanonicalStatus:(id)arg1;
- (void)_initDerivedSocialContext;
- (_Bool)_shouldOmitCardURLForCardData:(id)arg1;
- (id)_encodedDisplayText;
- (_Bool)updateEntitiesWithTransaction:(id)arg1;
- (_Bool)insertIntoStatusesWithTransaction:(id)arg1 forShadowTable:(_Bool)arg2 error:(id *)arg3;
- (void)loadMyRetweetWithResultSet:(id)arg1 columnIndex:(long long *)arg2;
- (id)initWithResultSet:(id)arg1 columnIndex:(long long *)arg2;
- (id)allUsers;
- (void)_loadTimelinePlistDictionary:(id)arg1 statuses:(id)arg2 users:(id)arg3 outerCollectionStatus:(id)arg4;
- (id)_statusWithTimelinePlistDictionary:(id)arg1 statuses:(id)arg2 users:(id)arg3 outerCollectionStatus:(id)arg4;
- (id)statusWithTimelinePlistDictionary:(id)arg1 statuses:(id)arg2 users:(id)arg3;
- (id)timelinePlistDictionaryValue;
- (id)_tfn_displayTextModelForOptions:(unsigned long long)arg1;
- (id)attributedTextModelForOptions:(unsigned long long)arg1 withFont:(id)arg2 boldFont:(id)arg3 lineHeight:(double)arg4 darkBackground:(_Bool)arg5 defaultTextColor:(id)arg6 linkTextColor:(id)arg7 highlighted:(_Bool)arg8 truncationString:(id)arg9 cachingEnabled:(_Bool)arg10;
- (long long)attributedDisplayTextHeightForOptions:(unsigned long long)arg1 withWidth:(double)arg2 font:(id)arg3 boldFont:(id)arg4 lineHeight:(double)arg5 darkBackground:(_Bool)arg6 defaultTextColor:(id)arg7 linkTextColor:(id)arg8 truncationString:(id)arg9 cachingEnabled:(_Bool)arg10;
- (void)updateEntityMediaWithMediaIDToAltTextDictionary:(id)arg1;
- (void)updateEntityURLsForURL:(id)arg1 withHTMLTitle:(id)arg2;
- (_Bool)isRelatedToUser:(id)arg1;
- (_Bool)isGap;
- (_Bool)isNotADummyStatus;
- (long long)compare:(id)arg1;
- (long long)reverseCompare:(id)arg1;
- (void)prepareWithAuthenticatedAccountUserID:(long long)arg1;
- (void)replaceCanonicalStatusForAssimilation:(id)arg1;
- (void)assimilateLivePipelineEventPayload:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *unifiedID;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2 isAdaptedFromURTModel:(_Bool)arg3;
- (id)initWithJSONDictionary:(id)arg1 users:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)_initWithJSONDictionary:(id)arg1 users:(id)arg2 statusID:(long long)arg3 outerCollectionStatus:(id)arg4 isAdaptedFromURTModel:(_Bool)arg5;
- (id)_initWithJSONDictionary:(id)arg1 users:(id)arg2 statusID:(long long)arg3 isAdaptedFromURTModel:(_Bool)arg4;
- (id)initWithCanonicalStatus:(id)arg1 isDefinitiveObject:(_Bool)arg2;
- (id)initWithCanonicalStatus:(id)arg1;
- (id)init;
- (struct CGSize)mediaDimensionsFromGifVineWithAccount:(id)arg1;
- (id)renderForMediaDimensions:(struct CGSize)arg1;
- (id)momentsRangesWithOptions:(unsigned long long)arg1 truncationRange:(id)arg2;
- (id)momentsDisplayAttributedStringWithOptions:(unsigned long long)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 truncationRange:(id)arg5 hasCTA:(_Bool)arg6;
- (_Bool)_rangeHasColisionWithHashflag:(struct _NSRange)arg1 options:(unsigned long long)arg2;
- (_Bool)_removeTrailingCharacterSet:(id)arg1 fromAttributedString:(id)arg2;
- (_Bool)_removeTrailingCharacterSet:(id)arg1 fromString:(id)arg2;
- (id)momentsDisplayTextWithOptions:(unsigned long long)arg1;
- (_Bool)shouldOmitCollectionLinkForAccount:(id)arg1;
- (_Bool)shouldShowCollectionCarouselForAccount:(id)arg1;
- (id)viewModelUpdatedWithIsConversationAncestor:(_Bool)arg1 isConversationPrecededByAncestor:(_Bool)arg2;
@property(readonly, nonatomic, getter=displayAsSelfThreadTweet) _Bool selfThreadTweet;
- (id)representedFromUser;
- (unsigned long long)viewCount;
- (double)pillViewTimeInterval;
- (unsigned long long)playerIconViewTypeWithStickerBadgeEnabled:(_Bool)arg1 threeSixtyVideoEnabled:(_Bool)arg2 bumperPrerollEnabled:(_Bool)arg3 isVideoAd:(_Bool)arg4;
@property(readonly, nonatomic) id <T1InlineMediaViewModel> inlineMediaViewModel;
@property(readonly, nonatomic) NSString *representedFromUserName;
@property(readonly, nonatomic) long long representedFromUserID;
@property(readonly, nonatomic) _Bool displayAsFollowForwardTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTimelineTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTweet;
@property(readonly, nonatomic) _Bool displayAsNewsCameraTweet;
@property(readonly, nonatomic) _Bool isPossiblySensitiveViewModel;
@property(readonly, nonatomic) _Bool displayAsWithheld;
@property(readonly, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) long long displayReplyCount;
@property(readonly, nonatomic) long long displayRetweetCount;
@property(readonly, nonatomic) long long displayFavoriteCount;
@property(readonly, nonatomic) _Bool displayAsRetweeted;
@property(readonly, nonatomic) _Bool displayAsFavorited;
@property(readonly, nonatomic) id <T1StatusViewModel> quotedStatusViewModel;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)cardEvent;
- (_Bool)isAttachmentTypePhotoOrVideo:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *advertiserName;
@property(readonly, nonatomic) _Bool isFromUserAffiliated;
@property(readonly, nonatomic) _Bool isFromUserUsernameless;
@property(readonly, nonatomic) _Bool isFromUserVerified;
@property(readonly, nonatomic) _Bool isFromUserProtected;
@property(readonly, nonatomic) _Bool isTweetedByAuthenticatedAccount;
@property(readonly, nonatomic) NSString *fromUserFullName;
@property(readonly, nonatomic) NSString *fromUserName;
@property(readonly, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) NSString *designatorImageUrl;
@property(readonly, nonatomic) NSString *designatorString;
- (void)syncLastDisplayCounts;
- (void)setLastDisplayReplyCount:(long long)arg1;
@property(readonly, nonatomic) long long lastDisplayReplyCount;
- (void)setLastDisplayRetweetCount:(long long)arg1;
@property(readonly, nonatomic) long long lastDisplayRetweetCount;
- (void)setLastDisplayFavoriteCount:(long long)arg1;
@property(readonly, nonatomic) long long lastDisplayFavoriteCount;
@property(readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;
@property(readonly, nonatomic) TFNTwitterStatus *backingStatus;
@property(readonly, copy, nonatomic) NSString *playerFactoryIdentifier;
- (void)_t1_setupRetweetActionSheet:(id)arg1 sourceInfo:(id)arg2;
- (void)t1_retweetWithController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3 account:(id)arg4 scribePage:(id)arg5 scribeParameters:(id)arg6 retweetActionSheetBlock:(CDUnknownBlockType)arg7 undoRetweetActionSheetBlock:(CDUnknownBlockType)arg8;
- (_Bool)shouldShowQuotedTweetForAccount:(id)arg1;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)arg1 forAccount:(id)arg2;
- (id)socialContextURL;
- (id)_socialBadgeImageNameForContextReason;
- (id)socialBadgeImageNameForDarkBackground:(_Bool)arg1;
- (id)socialBadgeImageForDarkBackground:(_Bool)arg1;
- (_Bool)socialTextIsActivityCount;
- (id)_socialActivityName;
- (id)conversationSocialText;
- (id)socialText;
- (id)_phraseForHighlightContextType;
- (id)_socialText;
@property(readonly, nonatomic) _Bool hasNonConversationSocialText;
- (id)tappableSocialContextForAccount:(id)arg1;
- (id)attributedDisplayTextWithFont:(id)arg1 color:(id)arg2 selectedRanges:(id)arg3 options:(unsigned long long)arg4 account:(id)arg5;
- (unsigned long long)_displayTextOptionsForAccount:(id)arg1 viewController:(id)arg2;
- (id)tweetDetailsTextWithAccount:(id)arg1 viewController:(id)arg2;
- (_Bool)shouldShowVideoViewCountForAccount:(id)arg1;
- (_Bool)_shouldRemoveCardForAccount:(id)arg1;
- (_Bool)shouldOpenMediaContentViewControllerForAccount:(id)arg1;
- (id)updatedScribeParameters:(id)arg1 withAccount:(id)arg2;
- (_Bool)hasMediaForAccount:(id)arg1;
- (_Bool)shouldOmitCardLinkForAccount:(id)arg1;
- (id)scribeParametersForAccount:(id)arg1;
- (id)scribeItemForAccount:(id)arg1;
- (id)inlineMediaInfosForAccount:(id)arg1;
- (id)primaryMediaInfoForAccount:(id)arg1;
- (unsigned long long)primaryMediaTypeForAccount:(id)arg1;
- (long long)primaryCardTypeForAccount:(id)arg1;
- (id)cardDataForAccount:(id)arg1;
- (id)t1_peopleDiscoveryScribeElement;
- (id)t1_peopleDiscoveryScribeItemForItemIndex:(unsigned long long)arg1;
- (id)_t1_displayTextModelWithheld:(_Bool)arg1;
@property(readonly, nonatomic) TFNTwitterDisplayTextModel *withheldDisplayTextModel; // @dynamic withheldDisplayTextModel;
@property(readonly, nonatomic) TFNTwitterDisplayTextModel *displayTextModel; // @dynamic displayTextModel;
- (id)tfs_debugStrings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_trailingEntityURL;
- (id)stringRepresentation;
- (void)copyToPasteboard;
- (void)hydratePromotedSocialContextUserReferencesWithUsersDictionary:(id)arg1;
- (id)twitterURLForCopy;
- (id)twitterURLForEmail;
- (id)twitterURLForShare;
- (id)emailBodyFromAccount:(id)arg1;
- (id)emailSubject;
- (id)whyYoureSeeingThisAdURLString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isSelfReply) _Bool selfReply;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

