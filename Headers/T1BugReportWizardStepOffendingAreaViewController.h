//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1BugReportWizardStep-Protocol.h>

@class NSArray, NSString;

@interface T1BugReportWizardStepOffendingAreaViewController : TFNItemsDataViewController <T1BugReportWizardStep>
{
    NSArray *_reportInfos;
    long long _selectedIndex;
}

- (void).cxx_destruct;
- (id)_reportInfos;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)nextStep;
- (void)updateBugReport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

