//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1TimelinesHostedViewController-Protocol.h>
#import <T1Twitter/T1TimelinesItemsCarouselItemsContextProvider-Protocol.h>
#import <T1Twitter/T1TimelinesItemsCarouselScrollObserverDelegate-Protocol.h>
#import <T1Twitter/TFNDelegateContentVisibility-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSMutableDictionary, NSString, T1TimelinesCarouselCollectionViewLayout, T1TimelinesItemsCarouselScrollObserver, T1TimelinesItemsCarouselViewControllerScribeHelper, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1TimelinesItemsCarouselViewControllerDelegate, T1TimelinesLayoutMetricsSource;

@interface T1TimelinesItemsCarouselViewController : TFNItemsDataViewController <TFNDelegateContentVisibility, T1TimelinesItemsCarouselItemsContextProvider, T1TimelinesItemsCarouselScrollObserverDelegate, TFNTwitterAuthenticated, T1TimelinesHostedViewController>
{
    TFNTwitterAccount *_account;
    id _hostedItemIdentifier;
    T1TimelinesCarouselCollectionViewLayout *_carouselCollectionViewLayout;
    id <T1TimelinesLayoutMetricsSource> _layoutMetricsSource;
    TFSTwitterScribeContext *_scribeContext;
    id <T1TimelinesItemsCarouselViewControllerDelegate> _delegate;
    T1TimelinesItemsCarouselViewControllerScribeHelper *_scribeHelper;
    T1TimelinesItemsCarouselScrollObserver *_scrollObserver;
}

@property(retain, nonatomic) T1TimelinesItemsCarouselScrollObserver *scrollObserver; // @synthesize scrollObserver=_scrollObserver;
@property(retain, nonatomic) T1TimelinesItemsCarouselViewControllerScribeHelper *scribeHelper; // @synthesize scribeHelper=_scribeHelper;
@property(nonatomic) __weak id <T1TimelinesItemsCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1TimelinesLayoutMetricsSource> layoutMetricsSource; // @synthesize layoutMetricsSource=_layoutMetricsSource;
@property(retain, nonatomic) T1TimelinesCarouselCollectionViewLayout *carouselCollectionViewLayout; // @synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout;
@property(retain, nonatomic) id hostedItemIdentifier; // @synthesize hostedItemIdentifier=_hostedItemIdentifier;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)scrollViewDidScrollFromInitialIndexPath:(id)arg1 throughIndexPath:(id)arg2 toIndexPath:(id)arg3 endedScrolling:(_Bool)arg4;
@property(readonly, nonatomic) id currentItem;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scribeScrollSwipeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)private_correctlyPositionedAtIndex:(id)arg1;
- (void)private_restorePositionToPreviouslyFocusedIndexPath:(id)arg1;
- (id)indexPathForCellAtContentOffset:(struct CGPoint)arg1;
- (id)indexPathForCellInFocus;
- (id)scribeImpressionParameters;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)_invalidateCollectionViewLayoutWithSourcedLayoutMetrics;
- (id)calculatedLayoutMetrics;
- (id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *stateCache;
- (_Bool)handlesPreviewingAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct UIEdgeInsets)visibleContentInsetForView:(id)arg1;
- (void)restoreRecentState;
- (void)viewDidLayoutSubviews;
- (id)_t1_indexPathsForItemsIncludedInSize;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
