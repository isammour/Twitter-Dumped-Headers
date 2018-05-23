//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ErrorDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1FoundMediaAutoplaySwitchViewDelegate-Protocol.h>
#import <T1Twitter/T1FoundMediaCollectionViewCellDelegate-Protocol.h>
#import <T1Twitter/T1FoundMediaCollectionViewDelegate-Protocol.h>
#import <T1Twitter/T1FoundMediaCollectionViewDelegateLayout-Protocol.h>
#import <T1Twitter/T1FoundMediaImagePreviewViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNImageTransitionDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, T1FoundMediaAutoplaySwitchView, TFNFoundMediaStream, TFNTwitterAccount, UICollectionViewCell, UIView;
@protocol T1FoundMediaStreamViewControllerDelegate;

@interface T1FoundMediaStreamViewController : TFNItemsDataViewController <T1FoundMediaCollectionViewDelegate, T1FoundMediaCollectionViewCellDelegate, T1FoundMediaImagePreviewViewControllerDelegate, T1FoundMediaAutoplaySwitchViewDelegate, T1FoundMediaCollectionViewDelegateLayout, TFNImageTransitionDelegate, T1ErrorDataViewAdapterDelegate, TFNTwitterAuthenticated>
{
    _Bool _previewEnabled;
    _Bool _needsUpdateAdapterOption;
    _Bool _needsResetContentOffsetWhenUpdate;
    _Bool _showsHeaderView;
    _Bool _updatingHeaderViewLayout;
    _Bool _showsAutoplaySwitch;
    _Bool _autoplayEnabled;
    _Bool _needsDelayUpdateSections;
    _Bool _needsUpdateSections;
    TFNTwitterAccount *_account;
    id <T1FoundMediaStreamViewControllerDelegate> _delegate;
    TFNFoundMediaStream *_stream;
    NSString *_scribePage;
    NSString *_scribeSection;
    NSString *_scribeElement;
    UICollectionViewCell *_trackingLongPressedCell;
    UIView *_headerView;
    UIView *_headerBorderView;
    unsigned long long _headerViewState;
    T1FoundMediaAutoplaySwitchView *_autoplaySwitchView;
}

+ (Class)collectionViewClass;
@property(nonatomic) _Bool needsUpdateSections; // @synthesize needsUpdateSections=_needsUpdateSections;
@property(nonatomic) _Bool needsDelayUpdateSections; // @synthesize needsDelayUpdateSections=_needsDelayUpdateSections;
@property(retain, nonatomic) T1FoundMediaAutoplaySwitchView *autoplaySwitchView; // @synthesize autoplaySwitchView=_autoplaySwitchView;
@property(nonatomic, getter=isAutoplayEnabled) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(nonatomic) _Bool showsAutoplaySwitch; // @synthesize showsAutoplaySwitch=_showsAutoplaySwitch;
@property(nonatomic, getter=isUpdatingHeaderViewLayout) _Bool updatingHeaderViewLayout; // @synthesize updatingHeaderViewLayout=_updatingHeaderViewLayout;
@property(nonatomic) unsigned long long headerViewState; // @synthesize headerViewState=_headerViewState;
@property(nonatomic) _Bool showsHeaderView; // @synthesize showsHeaderView=_showsHeaderView;
@property(retain, nonatomic) UIView *headerBorderView; // @synthesize headerBorderView=_headerBorderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionViewCell *trackingLongPressedCell; // @synthesize trackingLongPressedCell=_trackingLongPressedCell;
@property(nonatomic) _Bool needsResetContentOffsetWhenUpdate; // @synthesize needsResetContentOffsetWhenUpdate=_needsResetContentOffsetWhenUpdate;
@property(nonatomic) _Bool needsUpdateAdapterOption; // @synthesize needsUpdateAdapterOption=_needsUpdateAdapterOption;
@property(retain, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(retain, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(retain, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(nonatomic, getter=isPreviewEnabled) _Bool previewEnabled; // @synthesize previewEnabled=_previewEnabled;
@property(retain, nonatomic) TFNFoundMediaStream *stream; // @synthesize stream=_stream;
@property(nonatomic) __weak id <T1FoundMediaStreamViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeComponent;
- (void)errorItemTapped:(id)arg1;
- (void)foundMediaAutoplaySwitchViewDidChangeOn:(id)arg1;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (void)_dismissImagePreviewViewController:(id)arg1 transitionAnimated:(_Bool)arg2;
- (void)foundMediaImagePreviewViewController:(id)arg1 didCancelShouldAnimateTransition:(_Bool)arg2;
- (void)foundMediaImagePreviewViewController:(id)arg1 didAddItem:(id)arg2;
- (void)foundMediaCollectionViewCellDidLongPress:(id)arg1;
- (void)foundMediaCollectionViewCellDidEndTrackingLongPressGesture:(id)arg1;
- (_Bool)foundMediaCollectionViewCellShouldBeginTrackingLongPressGesture:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 contentSizeWithRefernceContentSize:(struct CGSize)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)foundMediaCollectionViewDidEndTrackingTouches:(id)arg1;
- (void)foundMediaCollectionViewDidBeginTrackingTouches:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_streamDidUpdate:(id)arg1;
- (void)_updateAutoplaySettings;
- (void)_autoplaySettingsDidChange:(id)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)isLoadingTop;
- (void)loadTop:(id)arg1;
- (void)_resetContentOffsetWhenUpdateIfNeeded;
- (void)_setNeedsResetContentOffsetWhenUpdate;
- (void)_updateAdapterOptionAtIndexPaths:(id)arg1 withCellSizeInWidth:(double)arg2 height:(double)arg3;
- (void)_updateAdapterOptionIfNeeded;
- (void)_setNeedsUpdateAdapterOption;
- (id)_errorItemForStreamError:(id)arg1;
- (void)_updateSections;
- (void)update:(_Bool)arg1;
- (void)viewWillFullyAppear:(_Bool)arg1;
- (void)_updateHeaderViewFrameWithHeight:(double)arg1;
- (void)_updateContentOffset;
- (void)_updateContentInsetsWithHeaderViewHeight:(double)arg1;
- (void)_layoutHeaderView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)_updateAutoplaySwitchView;
- (void)_updateShowsHeaderView;
- (void)_updateHeaderViewHidden;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

