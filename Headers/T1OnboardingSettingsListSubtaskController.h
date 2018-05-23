//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1OnboardingSettingsListViewControllerDelegate-Protocol.h>

@class NSString, TFNOnboardingSettingsListSubtask, TFNOnboardingSettingsListSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingSettingsListSubtaskController : T1OnboardingSubtaskController <T1OnboardingSettingsListViewControllerDelegate>
{
    TFNOnboardingSettingsListSubtask *_subtask;
    TFNOnboardingSettingsListSubtaskState *_state;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)settingsListViewController:(id)arg1 didTapActionLink:(id)arg2;
- (void)settingsListViewControllerDidTapAgree:(id)arg1;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

