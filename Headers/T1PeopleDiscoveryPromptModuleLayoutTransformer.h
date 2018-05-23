//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1PeopleDiscoveryModuleLayoutTransformer-Protocol.h>

@class NSPredicate, NSString, T1PeopleDiscoveryState, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1PeopleDiscoveryPromptModuleLayoutTransformer : NSObject <T1PeopleDiscoveryModuleLayoutTransformer>
{
    TFNTwitterAccount *_account;
    CDUnknownBlockType _userTapActionBlock;
    CDUnknownBlockType _tapActionBlock;
    CDUnknownBlockType _itemUpdateBlock;
    TFSTwitterScribeContext *_scribeContext;
    T1PeopleDiscoveryState *_state;
}

@property(readonly, nonatomic) T1PeopleDiscoveryState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, copy, nonatomic) CDUnknownBlockType itemUpdateBlock; // @synthesize itemUpdateBlock=_itemUpdateBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType userTapActionBlock; // @synthesize userTapActionBlock=_userTapActionBlock;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_scribeClickForModule:(id)arg1;
- (id)_uncollapsedPromptItemForModule:(id)arg1 collapsible:(_Bool)arg2;
- (id)_collapsedPromptItemForModule:(id)arg1;
- (id)_itemForModule:(id)arg1;
- (unsigned long long)_displayStyleForModule:(id)arg1;
- (id)scribeItemForModule:(id)arg1;
- (id)itemsForModule:(id)arg1;
@property(readonly, nonatomic) NSPredicate *predicate;
- (void)configureAdaptersForSectionController:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 userTapActionBlock:(CDUnknownBlockType)arg2 tapActionBlock:(CDUnknownBlockType)arg3 scribeContext:(id)arg4 itemUpdateBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

