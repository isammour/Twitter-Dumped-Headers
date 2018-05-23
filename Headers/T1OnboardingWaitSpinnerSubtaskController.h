//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1OnboardingWaitable-Protocol.h>

@class NSDate, NSString, TFNHUD, TFNOnboardingWaitSpinnerSubtask, TFNOnboardingWaitSpinnerSubtaskState, TFSTimer;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingWaitSpinnerSubtaskController : T1OnboardingSubtaskController <T1OnboardingWaitable>
{
    NSDate *_startTime;
    TFNHUD *_hud;
    TFNOnboardingWaitSpinnerSubtask *_subtask;
    TFNOnboardingWaitSpinnerSubtaskState *_state;
    TFSTimer *_initialTimer;
    TFSTimer *_extensionTimer;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    _Bool _shouldOverrideTimer;
    NSString *_currentMessage;
}

- (void).cxx_destruct;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (_Bool)_t1_shouldExtend;
- (long long)_t1_millisecondsSinceStart;
- (void)_t1_showHud;
- (void)_t1_update;
- (void)_t1_extensionTimerFired;
- (void)_t1_timerFired;
- (id)_t1_spinnerMessage;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

