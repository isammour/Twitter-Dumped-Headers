//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1OnboardingSettingsValueViewModelDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount;
@protocol T1OnboardingSettingsListViewControllerDelegate;

@interface T1OnboardingSettingsListViewController : TFNItemsDataViewController <UIScrollViewDelegate, T1OnboardingSettingsValueViewModelDelegate>
{
    id <T1OnboardingSettingsListViewControllerDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_agreeLabel;
    NSArray *_settings;
    NSArray *_viewModels;
    TFNTwitterAccount *_account;
    _Bool _didReachEnd;
    _Bool _shouldShowTitleInNavigationBar;
}

@property(nonatomic) _Bool shouldShowTitleInNavigationBar; // @synthesize shouldShowTitleInNavigationBar=_shouldShowTitleInNavigationBar;
- (void).cxx_destruct;
- (id)private_dataViewItemsForViewModels:(id)arg1;
- (id)private_viewModelsForAccount:(id)arg1 settings:(id)arg2;
- (id)private_toolbarItemsWithAgreeLabel:(id)arg1;
- (void)private_nextTapped:(id)arg1;
- (void)private_updateToolbarWaiting:(_Bool)arg1;
- (void)private_updateTableHeaderLayout;
- (void)update:(_Bool)arg1;
- (void)onboardingSettingsValueViewModel:(id)arg1 didSelectSettingsList:(id)arg2 forSettingsValue:(id)arg3;
- (void)onboardingSettingsValueViewModel:(id)arg1 didSelectActionLink:(id)arg2;
- (void)onboardingSettingsValueViewModel:(id)arg1 didChangeForSettingsValue:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 settings:(id)arg2 title:(id)arg3 subtitle:(id)arg4 agreeLabel:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

