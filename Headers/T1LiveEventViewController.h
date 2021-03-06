//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderContainerViewController.h>

#import <T1Twitter/T1ComposeCustomAction-Protocol.h>
#import <T1Twitter/T1DockingControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventHeaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventMetadataSubheaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventPlayerStateControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventTimelineViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventViewControllerScrollingHandlerDelegate-Protocol.h>
#import <T1Twitter/T1LiveVideoInlineComposeControllerDelegate-Protocol.h>
#import <T1Twitter/T1ResizableHeaderContentDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterDockable-Protocol.h>
#import <T1Twitter/TFNTwitterLiveEventTimelineStreamLoaderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSError, NSString, T1EmptyContentViewController, T1LiveEventHeaderViewController, T1LiveEventLoadingView, T1LiveEventMetadataSubheaderViewController, T1LiveEventPlayerStateController, T1LiveEventTopModuleSubheaderViewController, T1LiveEventViewControllerFadeTransitionScrollingHandler, T1LiveEventViewControllerScrollingHandler, T1LiveVideoInlineComposeController, T1StreamPoller, T1WatchBroadcastViewController, TFNFloatingActionButtonItem, TFNTwitterAVPlayerController, TFNTwitterLiveEvent, TFNTwitterLiveEventTimelineStreamLoader, TFNTwitterRichTimelineStream, TFSTwitterScribeContext, UIView, UIVisualEffectView;
@protocol T1LiveEventViewControllerScrollingHandler, TFNTwitterCardDataSource;

@interface T1LiveEventViewController : T1ResizableHeaderContainerViewController <T1ResizableHeaderContentDelegate, T1LiveEventHeaderViewControllerDelegate, T1LiveEventTimelineViewControllerDelegate, T1LiveEventPlayerStateControllerDelegate, TFNTwitterLiveEventTimelineStreamLoaderDelegate, T1LiveVideoInlineComposeControllerDelegate, T1LiveEventMetadataSubheaderViewControllerDelegate, T1DockingControllerDelegate, T1LiveEventViewControllerScrollingHandlerDelegate, T1ComposeCustomAction, TFNTwitterDockable>
{
    _Bool _hasDisplayedPrompt;
    _Bool _videoWasDockedFromFullscreenCompose;
    TFNTwitterLiveEvent *_liveEvent;
    NSArray *_liveEventTimelineViewControllers;
    T1EmptyContentViewController *_emptyContentViewController;
    NSDictionary *_timelineIdentifierToControllerMapping;
    T1LiveEventViewControllerScrollingHandler *_legacyTransitionScrollingHandler;
    T1LiveEventViewControllerFadeTransitionScrollingHandler *_fadeTransitionScrollingHandler;
    id <T1LiveEventViewControllerScrollingHandler> _scrollingHandler;
    T1LiveEventPlayerStateController *_playerStateController;
    T1LiveEventLoadingView *_loadingView;
    T1StreamPoller *_streamPoller;
    TFNTwitterRichTimelineStream *_richTimelineStream;
    TFNTwitterLiveEventTimelineStreamLoader *_timelineStreamLoader;
    T1LiveEventMetadataSubheaderViewController *_metadataSubheaderViewController;
    T1LiveEventTopModuleSubheaderViewController *_topModuleSubheaderViewController;
    TFNFloatingActionButtonItem *_composeNewTweetFABItem;
    T1LiveVideoInlineComposeController *_inlineComposeController;
    UIVisualEffectView *_sensitiveBlurView;
    NSError *_timelineLoadError;
}

@property(nonatomic) _Bool videoWasDockedFromFullscreenCompose; // @synthesize videoWasDockedFromFullscreenCompose=_videoWasDockedFromFullscreenCompose;
@property(retain, nonatomic) NSError *timelineLoadError; // @synthesize timelineLoadError=_timelineLoadError;
@property(retain, nonatomic) UIVisualEffectView *sensitiveBlurView; // @synthesize sensitiveBlurView=_sensitiveBlurView;
@property(nonatomic) _Bool hasDisplayedPrompt; // @synthesize hasDisplayedPrompt=_hasDisplayedPrompt;
@property(retain, nonatomic) T1LiveVideoInlineComposeController *inlineComposeController; // @synthesize inlineComposeController=_inlineComposeController;
@property(retain, nonatomic) TFNFloatingActionButtonItem *composeNewTweetFABItem; // @synthesize composeNewTweetFABItem=_composeNewTweetFABItem;
@property(retain, nonatomic) T1LiveEventTopModuleSubheaderViewController *topModuleSubheaderViewController; // @synthesize topModuleSubheaderViewController=_topModuleSubheaderViewController;
@property(retain, nonatomic) T1LiveEventMetadataSubheaderViewController *metadataSubheaderViewController; // @synthesize metadataSubheaderViewController=_metadataSubheaderViewController;
@property(readonly, nonatomic) TFNTwitterLiveEventTimelineStreamLoader *timelineStreamLoader; // @synthesize timelineStreamLoader=_timelineStreamLoader;
@property(readonly, nonatomic) TFNTwitterRichTimelineStream *richTimelineStream; // @synthesize richTimelineStream=_richTimelineStream;
@property(readonly, nonatomic) T1StreamPoller *streamPoller; // @synthesize streamPoller=_streamPoller;
@property(readonly, nonatomic) T1LiveEventLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) T1LiveEventPlayerStateController *playerStateController; // @synthesize playerStateController=_playerStateController;
@property(retain, nonatomic) id <T1LiveEventViewControllerScrollingHandler> scrollingHandler; // @synthesize scrollingHandler=_scrollingHandler;
@property(retain, nonatomic) T1LiveEventViewControllerFadeTransitionScrollingHandler *fadeTransitionScrollingHandler; // @synthesize fadeTransitionScrollingHandler=_fadeTransitionScrollingHandler;
@property(retain, nonatomic) T1LiveEventViewControllerScrollingHandler *legacyTransitionScrollingHandler; // @synthesize legacyTransitionScrollingHandler=_legacyTransitionScrollingHandler;
@property(retain, nonatomic) NSDictionary *timelineIdentifierToControllerMapping; // @synthesize timelineIdentifierToControllerMapping=_timelineIdentifierToControllerMapping;
@property(retain, nonatomic) T1EmptyContentViewController *emptyContentViewController; // @synthesize emptyContentViewController=_emptyContentViewController;
@property(retain, nonatomic) NSArray *liveEventTimelineViewControllers; // @synthesize liveEventTimelineViewControllers=_liveEventTimelineViewControllers;
@property(retain, nonatomic) TFNTwitterLiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
- (void).cxx_destruct;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)inlineComposeControllerDidReturnFromFullscreen:(id)arg1;
- (void)inlineComposeControllerDidSwitchToFullscreen:(id)arg1;
- (id)inlineComposerControllerCompositionForSelectedTimeline:(id)arg1;
- (id)inlineComposeControllerSemanticCoreIDForSelectedTimeline:(id)arg1;
- (double)inlineComposeController:(id)arg1 autocompleteStartingPositionInContainer:(id)arg2;
- (id)inlineComposeControllerInitialComposeString:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)tfn_floatingActionButtonItems;
- (_Bool)t1_showsComposeAction;
- (unsigned long long)_t1_sensitiveOrBlockedPromptType;
- (void)_t1_displaySensitivePromptIfNeeded;
- (void)_t1_displayInlineCompose;
- (void)_t1_setupInlineComposeControllerIfNecessary;
- (id)_t1_scribeItemForBroadcast:(id)arg1;
- (id)_t1_scribeParameterItemsForLiveEvent:(id)arg1 timelineVariant:(id)arg2 broadcast:(id)arg3;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;
- (void)muteDockedVideo:(_Bool)arg1;
- (void)disposeDockedVideo;
- (void)pauseDockedVideo;
- (void)playDockedVideo;
@property(readonly, nonatomic) _Bool isDockedVideoPlaying;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, nonatomic) long long dockedViewTapAction;
@property(readonly, nonatomic) long long dockedViewSwipeAction;
@property(readonly, nonatomic) struct CGPoint dockedViewCustomInitialPosition;
@property(readonly, nonatomic) _Bool dockedViewContainsVideo;
@property(readonly, nonatomic) CDUnknownBlockType undockActionBlock;
@property(readonly, nonatomic) UIView *dockableView;
- (void)dockingController:(id)arg1 didPerformDockedViewTapAction:(long long)arg2;
- (void)dockingController:(id)arg1 willPerformDockedViewSwipeAction:(long long)arg2;
- (void)didDockWithDockingController:(id)arg1;
- (void)liveEventViewControllerScrollingHandlerShouldUndockViewController:(id)arg1;
- (void)liveEventViewControllerScrollingHandlerShouldDockViewController:(id)arg1;
- (void)liveEventTimelineStreamLoader:(id)arg1 loadFailedWithError:(id)arg2;
- (void)liveEventTimelineStreamLoader:(id)arg1 didUpdateWithEventsDictionary:(id)arg2 carousel:(id)arg3 topModule:(id)arg4 pollingInterval:(double)arg5 timelineID:(id)arg6;
- (void)liveEventMetadataSubheaderViewControllerDidTapAuthorAttribution:(id)arg1 authorUser:(id)arg2;
- (void)liveEventMetadataSubheaderViewControllerDidTapMediaAttribution:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_t1_statusForAttribution;
- (void)liveEventPlayerStateControllerDidRequestPlaybackPause:(id)arg1;
- (void)liveEventPlayerStateControllerDidRequestPlaybackResume:(id)arg1;
- (id)tweetCompositionFromCurrentContext;
- (id)scribeContextForLiveEventTimelineViewController:(id)arg1;
- (void)liveEventTimelineLoadTopDidEnd:(id)arg1;
- (void)liveEventTimelineViewController:(id)arg1 didUpdateWithEvent:(id)arg2 carousel:(id)arg3 topModule:(id)arg4 account:(id)arg5;
- (_Bool)contentViewController:(id)arg1 shouldScrollViewControllerToTop:(id)arg2 atIndex:(long long)arg3;
- (void)contentViewController:(id)arg1 didSelectViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (_Bool)contentViewControllerShouldAutoHideNavigationBar:(id)arg1;
- (id)contentViewController:(id)arg1 badgeImageInfoForItemAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 customTitleColorAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 customHighlightedTitleColorAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)contentViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForContentViewController:(id)arg1;
- (id)scribeContextForLiveEventHeaderViewController:(id)arg1;
- (void)liveEventHeaderViewController:(id)arg1 didTapLiveEventCarouselEntryViewController:(id)arg2;
- (void)liveEventHeaderViewController:(id)arg1 didRemoveLiveEventCarouselEntryViewController:(id)arg2;
- (void)liveEventHeaderViewController:(id)arg1 didFocusLiveEventCarouselEntryViewController:(id)arg2;
- (void)resizableHeaderViewControllerDidRequestRefresh:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateExpandedHeaderHeight:(id)arg1;
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)arg1;
- (long long)dataViewControllerRestorePositionType;
- (_Bool)canCollapseHeader;
- (void)_t1_displayBlockedEmptyContentViewController;
- (void)_t1_updateInsets;
- (void)_t1_updateLoadingTop;
- (void)_t1_updateTopModuleSubheaderViewControllerWithTopModule:(id)arg1 account:(id)arg2;
- (void)_t1_updateMetadataSubheaderViewController;
- (_Bool)_t1_shouldDisplayMetadata;
@property(readonly, nonatomic, getter=_t1_focusedBroadcastViewController) T1WatchBroadcastViewController *focusedBroadcastViewController;
- (id)_t1_eventualFocusedBroadcastViewControllerRespondingToSelector:(SEL)arg1;
- (void)_t1_layoutPullToLoadTopControl;
- (void)_t1_moreButtonTapped:(id)arg1;
- (id)_t1_selectedTimelineVariant;
- (void)_t1_disposeHeaderViewController;
- (void)_t1_addContentNotificationForUpdateIndicator:(id)arg1;
- (void)_t1_setupTimelineViewControllers;
- (void)_t1_didTapErrorLoadingView;
- (void)_t1_showFullscreenFromCarouselEntryViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_t1_newRecurringRefreshTaskForTimelineViewController:(id)arg1;
- (id)_t1_newLegacyLiveEventTimelineWithTimelineVariant:(id)arg1;
- (id)_t1_newLiveEventTimelineWithTimelineVariant:(id)arg1;
- (double)_t1_contentNavigationBarHeight;
- (_Bool)_t1_shouldAutoHideContentNavigationBar;
- (void)_t1_updateNavigationBarTitle;
- (void)_t1_updateNavigationBar;
- (void)_t1_configureUI;
@property(readonly, nonatomic) T1LiveEventHeaderViewController *liveEventHeaderViewController;
- (long long)t1_dockingPresentationOption;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)tfn_previewingStateDidChange;
- (void)tfn_contentScrollViewWillScrollToTop:(id)arg1;
- (void)tfn_contentScrollViewWillBeginDragging:(id)arg1;
- (void)tfn_contentScrollViewWillBeginDecelerating:(id)arg1;
- (void)tfn_contentScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tfn_contentScrollViewDidEndDecelerating:(id)arg1;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (id)tfs_debugStrings;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHeaderViewController:(id)arg1 contentDelegate:(id)arg2 contentStyle:(long long)arg3 account:(id)arg4;
- (id)initWithLiveEvent:(id)arg1 status:(id)arg2 account:(id)arg3;
- (id)initWithLiveEventID:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) TFNTwitterAVPlayerController *avPlayerController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

