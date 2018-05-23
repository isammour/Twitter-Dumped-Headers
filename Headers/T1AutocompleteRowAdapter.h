//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount;

@interface T1AutocompleteRowAdapter : TFNItemsTableRowAdapter <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    NSArray *_includedMentionUserIDs;
    NSArray *_excludedReplyUserIDs;
    long long _userColorScheme;
}

@property(nonatomic) long long userColorScheme; // @synthesize userColorScheme=_userColorScheme;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs; // @synthesize excludedReplyUserIDs=_excludedReplyUserIDs;
@property(copy, nonatomic) NSArray *includedMentionUserIDs; // @synthesize includedMentionUserIDs=_includedMentionUserIDs;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

