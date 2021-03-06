//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, NSValue, TFNTwitterCompositionCardPreview, TFNTwitterCompositionOriginatorStatusInfo, TFNTwitterCompositionPollingCard, TFNTwitterCompositionQuotedStatusInfo, TFNTwitterCompositionReplyChain, TFNTwitterCompositionReplyChainScribeDetails, TFNTwitterCompositionReplyStatusInfo, TFNTwitterGeotag, TFNTwitterMediaAsset, TFNTwitterVideoMonetizationSettings, TFSTwitterTagSet, TFSTwitterUserReference, TwitterTextParseResults;

@interface TFNTwitterComposition : NSObject <NSCoding>
{
    NSMutableArray *_attachments;
    _Bool _isDraft;
    _Bool _hadFailedSend;
    _Bool _alertMode;
    _Bool _periscopeIsLive;
    _Bool _newsCameraComposition;
    _Bool _needsToCalculateCharCount;
    NSString *_uniqueID;
    TFSTwitterUserReference *_replyToUserReference;
    NSArray *_initiallyMentionedUsers;
    TFNTwitterCompositionReplyStatusInfo *_replyToStatusInfo;
    TFNTwitterCompositionQuotedStatusInfo *_quotedStatusInfo;
    TFNTwitterCompositionOriginatorStatusInfo *_originatorStatusInfo;
    TFNTwitterCompositionReplyChainScribeDetails *_replyChainScribeDetails;
    TFNTwitterGeotag *_geotag;
    NSDate *_createdDate;
    NSDate *_draftsAddedDate;
    NSDate *_outboxAddedDate;
    NSDate *_retryExpiration;
    unsigned long long _draftType;
    NSArray *_excludedReplyUserIDs;
    NSString *_text;
    NSString *_validDisplayText;
    TFSTwitterTagSet *_tagSet;
    NSDictionary *_extraScribeParameters;
    NSDictionary *_mediaScribeParameters;
    TFNTwitterCompositionCardPreview *_cardPreview;
    TFNTwitterCompositionPollingCard *_pollingCard;
    TFNTwitterVideoMonetizationSettings *_videoMonetizationSettings;
    NSString *_periscopeBroadcastID;
    NSString *_periscopeCreatorID;
    NSString *_cameraMomentID;
    unsigned long long _maximumCharacterCount;
    NSDictionary *_engagementMetadata;
    TFNTwitterCompositionReplyChain *_replyChain;
    NSString *_replyChainUniqueID;
    unsigned long long _positionWithinReplyChain;
    NSString *_tweetPromptSourceID;
    NSMutableSet *_mutableSemanticAnnotationIds;
    NSValue *_initialSelectedRangeValue;
    TwitterTextParseResults *_parseResults;
    long long _characterCount;
    NSString *_initialText;
}

+ (id)userReferencesForReplyToStatus:(id)arg1 account:(id)arg2;
@property(retain, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(nonatomic) long long characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) _Bool needsToCalculateCharCount; // @synthesize needsToCalculateCharCount=_needsToCalculateCharCount;
@property(retain, nonatomic) TwitterTextParseResults *parseResults; // @synthesize parseResults=_parseResults;
@property(retain, nonatomic) NSValue *initialSelectedRangeValue; // @synthesize initialSelectedRangeValue=_initialSelectedRangeValue;
@property(retain, nonatomic) NSMutableSet *mutableSemanticAnnotationIds; // @synthesize mutableSemanticAnnotationIds=_mutableSemanticAnnotationIds;
@property(copy, nonatomic) NSString *tweetPromptSourceID; // @synthesize tweetPromptSourceID=_tweetPromptSourceID;
@property(nonatomic) unsigned long long positionWithinReplyChain; // @synthesize positionWithinReplyChain=_positionWithinReplyChain;
@property(copy, nonatomic) NSString *replyChainUniqueID; // @synthesize replyChainUniqueID=_replyChainUniqueID;
@property(retain, nonatomic) TFNTwitterCompositionReplyChain *replyChain; // @synthesize replyChain=_replyChain;
@property(copy, nonatomic) NSDictionary *engagementMetadata; // @synthesize engagementMetadata=_engagementMetadata;
@property(nonatomic) unsigned long long maximumCharacterCount; // @synthesize maximumCharacterCount=_maximumCharacterCount;
@property(copy, nonatomic) NSString *cameraMomentID; // @synthesize cameraMomentID=_cameraMomentID;
@property(nonatomic, getter=isNewsCameraComposition) _Bool newsCameraComposition; // @synthesize newsCameraComposition=_newsCameraComposition;
@property(nonatomic) _Bool periscopeIsLive; // @synthesize periscopeIsLive=_periscopeIsLive;
@property(copy, nonatomic) NSString *periscopeCreatorID; // @synthesize periscopeCreatorID=_periscopeCreatorID;
@property(copy, nonatomic) NSString *periscopeBroadcastID; // @synthesize periscopeBroadcastID=_periscopeBroadcastID;
@property(retain, nonatomic) TFNTwitterVideoMonetizationSettings *videoMonetizationSettings; // @synthesize videoMonetizationSettings=_videoMonetizationSettings;
@property(retain, nonatomic) TFNTwitterCompositionPollingCard *pollingCard; // @synthesize pollingCard=_pollingCard;
@property(retain, nonatomic) TFNTwitterCompositionCardPreview *cardPreview; // @synthesize cardPreview=_cardPreview;
@property(copy, nonatomic) NSDictionary *mediaScribeParameters; // @synthesize mediaScribeParameters=_mediaScribeParameters;
@property(copy, nonatomic) NSDictionary *extraScribeParameters; // @synthesize extraScribeParameters=_extraScribeParameters;
@property(retain, nonatomic) TFSTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
@property(readonly, nonatomic) NSString *validDisplayText; // @synthesize validDisplayText=_validDisplayText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs; // @synthesize excludedReplyUserIDs=_excludedReplyUserIDs;
@property(nonatomic, getter=isAlertMode) _Bool alertMode; // @synthesize alertMode=_alertMode;
@property(nonatomic) _Bool hadFailedSend; // @synthesize hadFailedSend=_hadFailedSend;
@property(nonatomic) unsigned long long draftType; // @synthesize draftType=_draftType;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) NSDate *retryExpiration; // @synthesize retryExpiration=_retryExpiration;
@property(retain, nonatomic) NSDate *outboxAddedDate; // @synthesize outboxAddedDate=_outboxAddedDate;
@property(retain, nonatomic) NSDate *draftsAddedDate; // @synthesize draftsAddedDate=_draftsAddedDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) TFNTwitterGeotag *geotag; // @synthesize geotag=_geotag;
@property(retain, nonatomic) TFNTwitterCompositionReplyChainScribeDetails *replyChainScribeDetails; // @synthesize replyChainScribeDetails=_replyChainScribeDetails;
@property(retain, nonatomic) TFNTwitterCompositionOriginatorStatusInfo *originatorStatusInfo; // @synthesize originatorStatusInfo=_originatorStatusInfo;
@property(retain, nonatomic) TFNTwitterCompositionQuotedStatusInfo *quotedStatusInfo; // @synthesize quotedStatusInfo=_quotedStatusInfo;
@property(retain, nonatomic) TFNTwitterCompositionReplyStatusInfo *replyToStatusInfo; // @synthesize replyToStatusInfo=_replyToStatusInfo;
@property(readonly, nonatomic) NSArray *initiallyMentionedUsers; // @synthesize initiallyMentionedUsers=_initiallyMentionedUsers;
@property(retain, nonatomic) TFSTwitterUserReference *replyToUserReference; // @synthesize replyToUserReference=_replyToUserReference;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (_Bool)canDropAnimatedGIFsToQuoteTweetCount:(unsigned long long)arg1;
- (_Bool)canDropAnimatedGIFsCount:(unsigned long long)arg1;
- (_Bool)canDropImagesCount:(unsigned long long)arg1;
- (_Bool)canAddPoll;
- (_Bool)canAddGIFAttachmentToQuoteTweet;
- (_Bool)canAddGIFAttachment;
- (_Bool)canAddImageAttachment;
- (_Bool)canAddQuoteTweet;
- (unsigned long long)imageAttachmentsCountWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *videoAttachments;
- (_Bool)hasVideoAttachments;
- (_Bool)hasVideoCaptureAttachments;
- (_Bool)hasAnimatedImageAttachments;
- (_Bool)attachmentsNeedRenderingBeforeSend;
- (_Bool)hasVideoImportAttachments;
- (_Bool)hasPeopleTaggableAttachments;
- (_Bool)hasImageAttachments;
- (_Bool)hasAttachments;
@property(readonly, nonatomic) NSArray *imageAttachments;
@property(readonly, nonatomic) TFNTwitterMediaAsset *primaryImageAttachment;
- (_Bool)hasInlineAttachment;
@property(readonly, nonatomic) NSString *attachmentURL;
- (_Bool)isReplyUserExcludable:(id)arg1;
- (void)scribeSendWithScribe:(id)arg1;
- (id)scribeParameters;
- (id)scribePage;
@property(nonatomic) struct _NSRange initialSelectedRange;
@property(readonly, nonatomic) double sendProgress;
- (id)textWithAttachment;
- (_Bool)_tfn_containsMoreThanWhitespace;
- (_Bool)isTextEdited;
- (_Bool)containsMoreThanMentions;
- (_Bool)isWorthSending;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)hasEmptyText;
- (_Bool)isWorthSavingLegacy;
- (_Bool)isWorthSaving;
- (double)scaleFactorForInputLanguage:(id)arg1;
- (long long)_tfn_maximumCharacterCount;
- (id)parseTweet:(id)arg1;
- (long long)indexOfFirstOverflowCharacter;
- (long long)remainingCharacters;
- (long long)alertHashtagLength;
- (long long)_tfn_secureLinkLength;
@property(readonly, nonatomic) NSNumber *replyToStatusIDNumber;
- (_Bool)isPublicReply;
@property(readonly, nonatomic) long long compositionType;
- (_Bool)hasPoll;
@property(readonly, nonatomic, getter=isCardPreviewAllowed) _Bool cardPreviewAllowed;
@property(readonly, nonatomic) _Bool hasCardPreview;
@property(readonly, nonatomic) NSString *commaSeparatedSemanticAnnotationIds;
@property(readonly, nonatomic, getter=isGeotagged) _Bool geotagged;
- (void)_tfn_cleanupAsset:(id)arg1;
@property(readonly, nonatomic) NSSet *semanticAnnotationIds;
- (void)removeAllSemanticAnnotationIds;
- (void)addSemanticAnnotationIds:(id)arg1;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)arg1;
- (void)replaceAttachment:(id)arg1 withAttachment:(id)arg2;
- (void)addAttachment:(id)arg1;
- (id)attachmentForAssetReferencedFromAttachment:(id)arg1;
@property(copy, nonatomic) NSArray *attachments;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_tfn_twitterComposition_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialText:(id)arg1 mentionedUsers:(id)arg2;
- (id)init;
- (id)orderedUserReferencesForReplyFromAccount:(id)arg1;
- (id)initialMentionUserIDs;
- (id)statusesUpdateCommandWithService:(id)arg1 account:(id)arg2 retryTimeout:(double)arg3 networkTransactionMetrics:(id)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (id)engagementMetadataString;
- (id)cardURIParameterForAPIRequest;
- (id)mediaTagsParameterForAPIRequest;
- (id)mediaIDsParameterForAPIRequest;
- (id)geoSearchRequestIDParameterForAPIRequest;
- (id)geotaggingModeParameterForAPIRequest;
- (id)placeIDParameterForAPIRequest;

@end

