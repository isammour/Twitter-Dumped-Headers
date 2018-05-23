//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1DirectMessageConversation, T1DirectMessageInboxSummaryView, TFNCoalescingUpdater, TFNTwitterAccount;

@interface T1DirectMessageInboxConversationCell : TFNTableViewCell
{
    T1DirectMessageConversation *_conversation;
    TFNTwitterAccount *_account;
    T1DirectMessageInboxSummaryView *_summaryView;
    TFNCoalescingUpdater *_updater;
}

+ (id)_notificationsDisabledImage;
+ (id)_previewTextAttributesForFont:(id)arg1 layoutMetrics:(id)arg2;
+ (id)_defaultPreviewTextAttributesForLayoutMetrics:(id)arg1;
+ (double)standardHeightForLayoutMetrics:(id)arg1;
@property(readonly, nonatomic) TFNCoalescingUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) T1DirectMessageInboxSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1DirectMessageConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)_update;
- (void)_inboxDidUpdate:(id)arg1;
- (void)_conversationDidChange:(id)arg1;
- (void)_avatarDidUpdate:(id)arg1;
- (void)_unsubscribeFromConversationNotifications;
- (void)_subscribeToConversationNotifications;
- (void)_didTapCaret:(id)arg1;
- (void)_didTapThumbnail:(id)arg1;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)willDisplayInDataViewController:(id)arg1;
- (void)refresh;
- (void)prepareForReuse;
- (void)configureWithConversation:(id)arg1 account:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

