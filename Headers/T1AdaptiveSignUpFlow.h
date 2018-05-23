//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAdaptiveWizardFlow.h>

@class NSArray, NSString, T1AdaptiveSpammyPhoneChallengeFlow, T1MandatoryPhoneSignUpInfoProvider, TFNTwitterAccount;

@interface T1AdaptiveSignUpFlow : TFNAdaptiveWizardFlow
{
    TFNTwitterAccount *_account;
    NSArray *_steps;
    T1MandatoryPhoneSignUpInfoProvider *_mandatoryPhoneSignUpInfo;
    long long _signupStepCount;
    T1AdaptiveSpammyPhoneChallengeFlow *_spammySubFlow;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) T1AdaptiveSpammyPhoneChallengeFlow *spammySubFlow; // @synthesize spammySubFlow=_spammySubFlow;
@property(nonatomic) long long signupStepCount; // @synthesize signupStepCount=_signupStepCount;
@property(retain, nonatomic) T1MandatoryPhoneSignUpInfoProvider *mandatoryPhoneSignUpInfo; // @synthesize mandatoryPhoneSignUpInfo=_mandatoryPhoneSignUpInfo;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *scribeComponent;
- (void)_handleSuspendedAccountWithController:(id)arg1;
- (void)_addOnboardingSteps;
- (void)_stepController:(id)arg1 didAddAccount:(id)arg2;
- (void)completeFlowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didRemoveAccount:(id)arg1;
- (id)initWithSignUpType:(unsigned long long)arg1 accountToResume:(id)arg2;
- (id)initWithSignUpType:(unsigned long long)arg1;
- (id)init;

@end
