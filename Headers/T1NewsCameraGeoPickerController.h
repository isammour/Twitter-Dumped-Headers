//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class NSArray, TFSTwitterLocation, TFSTwitterPlace, UIScrollView;
@protocol T1NewsCameraGeoPickerControllerDelegate;

@interface T1NewsCameraGeoPickerController : TFNViewController
{
    // Error parsing type: , name: kNewsCameraAllowShouldSetDefaultPlace
    // Error parsing type: , name: kNewsCameraAllowShouldSharePreciseLocation
    // Error parsing type: , name: newsCameraGeoPickerControllerDelegate
    // Error parsing type: , name: tableView
    // Error parsing type: , name: tableViewDataSource
    // Error parsing type: , name: places
    // Error parsing type: , name: entryPointView
    // Error parsing type: , name: targetLocation
    // Error parsing type: , name: defaultPlace
    // Error parsing type: , name: selectedPlace
    // Error parsing type: , name: selectedLocation
    // Error parsing type: , name: selectionState
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)rowHeight;
@property(nonatomic, readonly) UIScrollView *tfn_contentScrollView;
- (void)selectWithItem:(id)arg1;
- (id)createEntryPointButton;
- (long long)preferredSelectionState;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, retain) TFSTwitterLocation *selectedLocation; // @synthesize selectedLocation;
@property(nonatomic, retain) TFSTwitterPlace *selectedPlace; // @synthesize selectedPlace;
@property(nonatomic, retain) TFSTwitterPlace *defaultPlace; // @synthesize defaultPlace;
@property(nonatomic, retain) TFSTwitterLocation *targetLocation; // @synthesize targetLocation;
@property(nonatomic, copy) NSArray *places; // @synthesize places;
@property(nonatomic) __weak id <T1NewsCameraGeoPickerControllerDelegate> newsCameraGeoPickerControllerDelegate; // @synthesize newsCameraGeoPickerControllerDelegate;

@end

