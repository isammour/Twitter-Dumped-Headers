//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderContainerViewController.h>

#import <T1Twitter/T1DockingControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoHeaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoInlineComposeControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoPromptInteractionHandlerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoPromptViewDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoPromptsControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoTimelineViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ResizableHeaderContentDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterDockable-Protocol.h>

@class NSArray, NSString, T1LiveVideoHeaderViewController, T1LiveVideoInlineComposeController, T1LiveVideoPromptInteractionHandler, T1LiveVideoPromptView, T1LiveVideoPromptViewsAnimator, T1LiveVideoPromptsController, T1LiveVideoViewControllerTransition, TFNTwitterAVPlayerController, TFNTwitterLiveVideoEvent, TFSTwitterScribeContext, UIView;
@protocol TFNTwitterCardDataSource;

@interface T1LiveVideoViewController : T1ResizableHeaderContainerViewController <T1LiveVideoInlineComposeControllerDelegate, T1LiveVideoTimelineViewControllerDelegate, T1LiveVideoHeaderViewControllerDelegate, T1LiveVideoPromptsControllerDelegate, T1DockingControllerDelegate, T1LiveVideoPromptViewDelegate, T1LiveVideoPromptInteractionHandlerDelegate, T1ResizableHeaderContentDelegate, TFNTwitterDockable>
{
    _Bool _isSponsoredLiveVideoTimelineExperienceEnabled;
    _Bool _hasScribedRemindMeButtonImpression;
    TFNTwitterAVPlayerController *_avPlayerController;
    T1LiveVideoInlineComposeController *_inlineComposeController;
    TFNTwitterLiveVideoEvent *_liveVideoEvent;
    T1LiveVideoViewControllerTransition *_transition;
    NSArray *_liveVideoTimelineViewControllers;
    T1LiveVideoPromptsController *_promptsController;
    T1LiveVideoPromptInteractionHandler *_promptInteractionHandler;
    T1LiveVideoPromptViewsAnimator *_promptViewsAnimator;
    T1LiveVideoPromptView *_currentPromptView;
}

@property(nonatomic) __weak T1LiveVideoPromptView *currentPromptView; // @synthesize currentPromptView=_currentPromptView;
@property(nonatomic) _Bool hasScribedRemindMeButtonImpression; // @synthesize hasScribedRemindMeButtonImpression=_hasScribedRemindMeButtonImpression;
@property(nonatomic) _Bool isSponsoredLiveVideoTimelineExperienceEnabled; // @synthesize isSponsoredLiveVideoTimelineExperienceEnabled=_isSponsoredLiveVideoTimelineExperienceEnabled;
@property(retain, nonatomic) T1LiveVideoPromptViewsAnimator *promptViewsAnimator; // @synthesize promptViewsAnimator=_promptViewsAnimator;
@property(retain, nonatomic) T1LiveVideoPromptInteractionHandler *promptInteractionHandler; // @synthesize promptInteractionHandler=_promptInteractionHandler;
@property(retain, nonatomic) T1LiveVideoPromptsController *promptsController; // @synthesize promptsController=_promptsController;
@property(retain, nonatomic) NSArray *liveVideoTimelineViewControllers; // @synthesize liveVideoTimelineViewControllers=_liveVideoTimelineViewControllers;
@property(retain, nonatomic) T1LiveVideoViewControllerTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) TFNTwitterLiveVideoEvent *liveVideoEvent; // @synthesize liveVideoEvent=_liveVideoEvent;
@property(retain, nonatomic) T1LiveVideoInlineComposeController *inlineComposeController; // @synthesize inlineComposeController=_inlineComposeController;
- (void).cxx_destruct;
- (id)_t1_customTitleColorForTimelineAtIndex:(long long)arg1;
- (_Bool)_t1_isSponsoredLiveVideoTimelineExperienceEnabledForTimelineAtIndex:(long long)arg1;
- (void)_t1_scribePromptEventWithAction:(id)arg1 element:(id)arg2 prompt:(id)arg3;
- (void)_t1_scribeRemindMeButtonImpression;
- (void)_t1_scribeRemindMeButtonImpressionIfNeededAfterUpdatingLiveVideoEvent:(id)arg1 toNewLiveVideoEvent:(id)arg2;
- (void)_t1_updateScribeContext;
- (id)_t1_liveVideoEventScribeDetailsForTimelineViewController:(id)arg1;
- (id)_t1_scribeEventMetadataForTimelineViewController:(id)arg1;
- (id)_t1_scribeParametersForTimelineViewController:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribePage;
- (id)scribe;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;
- (_Bool)t1_showsComposeAction;
- (void)disposeDockedVideo;
- (void)pauseDockedVideo;
- (void)playDockedVideo;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, nonatomic) TFNTwitterAVPlayerController *avPlayerController; // @synthesize avPlayerController=_avPlayerController;
@property(readonly, nonatomic) _Bool isDockedVideoPlaying;
@property(readonly, nonatomic) _Bool dockedViewContainsVideo;
@property(readonly, nonatomic) CDUnknownBlockType undockActionBlock;
@property(readonly, nonatomic) UIView *dockableView;
- (void)liveVideoPromptInteractionHandler:(id)arg1 didCompleteInteractionWithPrompt:(id)arg2;
- (void)userDidTapCloseButtonOnPromptView:(id)arg1;
- (void)userDidInteractWithPromptView:(id)arg1;
- (void)promptsController:(id)arg1 updatePrompt:(id)arg2;
- (_Bool)promptsController:(id)arg1 hidePrompt:(id)arg2;
- (_Bool)promptsController:(id)arg1 showPrompt:(id)arg2;
- (void)willDockWithDockingController:(id)arg1;
- (_Bool)contentViewControllerShouldAutoHideNavigationBar:(id)arg1;
- (id)contentViewController:(id)arg1 badgeImageInfoForItemAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 customTitleColorAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 customHighlightedTitleColorAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForContentViewController:(id)arg1;
- (void)contentViewController:(id)arg1 didSelectViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (_Bool)canCollapseHeader;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)resizableHeaderViewControllerDidRequestRefresh:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)arg1;
- (void)liveVideoHeaderViewController:(id)arg1 videoProgramDateTimeChangedForPlayerController:(id)arg2;
- (void)liveVideoHeaderViewControllerDidTapCloseButton:(id)arg1;
- (void)liveVideoHeaderViewController:(id)arg1 didRequestToDockVideoWithPlayerController:(id)arg2;
- (void)liveVideoHeaderViewController:(id)arg1 willPresentFullscreenPlayerViewController:(id)arg2;
- (void)liveVideoHeaderViewController:(id)arg1 willExpandHeaderAnimated:(_Bool)arg2 initiatedByUserInteraction:(_Bool)arg3;
- (_Bool)canPresentFullscreenPlayerFromLiveVideoHeaderViewController:(id)arg1;
- (void)liveVideoTimelineViewController:(id)arg1 didRequestCurrentVideoTimestampMSWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)liveVideoTimelineShouldStopPollingWhenDisappearing:(id)arg1;
- (void)liveVideoTimelineLoadTopDidEnd:(id)arg1;
- (void)liveVideoTimelineViewController:(id)arg1 didUpdateWithPrompts:(id)arg2;
- (void)liveVideoTimelineViewController:(id)arg1 didUpdateWithNewEvent:(id)arg2;
- (void)inlineComposeController:(id)arg1 didFailToSendCurrentComposition:(id)arg2;
- (void)inlineComposeController:(id)arg1 didSendStatus:(id)arg2;
- (void)inlineComposeControllerDidBeginEditing:(id)arg1;
- (id)inlineComposeControllerSemanticCoreIDForSelectedTimeline:(id)arg1;
- (double)inlineComposeController:(id)arg1 autocompleteStartingPositionInContainer:(id)arg2;
- (id)inlineComposeControllerInitialComposeString:(id)arg1;
- (void)_t1_updatePromptViewFrame;
- (void)_t1_displayInlineCompose;
- (_Bool)_t1_isInlineComposeDisplayed;
- (void)_t1_setupInlineComposeControllerIfNecessary;
- (id)_t1_selectedLiveVideoTimelineViewController;
- (void)_t1_disposeHeaderViewController;
- (void)_t1_setupTimelinesWithVariants:(id)arg1;
- (id)_t1_newLiveVideoTimeline;
- (void)_t1_setupNavigationButtons;
- (_Bool)_t1_isPresentedModally;
- (void)_t1_updateInsets;
@property(readonly, nonatomic, getter=_t1_liveVideoHeaderViewController) T1LiveVideoHeaderViewController *liveVideoHeaderViewController;
- (void)resetPlayerOwnershipAndModalTransition;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (_Bool)shouldPreventAmbientNotificationBanners;
- (void)tfn_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfn_presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tfn_contentScrollViewWillScrollToTop:(id)arg1;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (void)tfn_previewingStateDidChange;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dealloc;
- (_Bool)tfn_prefersNavigationBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHeaderViewController:(id)arg1 contentDelegate:(id)arg2 contentStyle:(long long)arg3 account:(id)arg4;
- (id)initWithLiveVideoEvent:(id)arg1 account:(id)arg2 playerSource:(id)arg3 playerSessionSource:(id)arg4 transitionObject:(id)arg5;
- (id)initWithLiveVideoEvent:(id)arg1 account:(id)arg2;
- (id)initWithLiveVideoEventID:(long long)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGPoint dockedViewCustomInitialPosition;
@property(readonly, nonatomic) long long dockedViewSwipeAction;
@property(readonly, nonatomic) long long dockedViewTapAction;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly) Class superclass;

@end

