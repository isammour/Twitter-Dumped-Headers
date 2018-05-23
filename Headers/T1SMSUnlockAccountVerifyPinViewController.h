//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, TFNButton, TFNDataViewItem, TFNHUD, TFNTwitterAccount;

@interface T1SMSUnlockAccountVerifyPinViewController : TFNFormViewController <TFNAttributedTextViewDelegate, TFNTwitterAuthenticated>
{
    _Bool _beganTypingOnce;
    TFNTwitterAccount *_account;
    TFNDataViewItem *_confirmHeader;
    TFNButton *_submitButton;
    NSString *_phoneNumberString;
    long long _keyboardType;
    TFNHUD *_hud;
}

@property(nonatomic) _Bool beganTypingOnce; // @synthesize beganTypingOnce=_beganTypingOnce;
@property(retain, nonatomic) TFNHUD *hud; // @synthesize hud=_hud;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_handleVerificationError:(id)arg1 form:(id)arg2;
- (void)_resendFailure;
- (void)_resendSuccess;
- (void)_resendSMS;
- (void)attributedTextView:(id)arg1 didLongPressRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)_didStartTypingPin;
- (_Bool)_isFirstTimeEditingPin:(id)arg1;
- (void)formFieldCell:(id)arg1 textField:(id)arg2 didChangeText:(id)arg3;
- (void)setSections:(id)arg1;
- (void)submitForm;
- (id)footerItems;
- (id)submitButton;
@property(readonly, nonatomic) TFNDataViewItem *confirmHeader; // @synthesize confirmHeader=_confirmHeader;
- (void)viewDidLoad;
- (id)initWithForm:(id)arg1 appearance:(id)arg2 typeaheadStore:(id)arg3;
- (id)initWithPhoneNumber:(id)arg1 keyboardType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

