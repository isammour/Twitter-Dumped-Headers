//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, T1DirectMessageConversation, T1DirectMessageTypeaheadRowAdapter, T1DirectMessageUser, TFNTwitterTypeaheadUser, TFNTwitterUser;

@protocol T1DirectMessageTypeaheadRowAdapterDelegate <NSObject>

@optional
- (void)directMessageTypeaheadRowAdapter:(T1DirectMessageTypeaheadRowAdapter *)arg1 didSelectConversation:(T1DirectMessageConversation *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)directMessageTypeaheadRowAdapter:(T1DirectMessageTypeaheadRowAdapter *)arg1 didSelectDirectMessageUser:(T1DirectMessageUser *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)directMessageTypeaheadRowAdapter:(T1DirectMessageTypeaheadRowAdapter *)arg1 didSelectTypeaheadUser:(TFNTwitterTypeaheadUser *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)directMessageTypeaheadRowAdapter:(T1DirectMessageTypeaheadRowAdapter *)arg1 didSelectUser:(TFNTwitterUser *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

