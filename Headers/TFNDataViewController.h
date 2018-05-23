//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <TFNUI/TFNDataSourceScrollPositionAssociation-Protocol.h>
#import <TFNUI/TFNLayoutMetricsEnvironment-Protocol.h>
#import <TFNUI/TFNProgrammaticScrollViewDelegate-Protocol.h>
#import <TFNUI/UICollectionViewDataSource-Protocol.h>
#import <TFNUI/UICollectionViewDelegate-Protocol.h>
#import <TFNUI/UITableViewDataSource-Protocol.h>
#import <TFNUI/UITableViewDelegate-Protocol.h>
#import <TFNUI/UITableViewDragDelegate-Protocol.h>
#import <TFNUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSDictionary, NSNumber, NSString, TFNCollectionView, TFNDisplayLink, TFNEstimatedRowHeightTableViewDelegateProxy, TFNFloatingViewAwarePreviewingDelegate, TFNScrollViewDelegateBroadcaster, TFNTableView, TFSTimer, UICollectionViewLayout, UIControl, UIScrollView, UIViewController;
@protocol TFNDataView, TFNPullToLoadTopControl, UIViewControllerPreviewing;

@interface TFNDataViewController : TFNViewController <UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate, TFNDataSourceScrollPositionAssociation, TFNLayoutMetricsEnvironment, TFNProgrammaticScrollViewDelegate, UITableViewDragDelegate>
{
    _Bool _needsUpdate;
    _Bool _needsReload;
    _Bool _needsDataViewDidDisplay;
    _Bool _updateAnimated;
    _Bool _includeCellLayoutsInReload;
    _Bool _hasSavedScrollPositionForReload;
    _Bool _hasLoadedInitialData;
    TFSTimer *_asyncUpdateTimer;
    TFNDisplayLink *_displayLink;
    NSNumber *_overridenContentBreakLength;
    NSDictionary *_scrollPositionState;
    TFNEstimatedRowHeightTableViewDelegateProxy *_estimatedRowHeightTableViewDelegateProxy;
    id <UIViewControllerPreviewing> _previewingContext;
    TFNFloatingViewAwarePreviewingDelegate *_previewingDelegate;
    UIViewController *_previewingViewController;
    _Bool _keyboardShowing;
    struct CGRect _keyboardRect;
    _Bool _clearsSelectionOnViewWillAppear;
    _Bool _shouldReloadDataOnFirstViewWillAppear;
    _Bool _dataViewUpdatesAreAnimated;
    _Bool _pullToLoadTopEnabled;
    _Bool _isRestoringScrollPosition;
    _Bool _respondsToKeyboardShowing;
    _Bool _supportsEstimatedTableRowHeights;
    _Bool _viewHasAppeared;
    _Bool _viewHasLaidOut;
    _Bool _sizeTransitioning;
    UIScrollView<TFNDataView> *_dataView;
    long long _dataViewType;
    UIControl<TFNPullToLoadTopControl> *_pullToLoadTopControl;
    CDUnknownBlockType _loadTopCompletionHandler;
    long long _restoreScrollPositionType;
    long long _tableSectionBreakPosition;
    UICollectionViewLayout *_collectionViewLayout;
    TFNScrollViewDelegateBroadcaster *_scrollViewEventBroadcaster;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _scrollIndicatorInsets;
}

+ (id)dataViewAccessibilityIdentifierForClass:(Class)arg1;
+ (Class)collectionViewClass;
+ (void)setDidPullToLoadTopBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) TFNScrollViewDelegateBroadcaster *scrollViewEventBroadcaster; // @synthesize scrollViewEventBroadcaster=_scrollViewEventBroadcaster;
@property(nonatomic, getter=isSizeTransitioning) _Bool sizeTransitioning; // @synthesize sizeTransitioning=_sizeTransitioning;
@property(nonatomic) _Bool viewHasLaidOut; // @synthesize viewHasLaidOut=_viewHasLaidOut;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) _Bool supportsEstimatedTableRowHeights; // @synthesize supportsEstimatedTableRowHeights=_supportsEstimatedTableRowHeights;
@property(nonatomic) long long tableSectionBreakPosition; // @synthesize tableSectionBreakPosition=_tableSectionBreakPosition;
@property(nonatomic) _Bool respondsToKeyboardShowing; // @synthesize respondsToKeyboardShowing=_respondsToKeyboardShowing;
@property(readonly, nonatomic) __weak UIViewController *previewingViewController; // @synthesize previewingViewController=_previewingViewController;
@property(readonly, nonatomic) _Bool isRestoringScrollPosition; // @synthesize isRestoringScrollPosition=_isRestoringScrollPosition;
@property(nonatomic) long long restoreScrollPositionType; // @synthesize restoreScrollPositionType=_restoreScrollPositionType;
@property(copy, nonatomic) CDUnknownBlockType loadTopCompletionHandler; // @synthesize loadTopCompletionHandler=_loadTopCompletionHandler;
@property(nonatomic) _Bool pullToLoadTopEnabled; // @synthesize pullToLoadTopEnabled=_pullToLoadTopEnabled;
@property(retain, nonatomic) UIControl<TFNPullToLoadTopControl> *pullToLoadTopControl; // @synthesize pullToLoadTopControl=_pullToLoadTopControl;
@property(nonatomic) _Bool dataViewUpdatesAreAnimated; // @synthesize dataViewUpdatesAreAnimated=_dataViewUpdatesAreAnimated;
@property(nonatomic) _Bool shouldReloadDataOnFirstViewWillAppear; // @synthesize shouldReloadDataOnFirstViewWillAppear=_shouldReloadDataOnFirstViewWillAppear;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets; // @synthesize scrollIndicatorInsets=_scrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(readonly, nonatomic) long long dataViewType; // @synthesize dataViewType=_dataViewType;
@property(readonly, nonatomic) UIScrollView<TFNDataView> *dataView; // @synthesize dataView=_dataView;
- (void).cxx_destruct;
- (id)tfs_debugStrings;
- (_Bool)_canHandleScrollDownKeyCommands;
- (void)handlePageDownKeyCommand;
- (void)handleLineDownKeyCommand;
- (_Bool)_canHandleScrollUpKeyCommands;
- (void)handleLineUpKeyCommand;
- (void)handlePageUpKeyCommand;
- (void)handleTopKeyCommand;
- (_Bool)_canHandleRefreshKeyCommand;
- (void)handleRefreshKeyCommand;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (void)_didDisplayInDataView;
- (void)_tfn_frameWillDisplay;
- (void)_tfn_setNeedsDataViewDidDisplay;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)_updateIfNecessaryForKeyboardHideNotification:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)_updateIfNecessaryForKeyboardShowNotification:(id)arg1 animated:(_Bool)arg2;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_voiceOverStatusChanged;
- (void)dateFormatChanged;
- (void)fontSizeChanged;
- (void)dataViewDidEndDisplaying;
- (void)dataViewDidDisplay;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (_Bool)dataViewWillUpdate;
- (id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1;
- (id)visibleItems;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)indexPathForItem:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)clearScrollPosition;
- (void)restoreScrollPosition;
- (void)saveScrollPosition;
- (void)tfn_setNeedsDeferredUpdatesForDuration:(double)arg1 sender:(id)arg2;
- (void)clearUpdateAnimationFlag;
- (void)didClearSelectionOnViewWillAppearAtIndex:(id)arg1 animated:(_Bool)arg2;
- (void)_performAsyncUpdate;
- (void)_cancelAsyncUpdate;
- (void)_scheduleAsyncUpdateIfNeeded;
- (void)reloadDataIfNeeded;
- (void)setNeedsReloadData:(_Bool)arg1;
- (void)setNeedsReloadData;
- (void)update:(_Bool)arg1;
- (void)updateIfNeeded;
- (void)setNeedsUpdate:(_Bool)arg1;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (id)indexPathForElementWithScrollPositionIdentifier:(id)arg1 inView:(id)arg2;
- (void)layoutGuidesDidChange:(long long)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (double)viewVisiblePercentageInScrollRect:(id)arg1;
@property(readonly, nonatomic) struct CGRect scrollRectInWindowSpace;
- (void)_updateHeaderViewInsets;
- (void)_updateScrollIndicatorInsets;
- (void)updateContentOffsetWithContentInset:(struct UIEdgeInsets)arg1 previousContentInset:(struct UIEdgeInsets)arg2 previousContentOffset:(struct CGPoint)arg3;
- (void)_updateContentInset;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)_didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)tfn_previewingGestureRecognizerState;
- (void)commitPreviewingViewController:(id)arg1;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 inCell:(id)arg2 atIndexPath:(id)arg3 outSourceRect:(out struct CGRect *)arg4;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldHidePullToLoadTopControlWhenDisplayingCell:(id)arg1;
- (void)loadTopDidEnd;
- (void)loadTopDidBegin;
- (_Bool)loadTopControlShouldUpdateContentInsetWhenUpdatingProgrammatically;
- (void)updateLoadingTop;
- (_Bool)isLoadingTop;
- (void)loadTop:(id)arg1;
- (void)_didPullToLoadTop;
- (id)_pullToLoadTopControlIfEnabled;
- (void)_layoutPullToLoadTopControl;
- (_Bool)_addPullToLoadTopControlToView;
- (id)tfn_contentScrollView;
- (void)removeScrollViewDelegate:(id)arg1;
- (void)addScrollViewDelegate:(id)arg1;
- (void)_tfn_stopMonitoringScroll;
- (void)_tfn_startMonitoringScroll;
- (void)didEndScrolling;
- (void)scrollViewDidScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_scrollView:(id)arg1 shouldScrollToTopProgrammatically:(_Bool)arg2;
- (_Bool)scrollViewShouldProgrammaticallyScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) _Bool isScrolling;
- (id)dataViewAccessibilityIdentifier;
- (_Bool)accessibilityScroll:(long long)arg1;
- (unsigned long long)sectionBreaksForIndexPath:(id)arg1;
@property(nonatomic) double contentBreakLength;
@property(readonly, nonatomic) TFNCollectionView *collectionView;
@property(readonly, nonatomic) TFNTableView *tableView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

