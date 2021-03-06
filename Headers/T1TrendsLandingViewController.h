//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1TrendsSettingsViewControllerDelegate-Protocol.h>

@class NSString, T1URTViewController, TFNTwitterAccount;

@interface T1TrendsLandingViewController : TFNViewController <T1TrendsSettingsViewControllerDelegate>
{
    TFNTwitterAccount *_account;
    T1URTViewController *_trendsURTChildViewController;
}

@property(retain, nonatomic) T1URTViewController *trendsURTChildViewController; // @synthesize trendsURTChildViewController=_trendsURTChildViewController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)_showSettings:(id)arg1;
- (id)_settingsButton;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)trendsSettingsDidUpdate;
- (_Bool)t1_showsComposeAction;
- (_Bool)t1_showsSearchAction;
- (id)tfn_contentScrollView;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

