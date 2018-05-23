//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAdaptiveWizardStep.h>

#import <T1Twitter/T1AccountAdder-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface T1AdaptiveWizardResumeAccountStep : TFNAdaptiveWizardStep <T1AccountAdder, TFNTwitterAuthenticated>
{
    CDUnknownBlockType _didAddAccountBlock;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didAddAccountBlock; // @synthesize didAddAccountBlock=_didAddAccountBlock;
- (void).cxx_destruct;
- (void)evaluateWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
