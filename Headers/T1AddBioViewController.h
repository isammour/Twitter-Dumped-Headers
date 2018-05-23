//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1AddBioFieldDelegate-Protocol.h>
#import <T1Twitter/T1InterestPickerInterestItemAdapterDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSMutableArray, NSString, T1AddBioField, T1AddBioInterestsCollectionViewBackground, T1AddBioInterestsCollectionViewController, T1OnboardingHeaderView, TFNBarButtonItem, TFNTwitterAccount;
@protocol T1AddBioViewControllerDelegate;

@interface T1AddBioViewController : TFNViewController <T1AddBioFieldDelegate, T1InterestPickerInterestItemAdapterDelegate, TFNTwitterAuthenticated>
{
    _Bool _showHeader;
    TFNTwitterAccount *_account;
    NSString *_bio;
    T1OnboardingHeaderView *_headerView;
    T1AddBioField *_addBioField;
    TFNBarButtonItem *_nextBarButtonItem;
    NSMutableArray *_customConstraints;
    T1AddBioInterestsCollectionViewController *_interestsCollectionViewController;
    T1AddBioInterestsCollectionViewBackground *_interestsCollectionViewBackground;
    id <T1AddBioViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <T1AddBioViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1AddBioInterestsCollectionViewBackground *interestsCollectionViewBackground; // @synthesize interestsCollectionViewBackground=_interestsCollectionViewBackground;
@property(retain, nonatomic) T1AddBioInterestsCollectionViewController *interestsCollectionViewController; // @synthesize interestsCollectionViewController=_interestsCollectionViewController;
@property(retain, nonatomic) NSMutableArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) T1AddBioField *addBioField; // @synthesize addBioField=_addBioField;
@property(readonly, nonatomic) T1OnboardingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(retain, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)layoutGuidesDidChange:(long long)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)interestAdapter:(id)arg1 didSelectInterest:(id)arg2 atIndexPath:(id)arg3;
- (void)addBioField:(id)arg1 didReturn:(id)arg2;
- (void)addBioFieldDidEndEditing:(id)arg1;
- (void)addBioFieldDidBeginEditing:(id)arg1;
- (void)addBioField:(id)arg1 didChangeText:(id)arg2;
- (id)scribeSection;
- (id)scribePage;
@property(readonly, nonatomic) _Bool hasInterests;
- (void)_nextTapped;
- (void)_skipTapped;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)tfn_preferredToolbarVisibility;
- (void)_updateConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
