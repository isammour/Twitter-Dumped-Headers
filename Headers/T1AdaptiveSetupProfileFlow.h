//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAdaptiveWizardFlow.h>

@class NSArray, TFNTwitterAccount;

@interface T1AdaptiveSetupProfileFlow : TFNAdaptiveWizardFlow
{
    TFNTwitterAccount *_account;
    NSArray *_steps;
}

- (id)steps;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_didRemoveAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end
