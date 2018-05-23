//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1InterestPickerPillsViewController.h>

#import <T1Twitter/T1InterestPickerDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingWaitable-Protocol.h>

@class NSString;
@protocol T1OnboardingInterestPickerViewControllerDelegate;

@interface T1OnboardingInterestPickerViewController : T1InterestPickerPillsViewController <T1InterestPickerDelegate, T1OnboardingWaitable>
{
    id <T1OnboardingInterestPickerViewControllerDelegate> _delegate;
    _Bool _lastTappedSkip;
}

- (void).cxx_destruct;
- (void)private_updateToolbarWaiting:(_Bool)arg1;
- (id)private_toolbarItemsWithNextLabel:(id)arg1 skipLabel:(id)arg2;
- (void)private_nextTapped:(id)arg1;
- (void)private_skipTapped:(id)arg1;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)interestPickerSelectionDidEndSearch:(id)arg1;
- (void)interestPickerSelectionDidStartSearch:(id)arg1;
- (void)interestPickerSelectionDidChange:(id)arg1;
- (long long)tfn_preferredToolbarVisibility;
- (void)setInterestPickerDelegate:(id)arg1;
- (id)initWithAccount:(id)arg1 title:(id)arg2 subtitle:(id)arg3 searchHint:(id)arg4 nextLabel:(id)arg5 skipLabel:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
