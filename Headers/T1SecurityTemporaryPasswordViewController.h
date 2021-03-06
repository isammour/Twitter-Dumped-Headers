//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1SecurityTemporaryPasswordViewDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, T1SecurityTemporaryPasswordView, TFNTwitterAccount;

@interface T1SecurityTemporaryPasswordViewController : TFNViewController <TFNTwitterAuthenticated, T1SecurityTemporaryPasswordViewDelegate>
{
    T1SecurityTemporaryPasswordView *_passwordView;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)tfn_prefersSubtitleInTitleHeaderView;
- (_Bool)t1_showsComposeAction;
- (void)_generateTemporaryPassword;
- (void)_copyToClipboard:(id)arg1;
- (void)temporaryPasswordView:(id)arg1 didTapTemporaryPasswordLabel:(id)arg2;
- (void)temporaryPasswordView:(id)arg1 didTapGenerateButton:(id)arg2;
- (void)viewDidLoad;
- (id)init;
- (id)passwordView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

