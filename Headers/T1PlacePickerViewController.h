//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1PlacePickerDisclaimerRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1ScrollingTitleViewDataSource-Protocol.h>
#import <T1Twitter/UISearchBarDelegate-Protocol.h>

@class NSArray, NSString, T1PlacePickerActionAdapter, T1PlacePickerAttributionTableRowAdapter, T1PlacePickerDisclaimer, T1PlacePickerDisclaimerRowAdapter, T1PlacePickerTableRowAdapter, T1PreciseLocationSwitch, T1ScrollingTitleView, TFNBarButtonItem, TFNRoundedSearchBar, TFNSpacerView, TFNTwitterComposePlaceStore, TFNTwitterCompositionGeotagSession, TFNTwitterDummyStatus, TFSTwitterPlace, TFSTwitterPlaceAttribution;
@protocol T1PlacePickerViewControllerDelegate;

@interface T1PlacePickerViewController : TFNItemsDataViewController <UISearchBarDelegate, T1ScrollingTitleViewDataSource, T1PlacePickerDisclaimerRowAdapterDelegate>
{
    _Bool _preciseLocationSwitchVisible;
    _Bool _clientFilterActive;
    TFNTwitterComposePlaceStore *_placeStore;
    TFNTwitterCompositionGeotagSession *_geotagSession;
    long long _preciseLocationMode;
    id <T1PlacePickerViewControllerDelegate> _delegate;
    NSArray *_placeItems;
    TFNBarButtonItem *_removeBarButton;
    TFNBarButtonItem *_doneBarButton;
    T1PlacePickerTableRowAdapter *_placeAdapter;
    T1PlacePickerDisclaimerRowAdapter *_disclaimerAdapter;
    T1PlacePickerActionAdapter *_searchItemAdapter;
    T1PlacePickerAttributionTableRowAdapter *_attributionAdapter;
    T1PlacePickerDisclaimer *_placeDisclaimer;
    TFSTwitterPlaceAttribution *_placeAttribution;
    TFNTwitterDummyStatus *_errorRetryStatus;
    T1PreciseLocationSwitch *_preciseLocationSwitch;
    T1ScrollingTitleView *_titleView;
    TFNRoundedSearchBar *_searchBar;
    TFNSpacerView *_searchBarSpacerView;
}

@property(nonatomic) _Bool clientFilterActive; // @synthesize clientFilterActive=_clientFilterActive;
@property(retain, nonatomic) TFNSpacerView *searchBarSpacerView; // @synthesize searchBarSpacerView=_searchBarSpacerView;
@property(retain, nonatomic) TFNRoundedSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) T1ScrollingTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool preciseLocationSwitchVisible; // @synthesize preciseLocationSwitchVisible=_preciseLocationSwitchVisible;
@property(retain, nonatomic) T1PreciseLocationSwitch *preciseLocationSwitch; // @synthesize preciseLocationSwitch=_preciseLocationSwitch;
@property(retain, nonatomic) TFNTwitterDummyStatus *errorRetryStatus; // @synthesize errorRetryStatus=_errorRetryStatus;
@property(retain, nonatomic) TFSTwitterPlaceAttribution *placeAttribution; // @synthesize placeAttribution=_placeAttribution;
@property(retain, nonatomic) T1PlacePickerDisclaimer *placeDisclaimer; // @synthesize placeDisclaimer=_placeDisclaimer;
@property(retain, nonatomic) T1PlacePickerAttributionTableRowAdapter *attributionAdapter; // @synthesize attributionAdapter=_attributionAdapter;
@property(retain, nonatomic) T1PlacePickerActionAdapter *searchItemAdapter; // @synthesize searchItemAdapter=_searchItemAdapter;
@property(retain, nonatomic) T1PlacePickerDisclaimerRowAdapter *disclaimerAdapter; // @synthesize disclaimerAdapter=_disclaimerAdapter;
@property(retain, nonatomic) T1PlacePickerTableRowAdapter *placeAdapter; // @synthesize placeAdapter=_placeAdapter;
@property(retain, nonatomic) TFNBarButtonItem *doneBarButton; // @synthesize doneBarButton=_doneBarButton;
@property(retain, nonatomic) TFNBarButtonItem *removeBarButton; // @synthesize removeBarButton=_removeBarButton;
@property(retain, nonatomic) NSArray *placeItems; // @synthesize placeItems=_placeItems;
@property(readonly, nonatomic) __weak id <T1PlacePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long preciseLocationMode; // @synthesize preciseLocationMode=_preciseLocationMode;
@property(retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession; // @synthesize geotagSession=_geotagSession;
@property(readonly, nonatomic) TFNTwitterComposePlaceStore *placeStore; // @synthesize placeStore=_placeStore;
- (void).cxx_destruct;
- (id)_emptySearchStatus;
- (id)_emptyLoadStatus;
- (id)_emptyDummyStatusWithMessage:(id)arg1;
- (CDUnknownBlockType)_errorActionBlockForQuery:(id)arg1;
- (id)_errorSearchRetryStatus;
- (id)_errorLoadRetryStatus;
- (id)_errorDummyStatusWithMessage:(id)arg1;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_preciseLocationSwitchDidChange:(id)arg1;
- (void)_setPreciseLocationSwitchVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (double)_preciseLocationSwitchYForVisible:(_Bool)arg1;
- (_Bool)_shouldShowPreciseLocationSwitch;
- (void)saveScrollPosition;
- (void)_syncTitleViewScrollWithScrollView:(id)arg1;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_executeSearch;
- (void)_executeSearchWithQuery:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)disclaimerRowAdapterDidDisplayDisclaimerCell:(id)arg1;
- (void)_updateSections;
- (void)update:(_Bool)arg1;
- (void)_placeSearchFailed:(id)arg1;
- (void)_placeSearchSuccessful:(id)arg1;
- (void)_placeFetchFailed:(id)arg1;
- (void)_placeFetchSuccessful:(id)arg1;
- (double)scalingOffsetForTitleView:(id)arg1;
- (double)scalingFactorForTitleView:(id)arg1;
- (id)titleView:(id)arg1 titleTupleAtIndex:(long long)arg2;
- (id)navigationBarForTitleView:(id)arg1;
- (long long)numberOfTitlesForTitleView:(id)arg1;
- (void)_removeButtonTapped:(id)arg1;
- (void)_okButtonTapped:(id)arg1;
- (void)_updateRemoveButtonState;
- (id)_barButtonItemWithTitle:(id)arg1 action:(SEL)arg2 font:(id)arg3;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_reloadData;
- (double)_searchBarHeight;
- (_Bool)_shouldHideDoneBarButton;
@property(readonly, nonatomic) TFSTwitterPlace *selectedPlace;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updatePlaceholder:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPlaceStore:(id)arg1 geoDataViewProvider:(id)arg2 delegate:(id)arg3;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

