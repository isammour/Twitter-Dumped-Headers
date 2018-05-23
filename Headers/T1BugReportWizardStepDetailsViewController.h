//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewController.h>

#import <T1Twitter/T1BugReportWizardStep-Protocol.h>
#import <T1Twitter/UITextFieldDelegate-Protocol.h>

@class NSString, UILabel, UITextField;

@interface T1BugReportWizardStepDetailsViewController : TFNDataViewController <UITextFieldDelegate, T1BugReportWizardStep>
{
    UITextField *_summaryTextField;
    UILabel *_summaryTitleLabel;
}

@property(readonly, nonatomic) UITextField *summaryTextField; // @synthesize summaryTextField=_summaryTextField;
@property(readonly, nonatomic) UILabel *summaryTitleLabel; // @synthesize summaryTitleLabel=_summaryTitleLabel;
- (void).cxx_destruct;
- (void)layoutGuidesDidChange:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)init;
- (id)nextStep;
- (void)updateBugReport:(id)arg1;
- (id)summary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

