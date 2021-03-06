//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersViewController.h>

#import <T1Twitter/T1DirectMessageConversationAddPeopleBehaviorDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNPageSheetModalViewControllerDelegate-Protocol.h>

@class NSString, T1DirectMessageConversation, T1DirectMessageConversationAddPeopleBehavior, TFNGenericItem, UIBarButtonItem;
@protocol T1UsersViewControllerDelegate><T1DirectMessageConversationParticipantsListViewControllerDelegate;

@interface T1DirectMessageConversationParticipantsListViewController : T1UsersViewController <T1DirectMessageConversationAddPeopleBehaviorDelegate, TFNPageSheetModalViewControllerDelegate, TFNModalSheetViewControllerDelegate>
{
    _Bool _showEditItemActions;
    _Bool _showEditNavigationActions;
    T1DirectMessageConversation *_conversation;
    TFNGenericItem *_addPeopleItem;
    T1DirectMessageConversationAddPeopleBehavior *_addPeopleBehavior;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) T1DirectMessageConversationAddPeopleBehavior *addPeopleBehavior; // @synthesize addPeopleBehavior=_addPeopleBehavior;
@property(retain, nonatomic) TFNGenericItem *addPeopleItem; // @synthesize addPeopleItem=_addPeopleItem;
@property(retain, nonatomic) T1DirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool showEditNavigationActions; // @synthesize showEditNavigationActions=_showEditNavigationActions;
@property(nonatomic) _Bool showEditItemActions; // @synthesize showEditItemActions=_showEditItemActions;
- (void).cxx_destruct;
- (void)_updateUserIDs;
- (void)_configureUserCellForRoundAvatars:(id)arg1;
- (void)_showAddPeople:(id)arg1;
- (void)_didTapAdd:(id)arg1;
- (void)_didSelectUser:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)addPeopleBehaviorDidFinish:(id)arg1;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)pageSheetModalViewControllerWillExpandHeight:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)customActionItems;
- (_Bool)shouldShowBioForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (void)configureUserCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)t1_showsComposeAction;
- (_Bool)t1_showsSearchAction;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1 account:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <T1UsersViewControllerDelegate><T1DirectMessageConversationParticipantsListViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

