//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageAbstractEntryCellDelegate-Protocol.h>

@class NSArray, NSString, T1DirectMessageAbstractConversationEntryCell, T1DirectMessageEntryInterstitialSource, T1DirectMessageEntryInterstitialView, T1DirectMessageUser, TFNTwitterCardView, TFNTwitterCardViewEvent, TFNTwitterStatus, UIImage, UIView, UIViewController;
@protocol TFNDirectMessageCallToAction, TFNDirectMessageEntry, TFNDirectMessageMediaAttachment, TFNDirectMessageTweetAttachment, TFSActiveTextRange;

@protocol T1DirectMessageEntryCellDelegate <T1DirectMessageAbstractEntryCellDelegate>
- (UIViewController *)cardView:(TFNTwitterCardView *)arg1 didFireViewEvent:(TFNTwitterCardViewEvent *)arg2;
- (void)cellDidResize:(T1DirectMessageAbstractConversationEntryCell *)arg1;
- (void)cellDidTapCell:(T1DirectMessageAbstractConversationEntryCell *)arg1;
- (void)cellDidTapShowFullyExpandedSeenByParticipantNames:(T1DirectMessageAbstractConversationEntryCell *)arg1;
- (void)cellDidTapUnmarkAsSpam:(T1DirectMessageAbstractConversationEntryCell *)arg1;
- (void)cellDidTapMarkAsSpam:(T1DirectMessageAbstractConversationEntryCell *)arg1;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didTapCTAButton:(id <TFNDirectMessageCallToAction>)arg2 forEntry:(id <TFNDirectMessageEntry>)arg3;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didTapInterstitial:(T1DirectMessageEntryInterstitialView *)arg2 action:(unsigned long long)arg3 forSource:(T1DirectMessageEntryInterstitialSource *)arg4 entry:(id <TFNDirectMessageEntry>)arg5;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didTapLocationAttachmentForMessage:(id <TFNDirectMessageEntry>)arg2;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didTapTweet:(TFNTwitterStatus *)arg2;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didTapMediaPreviewImage:(UIImage *)arg2 fromRect:(struct CGRect)arg3 forEntry:(id <TFNDirectMessageEntry>)arg4;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didTapActiveRange:(id <TFSActiveTextRange>)arg2 forEntry:(id <TFNDirectMessageEntry>)arg3;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didSelectRetryForMessage:(id <TFNDirectMessageEntry>)arg2 inView:(UIView *)arg3;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didLongPressActiveRange:(id <TFSActiveTextRange>)arg2 forEntry:(id <TFNDirectMessageEntry>)arg3 fromRect:(struct CGRect)arg4 inView:(UIView *)arg5;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didLongPress:(long long)arg2 selection:(NSString *)arg3 inView:(UIView *)arg4;

@optional
- (UIViewController *)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didPreviewMediaAttachment:(id <TFNDirectMessageMediaAttachment>)arg2 of:(id <TFNDirectMessageEntry>)arg3 previewImage:(UIImage *)arg4;
- (UIViewController *)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didPreviewTweetAttachment:(id <TFNDirectMessageTweetAttachment>)arg2 of:(id <TFNDirectMessageEntry>)arg3;
- (UIViewController *)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didPreviewActiveRange:(id <TFSActiveTextRange>)arg2 of:(id <TFNDirectMessageEntry>)arg3;
- (UIViewController *)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didPreviewAvatarForAuthor:(T1DirectMessageUser *)arg2 of:(id <TFNDirectMessageEntry>)arg3 previewImage:(UIImage *)arg4;
- (void)cell:(T1DirectMessageAbstractConversationEntryCell *)arg1 didAccessibilityActivateForEntry:(id <TFNDirectMessageEntry>)arg2 displayRanges:(NSArray *)arg3 inView:(UIView *)arg4;
@end

