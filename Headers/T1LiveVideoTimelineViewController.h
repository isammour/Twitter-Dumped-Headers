//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1UpdateIndicatorDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>
#import <T1Twitter/TFNTwitterCompositionSemanticAnnotationsSource-Protocol.h>
#import <T1Twitter/TFNTwitterLiveVideoTimelineStreamLoaderDelegate-Protocol.h>

@class NSString, T1EmptyContentPromptView, T1StatusLiveEngagementManager, T1StatusTableRowAdapter, T1StreamPoller, T1UpdateIndicator, TFNItemsSectionTransformer, TFNTwitterAccount, TFNTwitterLiveVideoEvent, TFNTwitterLiveVideoTimelineStreamLoader, TFNTwitterLiveVideoTimelineVariant, TFNTwitterRichTimelineStream, TFNTwitterStreamTweetedNotificationHandler, TFSTwitterScribeContext;
@protocol T1LiveVideoTimelineViewControllerDelegate;

@interface T1LiveVideoTimelineViewController : TFNItemsDataViewController <T1UpdateIndicatorDelegate, TFNTwitterAuthenticated, TFNTwitterLiveVideoTimelineStreamLoaderDelegate, TFNTwitterCompositionSemanticAnnotationsSource>
{
    TFNTwitterAccount *_account;
    TFNTwitterLiveVideoEvent *_liveVideoEvent;
    TFNTwitterLiveVideoTimelineVariant *_timelineVariant;
    TFSTwitterScribeContext *_scribeContext;
    id <T1LiveVideoTimelineViewControllerDelegate> _delegate;
    T1StreamPoller *_streamPoller;
    TFNTwitterLiveVideoTimelineStreamLoader *_streamLoader;
    TFNTwitterRichTimelineStream *_richTimelineStream;
    TFNTwitterStreamTweetedNotificationHandler *_tweetedHandler;
    TFNItemsSectionTransformer *_sectionTransformer;
    T1StatusTableRowAdapter *_statusAdapter;
    T1UpdateIndicator *_updateIndicator;
    T1EmptyContentPromptView *_emptyContentView;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
}

@property(retain, nonatomic) T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(retain, nonatomic) T1EmptyContentPromptView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) T1UpdateIndicator *updateIndicator; // @synthesize updateIndicator=_updateIndicator;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) TFNItemsSectionTransformer *sectionTransformer; // @synthesize sectionTransformer=_sectionTransformer;
@property(retain, nonatomic) TFNTwitterStreamTweetedNotificationHandler *tweetedHandler; // @synthesize tweetedHandler=_tweetedHandler;
@property(retain, nonatomic) TFNTwitterRichTimelineStream *richTimelineStream; // @synthesize richTimelineStream=_richTimelineStream;
@property(retain, nonatomic) TFNTwitterLiveVideoTimelineStreamLoader *streamLoader; // @synthesize streamLoader=_streamLoader;
@property(retain, nonatomic) T1StreamPoller *streamPoller; // @synthesize streamPoller=_streamPoller;
@property(nonatomic) __weak id <T1LiveVideoTimelineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterLiveVideoTimelineVariant *timelineVariant; // @synthesize timelineVariant=_timelineVariant;
@property(retain, nonatomic) TFNTwitterLiveVideoEvent *liveVideoEvent; // @synthesize liveVideoEvent=_liveVideoEvent;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeItemForIndexPath:(id)arg1;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)canShowUpdateIndicator:(id)arg1;
- (id)semanticAnnotationIds;
- (void)errorItemTapped:(id)arg1;
- (void)liveVideoTimelineStreamLoader:(id)arg1 didRequestCurrentVideoTimestampMSWithCompletion:(CDUnknownBlockType)arg2;
- (void)liveVideoTimelineStreamLoader:(id)arg1 didUpdateWithEventsDictionary:(id)arg2 promptsDictionary:(id)arg3 pollingInterval:(double)arg4 timelineID:(id)arg5;
- (void)_t1_liveVideoEventAddScribeDetailsWithParameters:(id)arg1;
- (id)_t1_scribeParametersWithLiveVideoDetailsForParameters:(id)arg1;
- (id)_t1_scribeEventMetadata;
- (_Bool)_t1_hasTimelineType;
- (void)_t1_liveVideoTimelineStreamDidUpdate:(id)arg1;
- (void)_t1_configureLivePipelineManager;
- (_Bool)_t1_isEmptyAfterLoading;
- (void)_t1_updateEmptyContentViewConstraints;
- (void)_t1_updateEmptyContentViewVisibility;
- (void)_t1_buildSections;
- (void)_t1_setupTimelineStream;
- (void)loadTopDidEnd;
- (void)loadTop:(id)arg1;
- (void)update:(_Bool)arg1;
- (_Bool)isLoadingTop;
- (void)layoutGuidesDidChange:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)title;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

