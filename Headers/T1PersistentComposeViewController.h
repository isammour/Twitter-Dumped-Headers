//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ComposeViewController.h>

#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1PersistentComposeViewDelgate-Protocol.h>

@class NSString, T1AutocompleteViewController, T1PersistentComposeView, TFNButton, TFSMainThreadRunLoopDeferredTask, UITextView;
@protocol T1PersistentComposeViewControllerDelegate;

@interface T1PersistentComposeViewController : T1ComposeViewController <T1PersistentComposeViewDelgate, T1JumpBackToHomeTimelineBehavior>
{
    _Bool _autosaveDraftsEnabled;
    _Bool _openFullComposeEnabled;
    _Bool _showsOnlyPlaceholder;
    _Bool _canStartEditing;
    _Bool _needsToStartEditing;
    _Bool _needsToTriggerReplySocialContextTooltip;
    TFNButton *_sendReplyButton;
    T1AutocompleteViewController *_autocompleteViewController;
    T1PersistentComposeView *_composeView;
    TFSMainThreadRunLoopDeferredTask *_deferredStartEditingTask;
    TFSMainThreadRunLoopDeferredTask *_deferredTriggerReplySocialContextTooltipTask;
    unsigned long long _triggeringReplySocialContextTooltipSuspendingCount;
}

@property(nonatomic) unsigned long long triggeringReplySocialContextTooltipSuspendingCount; // @synthesize triggeringReplySocialContextTooltipSuspendingCount=_triggeringReplySocialContextTooltipSuspendingCount;
@property(nonatomic) _Bool needsToTriggerReplySocialContextTooltip; // @synthesize needsToTriggerReplySocialContextTooltip=_needsToTriggerReplySocialContextTooltip;
@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *deferredTriggerReplySocialContextTooltipTask; // @synthesize deferredTriggerReplySocialContextTooltipTask=_deferredTriggerReplySocialContextTooltipTask;
@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *deferredStartEditingTask; // @synthesize deferredStartEditingTask=_deferredStartEditingTask;
@property(nonatomic) _Bool needsToStartEditing; // @synthesize needsToStartEditing=_needsToStartEditing;
@property(nonatomic) _Bool canStartEditing; // @synthesize canStartEditing=_canStartEditing;
@property(nonatomic) _Bool showsOnlyPlaceholder; // @synthesize showsOnlyPlaceholder=_showsOnlyPlaceholder;
@property(retain, nonatomic) T1PersistentComposeView *composeView; // @synthesize composeView=_composeView;
@property(nonatomic, getter=isOpenFullComposeEnabled) _Bool openFullComposeEnabled; // @synthesize openFullComposeEnabled=_openFullComposeEnabled;
@property(nonatomic, getter=isAutosaveDraftsEnabled) _Bool autosaveDraftsEnabled; // @synthesize autosaveDraftsEnabled=_autosaveDraftsEnabled;
- (id)autocompleteViewController;
- (void).cxx_destruct;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)scribeSection;
- (void)autocompleteViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)_prepareAutocompleteViewController;
- (void)showAutocomplete:(_Bool)arg1;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowAltTextButtonForAttachment:(id)arg2;
- (void)attachmentsViewControllerDidTapBackground:(id)arg1;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowEditButtonForAttachment:(id)arg2;
- (void)foundMediaController:(id)arg1 viewControllerDidCancel:(id)arg2;
- (void)foundMediaController:(id)arg1 viewController:(id)arg2 didSelectFoundMediaItem:(id)arg3;
- (void)photoGalleryViewControllerDidCancelSession:(id)arg1;
- (void)photoGalleryViewController:(id)arg1 didEndSessionWithAttachments:(id)arg2;
- (_Bool)isInlineGeoEnabled;
- (void)_presentAuthorizedPhotoGalleryViewController:(id)arg1;
- (void)_t1_showPhotoGallery;
- (id)scribeSectionForMediaAttachment;
- (_Bool)areAttachmentsCompatibleWithAttachment:(id)arg1;
- (void)didAddAttachment:(id)arg1;
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)persistentComposeViewDidTapReplySocialContext:(id)arg1;
- (void)persistentComposeViewDidTapFullCompose:(id)arg1;
- (void)persistentComposeViewDidTap:(id)arg1;
- (void)_t1_triggerReplySocialContextTooltip;
- (void)resumeTriggeringReplySocialContextTooltip;
- (void)suspendTriggeringReplySocialContextTooltip;
- (void)_t1_triggerReplySocialContextTooltipIfPossible;
- (id)replySocialContextTooltipEventName;
- (id)replySocialContextView;
- (void)_t1_updateReplySocialContext;
- (void)updateReplySocialContext;
- (void)updateReplyContext;
- (void)updateTextViewFirstResponder;
- (void)layoutMetricsDidChange:(id)arg1;
- (_Bool)_t1_shouldHideButtons;
- (void)_t1_updateButtonsHidden;
- (void)textDidChange;
- (void)textViewDidEndEditing;
- (void)textViewDidBeginEditing;
- (void)updatePlaceholderText;
- (id)defaultPlaceholderText;
- (void)updateComposerTextFont;
- (id)currentComposerTextFont;
- (_Bool)shouldEnableGalleryButton;
- (_Bool)shouldPromptPhotoTagging;
- (id)attachmentsViewController;
- (_Bool)isWorthSaving;
- (void)cancel:(id)arg1 event:(id)arg2;
- (_Bool)_t1_canHandleSendTweetKeyCommand;
- (void)handleSendTweetKeyCommand;
- (id)keyCommands;
- (void)galleryButtonPressed:(id)arg1;
- (void)_t1_didTapReply:(id)arg1;
- (void)_t1_updateComposeButtonBarButtons;
@property(readonly, nonatomic) TFNButton *sendReplyButton; // @synthesize sendReplyButton=_sendReplyButton;
- (id)sendButton;
@property(readonly, nonatomic) UITextView *textView;
- (id)richTextView;
- (void)dismiss:(_Bool)arg1;
- (_Bool)_isCompositionWorthSending;
@property(readonly, nonatomic, getter=isDisplayed) _Bool displayed;
@property(readonly, nonatomic, getter=isEditingText) _Bool editingText;
- (void)endEditing;
- (void)cancelEditing;
- (void)_t1_startEditing;
- (void)startEditing;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_t1_deferred_startEditing;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_t1_updatePreferredContentSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <T1PersistentComposeViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
