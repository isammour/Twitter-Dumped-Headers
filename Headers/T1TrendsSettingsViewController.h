//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1TrendsLocationPickerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, TFNBooleanItem, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1TrendsSettingsViewControllerDelegate;

@interface T1TrendsSettingsViewController : TFNItemsDataViewController <T1TrendsLocationPickerViewControllerDelegate, TFNTwitterAuthenticated>
{
    TFSTwitterScribeContext *_scribeContext;
    _Bool _settingsChanged;
    TFNTwitterAccount *_account;
    id <T1TrendsSettingsViewControllerDelegate> _delegate;
    TFNBooleanItem *_personalizedTrendsItem;
}

@property(nonatomic) _Bool settingsChanged; // @synthesize settingsChanged=_settingsChanged;
@property(retain, nonatomic) TFNBooleanItem *personalizedTrendsItem; // @synthesize personalizedTrendsItem=_personalizedTrendsItem;
@property(nonatomic) __weak id <T1TrendsSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)tfn_prefersSubtitleInTitleHeaderView;
- (id)scribeContext;
- (void)_didTapLocation:(id)arg1;
- (void)_didTapDoneButton:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)trendsLocationPickerViewController:(id)arg1 didSelectLocation:(id)arg2;
- (_Bool)t1_showsComposeAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
