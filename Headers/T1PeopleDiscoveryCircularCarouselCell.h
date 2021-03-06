//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSString, T1PeopleDiscoveryCircularCarouselTableRowAdapter, TFNTwitterAccount, TFSTimer, TFSTwitterScribeContext, UIScrollView;

@interface T1PeopleDiscoveryCircularCarouselCell : TFNTableViewCell <UIScrollViewDelegate>
{
    _Bool _autopagingPaused;
    TFNTwitterAccount *_account;
    double _autopagingInterval;
    TFSTwitterScribeContext *_baseScribeContext;
    NSArray *_objects;
    NSDictionary *_options;
    T1PeopleDiscoveryCircularCarouselTableRowAdapter *_tableRowAdapter;
    CDUnknownBlockType _createOrUpdateViewBlock;
    TFSTimer *_autopagingTimer;
    unsigned long long _currentIndex;
    NSMutableSet *_keysForEventsScribed;
    UIScrollView *_scrollView;
    NSArray *_pageContainerViews;
}

@property(readonly, nonatomic) NSArray *pageContainerViews; // @synthesize pageContainerViews=_pageContainerViews;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) NSMutableSet *keysForEventsScribed; // @synthesize keysForEventsScribed=_keysForEventsScribed;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) TFSTimer *autopagingTimer; // @synthesize autopagingTimer=_autopagingTimer;
@property(nonatomic, getter=isAutopagingPaused) _Bool autopagingPaused; // @synthesize autopagingPaused=_autopagingPaused;
@property(copy, nonatomic) CDUnknownBlockType createOrUpdateViewBlock; // @synthesize createOrUpdateViewBlock=_createOrUpdateViewBlock;
@property(nonatomic) __weak T1PeopleDiscoveryCircularCarouselTableRowAdapter *tableRowAdapter; // @synthesize tableRowAdapter=_tableRowAdapter;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(copy, nonatomic) TFSTwitterScribeContext *baseScribeContext; // @synthesize baseScribeContext=_baseScribeContext;
@property(nonatomic) double autopagingInterval; // @synthesize autopagingInterval=_autopagingInterval;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (unsigned long long)_wrappedIndex:(unsigned long long)arg1 byAddingOffset:(long long)arg2;
- (id)_viewInContainer:(id)arg1;
- (id)_viewForObjectAtIndex:(unsigned long long)arg1 withSize:(struct CGSize)arg2 existingView:(id)arg3;
- (void)_updateContainer:(id)arg1 withView:(id)arg2;
- (void)_refreshPagesForcingFullUpdate:(_Bool)arg1;
- (id)_scribeContextForIndex:(unsigned long long)arg1;
- (void)_scribeObjectSwipeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_scribeObjectImpressionForIndex:(unsigned long long)arg1 forced:(_Bool)arg2;
- (void)_updateAutopagingTimer;
- (void)_autopagingTimerDidFire;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)calculatedLayoutMetrics;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1 logScribeActions:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

