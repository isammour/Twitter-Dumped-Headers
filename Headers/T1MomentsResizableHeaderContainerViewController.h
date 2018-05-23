//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1MomentsResizableHeaderDelegate-Protocol.h>

@class NSString, TFNDataViewController, UIScrollView, UIView, UIViewController;
@protocol T1MomentsResizableHeader;

@interface T1MomentsResizableHeaderContainerViewController : TFNViewController <T1MomentsResizableHeaderDelegate>
{
    _Bool _snappingEnabled;
    UIView *_headerContainerView;
    UIView *_dataContainerView;
    TFNDataViewController *_dataViewController;
    UIViewController<T1MomentsResizableHeader> *_headerViewController;
}

@property(retain, nonatomic) UIViewController<T1MomentsResizableHeader> *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) TFNDataViewController *dataViewController; // @synthesize dataViewController=_dataViewController;
@property(nonatomic) _Bool snappingEnabled; // @synthesize snappingEnabled=_snappingEnabled;
@property(retain, nonatomic) UIView *dataContainerView; // @synthesize dataContainerView=_dataContainerView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic, getter=isHeaderFullyCollapsed) _Bool headerFullyCollapsed;
@property(readonly, nonatomic, getter=isHeaderFullyExpanded) _Bool headerFullyExpanded;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)layoutGuidesDidChange:(long long)arg1;
- (void)_snapCollapsed;
- (void)_snapExpandedAnimated:(_Bool)arg1;
- (void)_snapExpanded;
- (void)_snapHeader;
- (double)_currentExpansionPercentage;
- (void)headerViewDidExpandWithExpansionPercentage:(double)arg1;
- (void)_layoutContainerViewsWithExpansionPercentage:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)resizableHeaderDidUpdatePreferredExpandedHeight:(id)arg1;
- (void)tfn_contentScrollViewDidEndDecelerating:(id)arg1;
- (void)tfn_contentScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (_Bool)tfn_prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDataViewController:(id)arg1 headerViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
