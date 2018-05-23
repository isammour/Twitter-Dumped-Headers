//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAdaptiveWizardStep.h>

#import <T1Twitter/T1EnterEmailViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1EnterPhoneViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1VerifyPhoneViewControllerDelegate-Protocol.h>

@class NSString, TFNPhoneNumberFormatter;

@interface T1AdaptiveWizardAddSecondaryIdentifierStep : TFNAdaptiveWizardStep <T1EnterEmailViewControllerDelegate, T1EnterPhoneViewControllerDelegate, T1VerifyPhoneViewControllerDelegate>
{
    TFNPhoneNumberFormatter *_phoneNumberFormatter;
}

@property(readonly, nonatomic) TFNPhoneNumberFormatter *phoneNumberFormatter; // @synthesize phoneNumberFormatter=_phoneNumberFormatter;
- (void).cxx_destruct;
- (void)_verifyAndSkipStepWithMessage:(id)arg1 cancelButtonTitle:(id)arg2;
- (void)_resendSMS;
- (void)didTapDidNotReceiveSMS:(id)arg1 sender:(id)arg2;
- (void)_handleDeviceVerificationSuccess:(id)arg1;
- (void)verifyPhoneViewController:(id)arg1 verifyPhoneWithForm:(id)arg2;
- (void)enterPhoneViewController:(id)arg1 didTapShowAdvancedOptions:(id)arg2;
- (void)enterPhoneViewControllerDidTapSkip:(id)arg1;
- (void)_handleDeviceRegistrationError:(id)arg1 scribePage:(id)arg2;
- (void)_handleDeviceRegistrationSuccess:(id)arg1;
- (void)_requestDeviceRegistration:(CDUnknownBlockType)arg1;
- (void)enterPhoneViewController:(id)arg1 enteredPhone:(id)arg2 normalizedPhone:(id)arg3 uiMetricResult:(id)arg4;
- (void)enterEmailViewController:(id)arg1 didTapShowAdvancedOptions:(id)arg2;
- (void)enterEmailViewControllerDidTapSkip:(id)arg1;
- (void)enterEmailViewController:(id)arg1 enteredEmail:(id)arg2 uiMetricResult:(id)arg3;
- (id)_signUpInfoProvider;
- (void)evaluateWithController:(id)arg1;
- (_Bool)shouldSkipWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

