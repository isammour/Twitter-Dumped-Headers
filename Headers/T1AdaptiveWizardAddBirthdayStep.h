//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAdaptiveWizardStep.h>

#import <T1Twitter/T1AddBirthdayViewControllerDelegate-Protocol.h>

@class T1ProfileUserDataSource;

@interface T1AdaptiveWizardAddBirthdayStep : TFNAdaptiveWizardStep <T1AddBirthdayViewControllerDelegate>
{
    T1ProfileUserDataSource *_profileUserDataSource;
}

- (void).cxx_destruct;
- (void)addBirthdayViewControllerDidTapSkip:(id)arg1;
- (void)addBirthdayViewController:(id)arg1 didTapNextWithBirthday:(id)arg2;
- (void)_t1_updateExtendedProfileWithAccount:(id)arg1;
- (_Bool)shouldSkipWithController:(id)arg1;
- (void)evaluateWithController:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

