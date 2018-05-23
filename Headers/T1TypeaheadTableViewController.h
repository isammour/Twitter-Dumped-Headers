//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1TypeaheadEventTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TypeaheadSearchQueryTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TypeaheadTopicTableRowHost-Protocol.h>
#import <T1Twitter/T1TypeaheadUserTableRowHost-Protocol.h>

@class NSString, T1TypeaheadEventTableRowAdapter, T1TypeaheadHashtagTableRowAdapter, T1TypeaheadSearchQueryTableRowAdapter, T1TypeaheadTopicTableRowAdapter, T1TypeaheadUserTableRowAdapter, TFNTwitterAccount;
@protocol T1TypeaheadTableViewControllerDelegate;

@interface T1TypeaheadTableViewController : TFNItemsDataViewController <T1TypeaheadSearchQueryTableRowAdapterDelegate, T1TypeaheadEventTableRowAdapterDelegate, T1TypeaheadUserTableRowHost, T1TypeaheadTopicTableRowHost>
{
    id <T1TypeaheadTableViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    NSString *_typeaheadString;
    T1TypeaheadSearchQueryTableRowAdapter *_queryAdapter;
    T1TypeaheadUserTableRowAdapter *_userAdapter;
    T1TypeaheadHashtagTableRowAdapter *_hashtagAdapter;
    T1TypeaheadTopicTableRowAdapter *_topicAdapter;
    T1TypeaheadEventTableRowAdapter *_eventAdapter;
}

@property(readonly, nonatomic) T1TypeaheadEventTableRowAdapter *eventAdapter; // @synthesize eventAdapter=_eventAdapter;
@property(readonly, nonatomic) T1TypeaheadTopicTableRowAdapter *topicAdapter; // @synthesize topicAdapter=_topicAdapter;
@property(readonly, nonatomic) T1TypeaheadHashtagTableRowAdapter *hashtagAdapter; // @synthesize hashtagAdapter=_hashtagAdapter;
@property(readonly, nonatomic) T1TypeaheadUserTableRowAdapter *userAdapter; // @synthesize userAdapter=_userAdapter;
@property(readonly, nonatomic) T1TypeaheadSearchQueryTableRowAdapter *queryAdapter; // @synthesize queryAdapter=_queryAdapter;
@property(copy, nonatomic) NSString *typeaheadString; // @synthesize typeaheadString=_typeaheadString;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1TypeaheadTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (void)eventAdapter:(id)arg1 didSelectEvent:(id)arg2 atIndexPath:(id)arg3;
- (void)searchQueryAdapter:(id)arg1 didSelectSearchQuery:(id)arg2 atIndexPath:(id)arg3;
- (void)typeaheadTopicAdapter:(id)arg1 didSelectTopic:(id)arg2 atIndexPath:(id)arg3;
- (void)typeaheadHashtagAdapter:(id)arg1 didSelectHashtag:(id)arg2 atIndexPath:(id)arg3;
- (void)typeaheadUserAdapter:(id)arg1 didSelectUser:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)t1_showsSearchAction;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
