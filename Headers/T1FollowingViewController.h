//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersItemsTableViewController.h>

@interface T1FollowingViewController : T1UsersItemsTableViewController
{
    _Bool _shouldShowPeopleButton;
}

@property(readonly, nonatomic) _Bool shouldShowPeopleButton; // @synthesize shouldShowPeopleButton=_shouldShowPeopleButton;
- (_Bool)t1_showsComposeAction;
- (_Bool)t1_showsPeopleAction;
- (long long)dashContentItemType;
- (id)_scribeParametersForStreamUpdateWithCount:(long long)arg1;
- (id)scribeImpressionParameters;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeAssociations;
- (id)scribeSection;
- (id)scribePage;
- (id)_emptyStreamItem;
- (id)_userDataSource;
- (void)_streamDidUpdate:(id)arg1;
- (void)update:(_Bool)arg1;
- (id)initWithAccount:(id)arg1 userDataSource:(id)arg2 shouldShowPeopleButton:(_Bool)arg3;
- (id)initWithAccount:(id)arg1;

@end
