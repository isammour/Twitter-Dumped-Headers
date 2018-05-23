//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1CombinedSignUpViewControllerDelegate-Protocol.h>

@class NSMutableSet, NSString, T1CombinedSignUpViewController, TFNOnboardingSignUpSubtask, TFNOnboardingSignUpSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingSignUpSubtaskController : T1OnboardingSubtaskController <T1CombinedSignUpViewControllerDelegate>
{
    TFNOnboardingSignUpSubtask *_subtask;
    TFNOnboardingSignUpSubtaskState *_state;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    T1CombinedSignUpViewController *_signUpViewController;
    NSMutableSet *_didScribeEditForElementSet;
    NSMutableSet *_didScribeValidationErrorForElementSet;
}

- (void).cxx_destruct;
- (id)private_scribeElementForFormField:(id)arg1;
- (void)private_submitWithForm:(id)arg1;
- (void)signUpFormViewController:(id)arg1 formFieldDidUpdateSelectedContactType:(long long)arg2 previousContactType:(long long)arg3;
- (void)signUpFormViewController:(id)arg1 formFieldDidUpdateValidity:(id)arg2;
- (void)signUpFormViewController:(id)arg1 formFieldDidUpdateUserInput:(id)arg2;
- (void)signUpFormViewController:(id)arg1 didReturnInstrumentationResult:(id)arg2;
- (void)signUpFormViewControllerDidTapSubmit:(id)arg1;
- (id)subtaskData;
- (void)restartWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

