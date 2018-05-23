//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TFNUI/UITableViewDataSource-Protocol.h>
#import <TFNUI/UITableViewDelegate-Protocol.h>
#import <TFNUI/UITextFieldDelegate-Protocol.h>

@class NSMutableArray, NSString, UIAlertView, UITableView;

@interface TFXParametersSaveConfigViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIAlertView *_saveAlert;
    NSMutableArray *_configItems;
}

@property(retain) NSMutableArray *configItems; // @synthesize configItems=_configItems;
@property(retain) UIAlertView *saveAlert; // @synthesize saveAlert=_saveAlert;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectModified:(id)arg1;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
