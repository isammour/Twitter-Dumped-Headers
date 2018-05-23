//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNNavigationController.h>

@class NSMutableArray, TFNAdaptiveWizardFlow;

@interface TFNAdaptiveWizardNavigationController : TFNNavigationController
{
    _Bool _showingProgress;
    TFNAdaptiveWizardFlow *_wizardFlow;
    NSMutableArray *_firstViewControllers;
}

+ (id)private_buttonInToolbarItems:(id)arg1 atIndex:(long long)arg2;
+ (id)secondaryButtonInToolbarItems:(id)arg1;
+ (id)continueButtonInToolbarItems:(id)arg1;
+ (id)toolbarButtonsWithTarget:(id)arg1 continueButtonLabel:(id)arg2 continueButtonAction:(SEL)arg3 secondaryButtonLabel:(id)arg4 secondaryButtonAction:(SEL)arg5;
+ (id)toolbarButtonsWithTarget:(id)arg1 continueButtonLabel:(id)arg2 continueButtonAction:(SEL)arg3;
@property(nonatomic) _Bool showingProgress; // @synthesize showingProgress=_showingProgress;
@property(retain, nonatomic) NSMutableArray *firstViewControllers; // @synthesize firstViewControllers=_firstViewControllers;
@property(readonly, nonatomic) TFNAdaptiveWizardFlow *wizardFlow; // @synthesize wizardFlow=_wizardFlow;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isAtEnd;
- (void)evaluateNextStep;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (_Bool)supportsInteractivePops;
- (void)hideProgressBar;
- (void)progressCompleted;
- (void)_progressUpdated:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)progressUpdated:(double)arg1;
- (void)progressStarted:(double)arg1;
- (struct CGSize)preferredContentSize;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 wizardFlow:(id)arg3;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

@end

