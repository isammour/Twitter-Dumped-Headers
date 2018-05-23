//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>
#import <T1Twitter/UISearchBarDelegate-Protocol.h>

@class NSString, TFNRoundedSearchBar, TFNSpacerView, TFNTwitterAccount, TFNTwitterTrendsLocationList;
@protocol T1TrendsLocationPickerViewControllerDelegate;

@interface T1TrendsLocationPickerViewController : TFNItemsDataViewController <UISearchBarDelegate, TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    id <T1TrendsLocationPickerViewControllerDelegate> _delegate;
    TFNTwitterTrendsLocationList *_locationList;
    TFNRoundedSearchBar *_searchBar;
    TFNSpacerView *_searchBarSpacerView;
}

@property(retain, nonatomic) TFNSpacerView *searchBarSpacerView; // @synthesize searchBarSpacerView=_searchBarSpacerView;
@property(retain, nonatomic) TFNRoundedSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) TFNTwitterTrendsLocationList *locationList; // @synthesize locationList=_locationList;
@property(nonatomic) __weak id <T1TrendsLocationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)tfn_prefersSubtitleInTitleHeaderView;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)t1_showsComposeAction;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)setSections:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

