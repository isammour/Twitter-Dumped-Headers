//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterShareExtensionUI/TSESelectionTableViewController.h>

@class CLLocation, NSArray, TSELocationMapTableViewHeaderView;
@protocol TSEGeoPlace, TSEGeoTagging, TSELocationSelectionDelegate;

@interface TSELocationSelectionTableViewController : TSESelectionTableViewController
{
    _Bool _loading;
    _Bool _shouldShowFoursquareLogo;
    id <TSELocationSelectionDelegate> _delegate;
    CLLocation *_location;
    id <TSEGeoTagging> _geoTagging;
    TSELocationMapTableViewHeaderView *_headerMapView;
    NSArray *_places;
    id <TSEGeoPlace> _selectedPlace;
}

@property(nonatomic) _Bool shouldShowFoursquareLogo; // @synthesize shouldShowFoursquareLogo=_shouldShowFoursquareLogo;
@property(retain, nonatomic) id <TSEGeoPlace> selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(retain, nonatomic) NSArray *places; // @synthesize places=_places;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) TSELocationMapTableViewHeaderView *headerMapView; // @synthesize headerMapView=_headerMapView;
@property(readonly, nonatomic) id <TSEGeoTagging> geoTagging; // @synthesize geoTagging=_geoTagging;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) __weak id <TSELocationSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_tseui_removeButtonTapped;
- (void)_tseui_doneButtonTapped;
- (id)geoPlaceForRowAtIndexPath:(id)arg1;
- (_Bool)isFoursquareLogoCellAtIndexPath:(id)arg1;
- (_Bool)isNullPlaceSelectionRowIndexPath:(id)arg1;
- (void)setSelectedPlaceToFirstOptionIfNoneSelected;
- (void)presentAlertForError:(id)arg1;
- (void)loadPlaces;
- (void)viewDidLoad;
- (id)initWithCurrentLocation:(id)arg1 geoTagging:(id)arg2 currentlySelectedPlace:(id)arg3 delegate:(id)arg4;

@end

