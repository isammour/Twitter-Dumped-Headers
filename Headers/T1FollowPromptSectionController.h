//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewSectionController.h>

#import <T1Twitter/T1SuggestsModuleHeaderViewDelegate-Protocol.h>
#import <T1Twitter/T1UserOrRecommendationTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/TFNItemsTransformer-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterFollowPrompt;

@interface T1FollowPromptSectionController : TFNItemsDataViewSectionController <T1UserOrRecommendationTableRowAdapterDelegate, T1SuggestsModuleHeaderViewDelegate, TFNItemsTransformer>
{
    TFNTwitterFollowPrompt *_followPrompt;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterFollowPrompt *followPrompt; // @synthesize followPrompt=_followPrompt;
- (void).cxx_destruct;
- (id)transformItem:(id)arg1;
- (id)scribeComponent;
- (unsigned long long)sectionBreaksForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)reuseIdentifierForModule:(id)arg1;
- (id)timelineObjectForItemAtIndexPath:(id)arg1;
- (_Bool)isLogicalSectionController;
- (_Bool)userRowAdapterShouldUpdateHomeTimelineOnUnfollow:(id)arg1;
- (void)userRowAdapter:(id)arg1 user:(id)arg2 didPerformAction:(unsigned long long)arg3 success:(_Bool)arg4 error:(id)arg5;
- (id)userRowAdapter:(id)arg1 associatedStatusForUser:(id)arg2;
- (id)_t1_followPromptAssociatedStatus;
- (void)headerViewDidTapCaret:(id)arg1;
- (void)_t1_didTapDismiss;
- (_Bool)dismissItem:(id)arg1 withInfo:(id)arg2 atIndexPath:(id)arg3;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)init;
- (id)initWithFollowPrompt:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

