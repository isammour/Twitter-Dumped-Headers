//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSArray, NSMutableArray, NSString, T1StatusTableRowAdapter, TFNTwitterAccount, TFSKVODispatcher;

@interface T1ItemsDataModulesViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    T1StatusTableRowAdapter *_statusAdapter;
    NSArray *_moduleSections;
    NSMutableArray *_scrollListeningModules;
    NSMutableArray *_updatableModules;
    TFSKVODispatcher *_offsetListener;
    NSArray *_allModules;
}

@property(retain, nonatomic) NSArray *allModules; // @synthesize allModules=_allModules;
@property(retain, nonatomic) TFSKVODispatcher *offsetListener; // @synthesize offsetListener=_offsetListener;
@property(retain, nonatomic) NSMutableArray *updatableModules; // @synthesize updatableModules=_updatableModules;
@property(retain, nonatomic) NSMutableArray *scrollListeningModules; // @synthesize scrollListeningModules=_scrollListeningModules;
@property(retain, nonatomic) NSArray *moduleSections; // @synthesize moduleSections=_moduleSections;
@property(readonly, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)_module:(id)arg1 supportsOrientation:(long long)arg2;
- (long long)_currentOrientation;
- (void)_unregisterModule:(id)arg1;
- (void)_registerModule:(id)arg1;
- (void)_updateSections;
- (void)_buildSectionsForOrientation:(long long)arg1;
- (void)_updateSectionsFromModulesForOrientation:(long long)arg1;
- (void)moduleDidUpdate:(id)arg1;
- (id)buildModules;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (_Bool)t1_showsComposeAction;
- (_Bool)t1_showsSearchAction;
- (void)moduleHiddenStatusUpdatedNotification:(id)arg1;
- (void)moduleUpdatedNotification:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)addStatusRenderingSupport;
- (void)reloadModules;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

