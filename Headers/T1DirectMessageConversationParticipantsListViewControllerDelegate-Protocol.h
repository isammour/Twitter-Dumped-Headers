//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersViewControllerDelegate-Protocol.h>

@class T1DirectMessageConversationParticipantsListViewController, TFNTwitterUser, UIView;

@protocol T1DirectMessageConversationParticipantsListViewControllerDelegate <T1UsersViewControllerDelegate>
- (void)directMessageConversationParticipantsListViewController:(T1DirectMessageConversationParticipantsListViewController *)arg1 didSelectUser:(TFNTwitterUser *)arg2;

@optional
- (void)directMessageConversationParticipantsListViewController:(T1DirectMessageConversationParticipantsListViewController *)arg1 didTapAddParticipantsRow:(UIView *)arg2;
@end

