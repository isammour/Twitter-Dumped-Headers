//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSString, T1UserRecommendationViewLayoutState, TFNLayoutMetrics, TFNTwitterAccount, TFNTwitterCardViewLayoutState, TFNTwitterUnifiedCardViewLayoutState, UIImage;
@protocol T1StatusViewModel;

@protocol T1StatusViewLayoutDelegate <TFNLayoutableViewLayoutDelegate>
- (TFNLayoutMetrics *)userRecommendationLayoutMetricsForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3 layoutMetrics:(TFNLayoutMetrics *)arg4;
- (TFNLayoutMetrics *)collectionCarouselLayoutMetricsForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3 layoutMetrics:(TFNLayoutMetrics *)arg4;
- (TFNLayoutMetrics *)cardLayoutMetricsForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3 layoutMetrics:(TFNLayoutMetrics *)arg4;
- (long long)cardDisplayModeForOptions:(unsigned long long)arg1;
- (_Bool)shouldShowTweetstormIndicatorForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowWithheldInCountryInterstitialForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowSensitiveContentInterstitialForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowCampaignMetadataForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowTextBodyForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowDirectMessageInlineActionForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowMediaTagsAccountUserFirst;
- (_Bool)shouldShowMediaTagsForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowInlineActionsForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowInfoTextForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowConversationTextForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowSocialTextForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldShowAvatarForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)shouldEnableAvatarInteractionsForViewModel:(id <T1StatusViewModel>)arg1;
- (_Bool)mediaTagsHighlightEnabled;
- (_Bool)mediaTagsSelectionEnabled;
- (_Bool)mediaTagsAreSummarized;
- (_Bool)mediaTagsAreSingleLine;
- (UIImage *)primaryMediaTagsIcon;
- (NSString *)socialTextForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (_Bool)conversationConnectorVisible;
- (unsigned long long)displayTextOptionsForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3 attachmentType:(unsigned long long)arg4;
- (struct CGSize)mediaForwardImageDownloadSizeForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3 layoutMetrics:(TFNLayoutMetrics *)arg4;
- (unsigned long long)forwardCardConsistencyCheckerResultForViewModel:(id <T1StatusViewModel>)arg1 account:(TFNTwitterAccount *)arg2;
- (unsigned long long)secondaryAttachmentTypeForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (unsigned long long)attachmentTypeForViewModel:(id <T1StatusViewModel>)arg1 options:(unsigned long long)arg2 account:(TFNTwitterAccount *)arg3;
- (TFNTwitterUnifiedCardViewLayoutState *)unifiedCardViewLayoutStateForLayoutState:(id)arg1;
- (TFNTwitterCardViewLayoutState *)cardViewLayoutStateForLayoutState:(id)arg1;
- (id)quotedStatusViewLayoutStateForLayoutState:(id)arg1;
- (T1UserRecommendationViewLayoutState *)userRecommendationViewLayoutStateForLayoutState:(id)arg1;
- (id)authorViewLayoutStateForLayoutState:(id)arg1;
@end

