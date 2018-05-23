//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>
#import <T1Twitter/T1StatusViewModelCardAdditions-Protocol.h>
#import <T1Twitter/T1StatusViewModelExperimentAdditions-Protocol.h>
#import <T1Twitter/T1StatusViewModelPromotedLoggingAdditions-Protocol.h>
#import <T1Twitter/TFNTwitterCollectionItem-Protocol.h>
#import <T1Twitter/TFNTwitterDismissibleItem-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSString, NSURL, TFNAttributedTextModel, TFNTwitterCampaignMetadata, TFNTwitterCardData, TFNTwitterGeotag, TFNTwitterMediaInfo, TFNTwitterStatus, TFNTwitterStatusConversationContext, TFSTwitterCameraMoment, UIColor, UIFont, UIImage;
@protocol T1InlineMediaViewModel, T1StatusViewModel, TFNTwitterAVPlayerSessionSource;

@protocol T1StatusViewModel <NSObject, TFSTwitterScribableItem, TFNTwitterDismissibleItem, T1StatusViewModelExperimentAdditions, T1StatusViewModelCardAdditions, T1StatusViewModelPromotedLoggingAdditions, TFNTwitterCollectionItem>
@property(readonly, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) NSString *designatorImageUrl;
@property(readonly, nonatomic) NSString *designatorString;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) _Bool isRankedTimelineTweet;
@property(readonly, nonatomic) id <T1InlineMediaViewModel> inlineMediaViewModel;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
@property(readonly, nonatomic) _Bool isTweetedByAuthenticatedAccount;
@property(readonly, nonatomic) _Bool isFromUserUsernameless;
@property(readonly, nonatomic) _Bool isFromUserAffiliated;
@property(readonly, nonatomic) _Bool isFromUserVerified;
@property(readonly, nonatomic) _Bool isFromUserProtected;
@property(readonly, nonatomic) NSURL *attachmentTombstoneCTAURL;
@property(readonly, nonatomic) struct _NSRange attachmentTombstoneCTARange;
@property(readonly, nonatomic) NSAttributedString *attachmentTombstoneLabel;
@property(readonly, nonatomic) NSString *attachmentTombstoneButtonAction;
@property(readonly, nonatomic, getter=isTombstoneDismissed) _Bool tombstoneDismissed;
@property(readonly, nonatomic) NSString *conversationSection;
@property(readonly, nonatomic) _Bool isConversationSingleBranchedReplyStatus;
@property(readonly, nonatomic) _Bool isSelfThreadStatus;
@property(readonly, nonatomic, getter=displayAsSelfThreadTweet) _Bool selfThreadTweet;
@property(readonly, nonatomic) _Bool isConversationPrecededByAncestor;
@property(readonly, nonatomic) _Bool isConversationRoot;
@property(readonly, nonatomic) _Bool isConversationAncestor;
@property(readonly, nonatomic) _Bool isConversationStatus;
@property(readonly, nonatomic) TFNTwitterStatusConversationContext *conversationContext;
@property(readonly, nonatomic) __weak id <T1StatusViewModel> outerCollectionStatus;
@property(readonly, nonatomic) NSArray *collectionItems;
@property(readonly, nonatomic) NSString *collectionURL;
@property(readonly, nonatomic) long long collectionID;
@property(readonly, nonatomic) _Bool displayAsFavorited;
@property(readonly, nonatomic) _Bool displayAsRetweeted;
@property(readonly, nonatomic) NSDictionary *scribeParameters;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, nonatomic) unsigned long long autoExpandMode;
@property(readonly, nonatomic) _Bool displayAsFollowForwardTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTimelineTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTweet;
@property(readonly, nonatomic) _Bool isRTBCreative;
@property(readonly, nonatomic) _Bool isPoliticalAd;
@property(readonly, nonatomic) NSString *advertiserName;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) TFSTwitterCameraMoment *cameraMoment;
@property(readonly, nonatomic) TFNTwitterGeotag *geotag;
@property(readonly, nonatomic) _Bool primaryMediaRequiresAttribution;
@property(readonly, nonatomic) _Bool isMediaEntityVideo;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool suppressMediaForward;
@property(readonly, nonatomic) _Bool isReply;
@property(readonly, nonatomic) unsigned long long primaryMediaType;
@property(readonly, nonatomic) TFNTwitterMediaInfo *primaryMediaInfo;
@property(readonly, nonatomic) NSArray *inlineMediaInfos;
@property(readonly, nonatomic) TFNTwitterCampaignMetadata *campaignMetadata;
@property(readonly, nonatomic) TFNTwitterCardData *cardData;
@property(readonly, nonatomic) _Bool isQuoteStatus;
@property(readonly, nonatomic) id <T1StatusViewModel> quotedStatusViewModel;
@property(readonly, nonatomic) NSString *retweetedByAccessibilityLabel;
@property(readonly, nonatomic) _Bool isRetweet;
@property(readonly, nonatomic) long long lastDisplayReplyCount;
@property(readonly, nonatomic) long long lastDisplayRetweetCount;
@property(readonly, nonatomic) long long lastDisplayFavoriteCount;
@property(readonly, nonatomic) long long displayReplyCount;
@property(readonly, nonatomic) long long displayRetweetCount;
@property(readonly, nonatomic) long long displayFavoriteCount;
@property(readonly, nonatomic) NSString *withheldScope;
@property(readonly, nonatomic) _Bool displayAsNewsCameraTweet;
@property(readonly, nonatomic) _Bool displayAsWithheld;
@property(readonly, nonatomic) _Bool isPinned;
@property(readonly, nonatomic) _Bool isLifelineAlert;
@property(readonly, nonatomic) _Bool isPossiblySensitiveViewModel;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) long long representedFromUserID;
@property(readonly, nonatomic) NSString *representedFromUserName;
@property(readonly, nonatomic) long long fromUserID;
@property(readonly, nonatomic) NSString *fromUserName;
@property(readonly, nonatomic) NSString *fromUserFullName;
@property(readonly, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) long long statusID;
@property(readonly, nonatomic) NSString *unifiedID;
@property(readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;
@property(readonly, nonatomic) TFNTwitterStatus *backingStatus;
- (id <T1StatusViewModel>)viewModelUpdatedWithIsConversationAncestor:(_Bool)arg1 isConversationPrecededByAncestor:(_Bool)arg2;
- (_Bool)isAttachmentTypePhotoOrVideo:(unsigned long long)arg1;
- (TFNAttributedTextModel *)attributedTextModelForOptions:(unsigned long long)arg1 withFont:(UIFont *)arg2 boldFont:(UIFont *)arg3 lineHeight:(double)arg4 darkBackground:(_Bool)arg5 defaultTextColor:(UIColor *)arg6 linkTextColor:(UIColor *)arg7 highlighted:(_Bool)arg8 truncationString:(NSString *)arg9 cachingEnabled:(_Bool)arg10;
- (long long)attributedDisplayTextHeightForOptions:(unsigned long long)arg1 withWidth:(double)arg2 font:(UIFont *)arg3 boldFont:(UIFont *)arg4 lineHeight:(double)arg5 darkBackground:(_Bool)arg6 defaultTextColor:(UIColor *)arg7 linkTextColor:(UIColor *)arg8 truncationString:(NSString *)arg9 cachingEnabled:(_Bool)arg10;
- (NSArray *)displayTextPlaceRangesForOptions:(unsigned long long)arg1;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)arg1;
- (NSArray *)displayTextHashflagsForOptions:(unsigned long long)arg1;
- (NSArray *)displayTextURLRangesForOptions:(unsigned long long)arg1;
- (NSArray *)displayTextRangesForOptions:(unsigned long long)arg1;
- (NSString *)displayTextForOptions:(unsigned long long)arg1;
- (NSString *)accessibilityTextForOptions:(unsigned long long)arg1;
- (NSString *)socialContextURL;
- (UIImage *)socialBadgeImageForDarkBackground:(_Bool)arg1;
- (NSString *)socialText;
- (void)syncLastDisplayCounts;
@end

