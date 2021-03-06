//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1FilterGridItemViewDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, T1TwitterTooltip, TFNTwitterMediaAssetFilterParameters, TIFFilterLibrary, TIFFilterPreview, UIScrollView, UISlider, UIView;
@protocol T1FiltersSelectionViewControllerDelegate;

@interface T1FiltersSelectionViewController : UIViewController <T1FilterGridItemViewDelegate, UIScrollViewDelegate>
{
    TFNTwitterMediaAssetFilterParameters *_filterParameters;
    UIView *_thumbnailContainerView;
    T1TwitterTooltip *_tooltip;
    NSMutableSet *_uniqueFiltersSeen;
    _Bool _shouldIntensityControlBeVisible;
    id <T1FiltersSelectionViewControllerDelegate> _delegate;
    TIFFilterLibrary *_filterLibrary;
    TIFFilterPreview *_filterPreview;
    NSMutableArray *_gridItemViews;
    UISlider *_intensityControl;
    UIView *_intensityControlContainerView;
    UIScrollView *_thumbnailScrollView;
}

+ (double)desiredHeight;
@property(readonly, nonatomic) UIScrollView *thumbnailScrollView; // @synthesize thumbnailScrollView=_thumbnailScrollView;
@property(nonatomic) _Bool shouldIntensityControlBeVisible; // @synthesize shouldIntensityControlBeVisible=_shouldIntensityControlBeVisible;
@property(readonly, nonatomic) UIView *intensityControlContainerView; // @synthesize intensityControlContainerView=_intensityControlContainerView;
@property(readonly, nonatomic) UISlider *intensityControl; // @synthesize intensityControl=_intensityControl;
@property(readonly, nonatomic) NSMutableArray *gridItemViews; // @synthesize gridItemViews=_gridItemViews;
@property(retain, nonatomic) TIFFilterPreview *filterPreview; // @synthesize filterPreview=_filterPreview;
@property(readonly, nonatomic) TIFFilterLibrary *filterLibrary; // @synthesize filterLibrary=_filterLibrary;
@property(nonatomic) __weak id <T1FiltersSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_selectedGridItemView;
- (float)_maxFilterIntensityForCurrentFilter;
- (float)_defaultFilterIntensityForCurrentFilter;
- (void)_animateOutIntensityControl;
- (void)_animateInIntensityControl;
- (void)_centerOnSelectedViewAnimated:(_Bool)arg1;
- (struct CGSize)_gridViewContentSize;
- (void)_layoutGalleryItems;
- (void)_layoutGalleryView;
- (_Bool)_intensityControlVisible;
- (void)_handleFilterIntensityValueChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateGridItemViewSelection;
- (void)filterGridItemViewSelected:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_initializeGridItemViews;
- (void)viewDidLoad;
- (id)selectedView;
- (unsigned long long)uniqueFiltersSeenCount;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFilterLibrary:(id)arg1 filterPreview:(id)arg2 filterParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

