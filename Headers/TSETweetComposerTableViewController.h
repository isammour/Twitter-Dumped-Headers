//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TwitterShareExtensionUI/CLLocationManagerDelegate-Protocol.h>
#import <TwitterShareExtensionUI/TSEAccountSelectionDelegate-Protocol.h>
#import <TwitterShareExtensionUI/TSEAutoCompletionTableViewControllerDelegate-Protocol.h>
#import <TwitterShareExtensionUI/TSELocationSelectionDelegate-Protocol.h>
#import <TwitterShareExtensionUI/UITableViewDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSLayoutConstraint, NSString, TSEAutoCompletionTableViewController, TSETweetComposerTableViewDataSource, TSETweetShareConfiguration, TSETweetTextViewContainer, UIBarButtonItem, UIScrollView, UITableView, UIView;
@protocol TSEAccount, TSEGeoPlace;

@interface TSETweetComposerTableViewController : UIViewController <UITableViewDelegate, TSEAccountSelectionDelegate, CLLocationManagerDelegate, TSELocationSelectionDelegate, TSEAutoCompletionTableViewControllerDelegate>
{
    _Bool _alreadyUpdatedViewConstraints;
    _Bool _disallowAutocompletionVisible;
    _Bool _waitingForLocation;
    _Bool _autoCompletionResultsVisible;
    _Bool _isSendingTweet;
    _Bool _registeredForTweetTextViewContainerBoundsSizeKVO;
    _Bool _registeredForTableViewContentSizeKVO;
    _Bool _registeredForLastTypedWordKVO;
    _Bool _registeredForTweetTextKVO;
    UIScrollView *_scrollView;
    UIView *_contentView;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    NSLayoutConstraint *_scrollViewTopConstraint;
    NSLayoutConstraint *_tableViewHeightConstraint;
    TSETweetTextViewContainer *_tweetTextViewContainer;
    UITableView *_tableView;
    TSETweetShareConfiguration *_configuration;
    TSETweetComposerTableViewDataSource *_dataSource;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_tweetBarButtonItem;
    UIBarButtonItem *_spinnerBarButtonItem;
    id <TSEAccount> _selectedAccount;
    CLLocationManager *_locationManager;
    CLLocation *_mostRecentLocation;
    id <TSEGeoPlace> _selectedGeoPlace;
    unsigned long long _locationStatus;
    TSEAutoCompletionTableViewController *_autoCompletionResultsViewController;
}

+ (_Bool)_tseui_applicationHasLocationUsageReasonInInfoPlist;
@property(nonatomic) _Bool registeredForTweetTextKVO; // @synthesize registeredForTweetTextKVO=_registeredForTweetTextKVO;
@property(nonatomic) _Bool registeredForLastTypedWordKVO; // @synthesize registeredForLastTypedWordKVO=_registeredForLastTypedWordKVO;
@property(nonatomic) _Bool registeredForTableViewContentSizeKVO; // @synthesize registeredForTableViewContentSizeKVO=_registeredForTableViewContentSizeKVO;
@property(nonatomic) _Bool registeredForTweetTextViewContainerBoundsSizeKVO; // @synthesize registeredForTweetTextViewContainerBoundsSizeKVO=_registeredForTweetTextViewContainerBoundsSizeKVO;
@property(nonatomic) _Bool isSendingTweet; // @synthesize isSendingTweet=_isSendingTweet;
@property(readonly, nonatomic) TSEAutoCompletionTableViewController *autoCompletionResultsViewController; // @synthesize autoCompletionResultsViewController=_autoCompletionResultsViewController;
@property(nonatomic) _Bool autoCompletionResultsVisible; // @synthesize autoCompletionResultsVisible=_autoCompletionResultsVisible;
@property(nonatomic) unsigned long long locationStatus; // @synthesize locationStatus=_locationStatus;
@property(retain, nonatomic) id <TSEGeoPlace> selectedGeoPlace; // @synthesize selectedGeoPlace=_selectedGeoPlace;
@property(nonatomic) _Bool waitingForLocation; // @synthesize waitingForLocation=_waitingForLocation;
@property(nonatomic) _Bool disallowAutocompletionVisible; // @synthesize disallowAutocompletionVisible=_disallowAutocompletionVisible;
@property(retain, nonatomic) CLLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
@property(readonly, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) id <TSEAccount> selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(readonly, nonatomic) UIBarButtonItem *spinnerBarButtonItem; // @synthesize spinnerBarButtonItem=_spinnerBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *tweetBarButtonItem; // @synthesize tweetBarButtonItem=_tweetBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(readonly, nonatomic) TSETweetComposerTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak TSETweetShareConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) TSETweetTextViewContainer *tweetTextViewContainer; // @synthesize tweetTextViewContainer=_tweetTextViewContainer;
@property(retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewTopConstraint; // @synthesize scrollViewTopConstraint=_scrollViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)autoCompletionTableViewController:(id)arg1 wantsToUpdateText:(id)arg2 proposedCursor:(struct _NSRange)arg3;
- (void)autoCompletionTableViewController:(id)arg1 wantsAutoCompletionResultsVisible:(_Bool)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationSelectionTableViewController:(id)arg1 didSelectLocation:(id)arg2;
- (void)accountSelectionTableViewController:(id)arg1 didSelectAccount:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_tseui_handleLocationSelectionRowTap;
- (void)_tseui_handleAccountSelectionRowTap;
- (void)_tseui_tweetButtonTapped;
- (void)_tseui_cancelButtonTapped;
- (void)_tseui_updateTweetButtonEnableState;
- (void)_tseui_updateAutoCompletion;
@property(readonly, nonatomic, getter=isAutoCompletionResultsDisplayAllowed) _Bool autoCompletionResultsDisplayAllowed;
- (void)pushLocationSelectionViewController;
- (void)_tseui_presentNoLocationPermissionAlert;
- (void)_tseui_requestLocationPermission;
- (void)_tseui_requestLocation;
- (void)updateLocationStatus;
- (void)_tseui_presentTweetPostRequestErrorAlert;
- (void)_tseui_tweetContentsChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_tseui_presentNoAccountsErrorAlert;
- (void)_tseui_updateContentConstraintsWithSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (_Bool)isAutoCompletionAvailable;
- (_Bool)isLocationSelectionAvailable;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
@property(readonly, nonatomic, getter=isShareSheetUIUpdateEnabled) _Bool shareSheetUIUpdateEnabled;
@property(readonly, nonatomic) double contentViewHeight;
@property(readonly, nonatomic) struct CGRect autoCompletionResultsViewControllerCalculatedFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

