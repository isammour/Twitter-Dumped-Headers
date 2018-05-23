//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAdaptiveWizardFlow.h>

@class NSArray, NSString, TFNTwitterAccount;

@interface T1AdaptiveSignInFlow : TFNAdaptiveWizardFlow
{
    NSString *_username;
    TFNTwitterAccount *_account;
    NSArray *_steps;
}

@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_stepController:(id)arg1 didAddAccount:(id)arg2;
- (void)completeFlowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUsername:(id)arg1;
- (id)init;

@end

