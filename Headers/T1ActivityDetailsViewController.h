//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSString, T1StatusTableRowAdapter, T1UserOrRecommendationTableRowAdapter, TFNTwitterAccount, TFNTwitterActivityItem, TFSTwitterScribeContext;

@interface T1ActivityDetailsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    TFNTwitterActivityItem *_activityItem;
    T1UserOrRecommendationTableRowAdapter *_userTableRowAdapter;
    TFSTwitterScribeContext *_sourceScribeContext;
    T1StatusTableRowAdapter *_statusAdapter;
}

+ (id)scribePageForActivityItem:(id)arg1;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext; // @synthesize sourceScribeContext=_sourceScribeContext;
@property(readonly, nonatomic) T1UserOrRecommendationTableRowAdapter *userTableRowAdapter; // @synthesize userTableRowAdapter=_userTableRowAdapter;
@property(retain, nonatomic) TFNTwitterActivityItem *activityItem; // @synthesize activityItem=_activityItem;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_activityDetailStatusWasDeleted:(id)arg1;
- (void)_t1_listenForStatusDeletions;
- (id)_t1_generatedSections;
- (id)_activityDetailsViewSubtitle;
- (id)_t1_activityDetailsViewTitle;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeContext;
- (id)scribe;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

