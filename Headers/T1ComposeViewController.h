//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/NSLayoutManagerDelegate-Protocol.h>
#import <T1Twitter/T1AltTextViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1CameraContainerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeCardPreviewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeReplyUsersTableViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeRichTextViewDelegate-Protocol.h>
#import <T1Twitter/T1ComposeRichTextViewPlaceDataSource-Protocol.h>
#import <T1Twitter/T1ComposeTagLocationViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1MediaAttachmentsViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1PlacePickerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1VideoMonetizationSettingsViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1VideoTrimmerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNCharacterCountProgressDataSource-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>
#import <T1Twitter/TFNTwitterAutoGeotaggerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterPOISuggesterDelegate-Protocol.h>
#import <T1Twitter/TPXAnimationObserver-Protocol.h>
#import <T1Twitter/UIDropInteractionDelegate-Protocol.h>

@class NSArray, NSString, T1AutocompleteViewController, T1ComposeAccountAvatarImageView, T1ComposeCardPreviewController, T1ComposePollingCardPreviewController, T1ComposeSessionConfig, T1ComposeTagLocationViewController, T1ComposeTextViewDelegate, T1ComposeTooltipViewController, T1FoundMediaConfiguration, T1FoundMediaController, T1MediaAttachmentsViewController, TFNButton, TFNCharacterCountProgressView, TFNTwitterAccount, TFNTwitterAutoGeotagger, TFNTwitterComposePlaceStore, TFNTwitterComposition, TFNTwitterCompositionAttachments, TFNTwitterCompositionGeotagSession, TFNTwitterPOISuggester, TFNTwitterTextViewAutocompleteController, TFSMainThreadRunLoopDeferredTask, TFSTwitterLocation, UIViewController;
@protocol T1ComposeViewControllerDelegate;

@interface T1ComposeViewController : TFNViewController <T1ComposeCardPreviewControllerDelegate, T1ComposeRichTextViewDelegate, TFNLayoutMetricsEnvironment, T1PlacePickerViewControllerDelegate, T1ComposeRichTextViewPlaceDataSource, TFNTwitterAutoGeotaggerDelegate, TPXAnimationObserver, T1CameraContainerViewControllerDelegate, T1VideoTrimmerViewControllerDelegate, T1MediaAttachmentsViewControllerDelegate, T1AltTextViewControllerDelegate, T1ComposeTagLocationViewControllerDelegate, T1ComposeReplyUsersTableViewControllerDelegate, TFNTwitterPOISuggesterDelegate, T1VideoMonetizationSettingsViewControllerDelegate, TFNTooltipDelegate, NSLayoutManagerDelegate, TFNCharacterCountProgressDataSource, TFNTwitterAuthenticated, T1JumpBackToHomeTimelineBehavior, UIDropInteractionDelegate>
{
    TFNTwitterAccount *_originalAccount;
    T1ComposeTextViewDelegate *_textViewDelegate;
    struct {
        unsigned int once:1;
        unsigned int dismissing:1;
        unsigned int sent:1;
    } _flags;
    CDStruct_f33a756f _scribeFlags;
    T1MediaAttachmentsViewController *_attachmentsViewController;
    _Bool _skipScribeOfNextTextViewBeginEditingEvent;
    T1ComposeTooltipViewController *_tooltipViewController;
    TFNTwitterComposePlaceStore *_placeStore;
    T1ComposeCardPreviewController *_cardPreviewController;
    T1ComposePollingCardPreviewController *_pollingCardPreviewController;
    double _topSpringScrollOffset;
    T1ComposeAccountAvatarImageView *_avatarImageView;
    TFNButton *_alertsButton;
    TFNButton *_draftsButton;
    TFNButton *_foundMediaButton;
    TFNButton *_galleryButton;
    TFNButton *_geoButton;
    TFNButton *_pollButton;
    TFNButton *_sendButton;
    TFNButton *_retweetButton;
    _Bool _cardPreviewTombstoneIfNotDisplayed;
    _Bool _autocompleteSearchEnabled;
    _Bool _shouldShowPhotoStickersCreation;
    _Bool _customCameraEnabled;
    _Bool _dragAndDropEnabled;
    _Bool _showReplySocialContext;
    _Bool _hasIncrementedPlacePickerDisclaimerSeenCount;
    _Bool _needsToBecomeFirstResponderOnViewDidAppear;
    _Bool _showReplyContext;
    TFNTwitterAccount *_account;
    T1FoundMediaController *_foundMediaController;
    id <T1ComposeViewControllerDelegate> _delegate;
    TFNTwitterComposition *_composition;
    T1ComposeSessionConfig *_sessionConfig;
    NSString *_scribePage;
    T1FoundMediaConfiguration *_foundMediaConfiguration;
    UIViewController *_containerViewController;
    NSString *_placeholderText;
    TFNTwitterTextViewAutocompleteController *_autocompleteController;
    T1AutocompleteViewController *_autocompleteViewController;
    CDUnknownBlockType _dismissBlock;
    TFNTwitterAutoGeotagger *_autotagger;
    TFNTwitterPOISuggester *_poiSuggester;
    TFNCharacterCountProgressView *_progressView;
    TFNTwitterCompositionAttachments *_compositionAttachments;
    TFSTwitterLocation *_assetLocation;
    T1ComposeTagLocationViewController *_tagLocationViewController;
    unsigned long long _lastFirstResponderState;
    TFNTwitterCompositionGeotagSession *_geotagSession;
    NSString *_replyContextText;
    NSString *_replySocialContextText;
    NSArray *_overflowViewsArray;
    TFSMainThreadRunLoopDeferredTask *_currentOverflowViewsLayoutTask;
}

@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *currentOverflowViewsLayoutTask; // @synthesize currentOverflowViewsLayoutTask=_currentOverflowViewsLayoutTask;
@property(copy, nonatomic) NSArray *overflowViewsArray; // @synthesize overflowViewsArray=_overflowViewsArray;
@property(retain, nonatomic) NSString *replySocialContextText; // @synthesize replySocialContextText=_replySocialContextText;
@property(retain, nonatomic) NSString *replyContextText; // @synthesize replyContextText=_replyContextText;
@property(nonatomic) _Bool showReplyContext; // @synthesize showReplyContext=_showReplyContext;
@property(retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession; // @synthesize geotagSession=_geotagSession;
@property(nonatomic) _Bool needsToBecomeFirstResponderOnViewDidAppear; // @synthesize needsToBecomeFirstResponderOnViewDidAppear=_needsToBecomeFirstResponderOnViewDidAppear;
@property(nonatomic) unsigned long long lastFirstResponderState; // @synthesize lastFirstResponderState=_lastFirstResponderState;
@property(retain, nonatomic) T1ComposeTagLocationViewController *tagLocationViewController; // @synthesize tagLocationViewController=_tagLocationViewController;
@property(retain, nonatomic) TFSTwitterLocation *assetLocation; // @synthesize assetLocation=_assetLocation;
@property(retain, nonatomic) TFNTwitterCompositionAttachments *compositionAttachments; // @synthesize compositionAttachments=_compositionAttachments;
@property(retain, nonatomic) TFNCharacterCountProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TFNTwitterPOISuggester *poiSuggester; // @synthesize poiSuggester=_poiSuggester;
@property(retain, nonatomic) TFNTwitterAutoGeotagger *autotagger; // @synthesize autotagger=_autotagger;
@property(nonatomic) _Bool hasIncrementedPlacePickerDisclaimerSeenCount; // @synthesize hasIncrementedPlacePickerDisclaimerSeenCount=_hasIncrementedPlacePickerDisclaimerSeenCount;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(readonly, nonatomic) T1AutocompleteViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(readonly, nonatomic) TFNTwitterTextViewAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool showReplySocialContext; // @synthesize showReplySocialContext=_showReplySocialContext;
@property(nonatomic, getter=isDragAndDropEnabled) _Bool dragAndDropEnabled; // @synthesize dragAndDropEnabled=_dragAndDropEnabled;
@property(retain, nonatomic) T1FoundMediaConfiguration *foundMediaConfiguration; // @synthesize foundMediaConfiguration=_foundMediaConfiguration;
@property(nonatomic, getter=isCustomCameraEnabled) _Bool customCameraEnabled; // @synthesize customCameraEnabled=_customCameraEnabled;
@property(nonatomic) _Bool shouldShowPhotoStickersCreation; // @synthesize shouldShowPhotoStickersCreation=_shouldShowPhotoStickersCreation;
@property(nonatomic, getter=isAutocompleteSearchEnabled) _Bool autocompleteSearchEnabled; // @synthesize autocompleteSearchEnabled=_autocompleteSearchEnabled;
@property(nonatomic, getter=shouldCardPreviewTombstoneIfNotDisplayed) _Bool cardPreviewTombstoneIfNotDisplayed; // @synthesize cardPreviewTombstoneIfNotDisplayed=_cardPreviewTombstoneIfNotDisplayed;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(retain, nonatomic) T1ComposeSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) __weak id <T1ComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_t1_modalPresentingViewController;
- (void)_t1_presentedDidDismissViewController:(id)arg1;
- (void)_t1_presentedWillDismissViewController:(id)arg1;
- (_Bool)_t1_containsViewController:(id)arg1;
- (void)_t1_presentedWillPresentViewController:(id)arg1;
- (void)didDismissModalViewController:(id)arg1;
- (void)willDismissModalViewController:(id)arg1;
- (void)dismissModalViewController:(id)arg1;
- (void)_t1_presentModalViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 preferredPresentationStyle:(long long)arg4 initialPreferredHeight:(double)arg5;
- (void)presentPopoverModalViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3;
- (void)presentModalViewController:(id)arg1 initialPreferredHeight:(double)arg2;
- (void)presentModalViewController:(id)arg1;
- (void)presentFullscreenModalViewController:(id)arg1;
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_t1_restoreLastFirstResponderStateWhenViewDidAppear;
- (void)_t1_restoreLastFirstResponderStateWhenViewWillAppear;
- (void)_t1_storeLastFirstResponderStateAndResignFirstResponder;
- (void)resignTextViewFirstResponder;
- (void)becomeTextViewFirstResponder;
- (void)_t1_textViewAcceptCurrentTextIfNeeded;
- (_Bool)_t1_preferToBecomeTextViewFirstResponder;
- (_Bool)_t1_preferToResignTextViewFirstResponder;
- (void)updateTextViewFirstResponder;
- (void)showPeriscopeBroadcast;
- (void)_t1_updateQuotedStatus;
- (void)promptToSave:(id)arg1 withActionItems:(id)arg2;
- (void)promptToSave:(id)arg1;
- (void)dismiss:(_Bool)arg1;
- (void)saveDraftAndDismiss:(_Bool)arg1;
- (void)_ensureExpensiveCompressionIsDone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAfterCompressionDialog;
- (void)send;
- (void)showAutocomplete:(_Bool)arg1;
- (void)autocompleteViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)autocompleteViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)autocompleteController:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (void)didRemoveAttachment:(id)arg1;
- (void)didAddAttachment:(id)arg1;
- (void)replaceCompositionAttachments:(id)arg1 animated:(_Bool)arg2;
- (void)saveDraft:(unsigned long long)arg1;
- (void)saveDraft;
- (_Bool)shouldPromptPhotoTagging;
- (void)selectComposeAccountFromView:(id)arg1;
- (_Bool)shouldApplyTopLayoutGuide;
- (void)accountDidUpdate:(id)arg1;
- (id)scribeSectionForMediaAttachment;
- (void)presentFoundMediaViewControllerFromView:(id)arg1;
- (void)attachNonDuplicateImages:(id)arg1;
- (void)_t1_hideOverflowViews;
- (void)_t1_deferred_showOverflowViewsFromIndex:(long long)arg1;
- (void)_t1_showOverflowViewsFromIndex:(long long)arg1;
- (void)_t1_layoutOverflowHighlight;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (double)_t1_scaleFactorForInputLanguage;
- (_Bool)shouldPerformProgressViewIntroAnimation:(id)arg1;
- (long long)remainingCountForWarningDisplayInProgressView:(id)arg1;
- (long long)remainingCharacterCountForProgressView:(id)arg1;
- (long long)currentCharacterCountForProgressView:(id)arg1;
- (void)_t1_updateTextViewWithCompositionText;
- (void)_t1_setupRichTextView;
- (_Bool)areAttachmentsAllowed;
- (_Bool)isDismissing;
- (_Bool)isWorthSending;
- (_Bool)isWorthSaving;
- (void)attachmentsViewControllerDidScroll:(id)arg1;
- (void)attachmentsViewController:(id)arg1 registerView:(id)arg2 forTooltipIdentifier:(id)arg3;
- (double)visibleLowerBoundForAttachmentsViewController:(id)arg1;
- (void)attachmentsViewController:(id)arg1 didTapAltTextForAttachment:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didTapStickerForAttachment:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didTapRemoveAttachment:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didTapAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowAltTextButtonForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowStickerButtonForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowEditButtonForAttachment:(id)arg2;
- (void)cameraContainerViewController:(id)arg1 didAttachVideoAsset:(id)arg2;
- (void)cameraContainerViewController:(id)arg1 didAttachPhotoAsset:(id)arg2;
- (void)cameraContainerViewControllerDidCancel:(id)arg1;
- (void)altTextViewController:(id)arg1 didCompleteWithImageAsset:(id)arg2;
- (void)altTextViewControllerDidCancel:(id)arg1;
- (void)_presentAltTextViewControllerWithMediaAsset:(id)arg1;
- (_Bool)canTrimVideoMediaAsset:(id)arg1;
- (void)_presentCustomCameraWithMediaAssetVideoCapture:(id)arg1;
- (void)presentVideoTrimmerWithMediaAsset:(id)arg1;
- (void)_presentPhotoEditorWithMediaAsset:(id)arg1 withInitialMode:(unsigned long long)arg2;
- (void)presentPhotoEditorWithMediaAsset:(id)arg1;
- (_Bool)canEditPhotoMediaAsset:(id)arg1;
- (void)videoTrimmerViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoTrimmerViewControllerDidCancel:(id)arg1;
- (void)videoTrimmerViewController:(id)arg1 didTrimVideo:(id)arg2;
- (void)filtersViewControllerDidCancel:(id)arg1;
- (void)filtersViewController:(id)arg1 didEditImage:(id)arg2;
- (void)_t1_textInputCurrentInputModeDidChange:(id)arg1;
- (void)_handleTextViewChangeNotification:(id)arg1;
- (void)textDidChange;
- (void)textDidChangeSelection;
- (void)textViewDidEndEditing;
- (void)textViewDidBeginEditing;
- (void)_t1_fontSizeChanged:(id)arg1;
- (void)updateComposerTextFont;
- (id)currentComposerTextFont;
- (void)updatePlaceholderText;
- (id)defaultPlaceholderText;
- (void)placePickerViewControllerDidDisplayDisclaimerCell:(id)arg1;
- (void)placePickerViewControllerShouldDismiss:(id)arg1;
- (void)placePickerViewController:(id)arg1 didChangePreciseLocationState:(_Bool)arg2;
- (void)_removeSelectedPlace;
- (void)placePickerViewController:(id)arg1 didDeselectPlace:(id)arg2;
- (void)placePickerViewController:(id)arg1 didSelectPlace:(id)arg2;
- (void)dismissPlacePicker:(id)arg1;
- (void)presentPlacePicker:(id)arg1;
- (void)composeTagLocationViewController:(id)arg1 didTapButtonWithPlace:(id)arg2 index:(unsigned long long)arg3;
- (void)composeTagLocationViewControllerDidTapSearchButton:(id)arg1;
- (void)composeTagLocationViewControllerDidTapGeoButton:(id)arg1;
- (void)richTextViewDidTapPlaceText:(id)arg1;
- (void)_updateGeoButtonStateForLoading:(_Bool)arg1;
- (void)_reloadGeoButtonState;
- (void)_enableGeotaggingSettingWithCallback:(CDUnknownBlockType)arg1;
- (void)_setAutotaggingStateEnabled:(_Bool)arg1;
- (void)_setupAndPresentPlacePicker;
- (void)_handleGeotagEnabledWithLocation:(id)arg1;
- (void)_handleRealtimeLocation:(id)arg1 locationServicesAvailable:(_Bool)arg2 error:(id)arg3;
- (void)activatePlacePicker;
- (void)_selectedPlaceDidUpdate:(id)arg1;
- (void)richTextView:(id)arg1 didTapMonetizationPromptInRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_fetchVideoMonetizationSetting;
- (_Bool)shouldPromptVideoMonetization;
- (void)videoMonetizationSettingsViewController:(id)arg1 didUpdateSettings:(id)arg2;
- (void)POISuggester:(id)arg1 didCompleteWithPlaces:(id)arg2;
- (void)geoAutotagger:(id)arg1 didCompleteWithPlace:(id)arg2;
- (void)_handleAutotagWithLocation:(id)arg1;
- (void)_autoGeotagComposition;
- (void)_t1_updateLocationView;
- (void)setPlaceStore:(id)arg1;
- (id)placeStore;
- (_Bool)_isUsingTagLocationViewForGeo;
- (void)_updateRichTextViewUseTagLocationView:(_Bool)arg1;
- (void)_suggestPlaces;
- (void)_performGeoLookupWithCallback:(CDUnknownBlockType)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)photoGalleryViewController:(id)arg1 didEndSessionWithAttachments:(id)arg2;
- (void)photoGalleryViewControllerDidCancelSession:(id)arg1;
- (void)foundMediaController:(id)arg1 viewControllerDidCancel:(id)arg2;
- (void)foundMediaController:(id)arg1 viewController:(id)arg2 didSelectFoundMediaItem:(id)arg3;
- (_Bool)shouldEnableGalleryButton;
- (_Bool)shouldEnableFoundMediaButton;
- (void)selectComposeDraftsFromView:(id)arg1;
- (void)showDrafts;
- (void)_updateAssetSavedToLibraryForMediaAsset:(id)arg1;
- (void)attachMediaAsset:(id)arg1 sourceForScribe:(id)arg2;
- (void)_updateAssetLocationWhenRemovingAttachment;
- (void)_updateRichTextView;
- (void)_removeAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
- (_Bool)areAttachmentsCompatibleWithAttachment:(id)arg1;
- (void)_updatePreviewForAttachments;
- (id)attachmentsViewController;
- (void)_setupPreviewForAttachments;
- (void)pollingCardPreviewController:(id)arg1 didHideDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 willHideDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didShowDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 willShowDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didChangeCompositionPollingCard:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didAddChoiceToPollComposeView:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didRemovePollComposeView:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didShowPollComposeView:(id)arg2;
- (_Bool)shouldEnablePollComposeButton;
- (void)_updatePollComposeWithComposition:(id)arg1;
- (void)_setupPollPreview;
- (id)pollingCardPreviewController;
- (_Bool)areMultipleCardURLsAllowed;
- (long long)cardPreviewDisplayMode:(id)arg1;
- (void)cardPreviewController:(id)arg1 didRemoveCardPreviewForReason:(unsigned long long)arg2 withCardData:(id)arg3;
- (void)cardPreviewController:(id)arg1 didShowCardPreviewWithCardData:(id)arg2;
- (void)cardPreviewControllerDidStartFetching:(id)arg1;
- (_Bool)isCardPreviewAllowed;
- (void)_cardPreviewDidUpdate;
- (void)_updateCardPreviewWithComposition:(id)arg1;
- (id)cardPreviewController;
- (void)_setupCardPreview;
- (void)_t1_cleanupReplySocalContextTooltip;
- (void)_t1_initializeReplySocialContextTooltip;
- (void)triggerReplySocialContextTooltip;
- (id)replySocialContextTooltipEventName;
- (id)replySocialContextView;
- (void)_t1_presentReplyUserTableViewController;
- (void)didTapReplySocialContext;
- (void)updateReplySocialContext;
- (void)updateReplyContext;
- (id)_t1_replySocialContextText;
- (void)_t1_updateReplySocialContextText;
- (void)_t1_updateReplyContextText;
- (id)placeForComposeRichTextView:(id)arg1;
- (void)switchComposerToAccount:(id)arg1;
- (void)_updateTargetMaxResolutions:(id)arg1 isResend:(_Bool)arg2;
- (void)_checkLengthAndSend;
- (void)_setupAutocompleteController;
- (void)attemptToDismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)forceDismissAndSaveAsDraft:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mayCancelComposition;
- (void)didCancelComposition;
- (_Bool)pasteImage;
- (void)cancel:(id)arg1 event:(id)arg2;
- (id)_t1_cancelComposerDismissalActionItem;
- (id)_dismissActionItems;
- (void)_ensureAssetsSavedToCameraRoll;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_t1_didTapSendButton:(id)arg1;
- (void)_t1_didTapRetweetButton:(id)arg1;
- (void)pollButtonPressed:(id)arg1;
- (void)galleryButtonPressed:(id)arg1;
- (void)_t1_didTapGeoButton:(id)arg1;
- (void)_t1_didTapFoundMediaButton:(id)arg1;
- (void)_t1_didTapDraftsButton:(id)arg1;
- (void)_t1_didTapAlertsButton:(id)arg1;
- (void)_t1_didTapAvatarImageButton:(id)arg1;
- (void)updateSendButton;
- (void)_t1_updateFoundMediaButton;
- (void)_t1_updatePollComposeButton;
- (void)updateGalleryButton;
- (id)_t1_submitButtonWithTitle:(id)arg1;
- (id)sendButton;
- (id)retweetButton;
- (id)_t1_buttonWithImageName:(id)arg1 selectedImageName:(id)arg2;
- (id)pollButton;
- (id)foundMediaButton;
- (id)geoButton;
- (id)galleryButton;
- (id)draftsButton;
- (id)alertsButton;
- (id)avatarImageView;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
@property(readonly, nonatomic) T1ComposeTooltipViewController *tooltipViewController;
- (id)richTextView;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidLoad;
- (void)replyUsersControllerDidTapDone:(id)arg1;
- (void)replyUsersController:(id)arg1 didExcludeUser:(id)arg2;
- (void)replyUsersController:(id)arg1 didIncludeUser:(id)arg2;
- (_Bool)replyUsersController:(id)arg1 isUserIDExcluded:(id)arg2;
- (_Bool)replyUsersController:(id)arg1 isUserExcluded:(id)arg2;
- (_Bool)replyUsersController:(id)arg1 isUserExcludable:(id)arg2;
- (void)logExtendedMediaDetailsAction:(id)arg1 element:(id)arg2 extendedMediaDetails:(id)arg3;
- (void)_scribeTextViewDidBeginEditing;
- (id)scribeSection;
- (id)scribe;
- (_Bool)_t1_canHandleSendTweetKeyCommand;
- (void)handleSendTweetKeyCommand;
- (id)keyCommands;
@property(readonly, nonatomic) T1FoundMediaController *foundMediaController; // @synthesize foundMediaController=_foundMediaController;
- (_Bool)isFoundMediaEnabled;
- (_Bool)isInlineGeoEnabled;
- (void)_updateAssetLocation:(id)arg1;
- (void)_t1_setAlertMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)compositionDidUpdate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

