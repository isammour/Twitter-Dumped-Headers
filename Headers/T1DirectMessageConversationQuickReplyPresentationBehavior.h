//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class T1DirectMessageConversationEntriesViewModel;
@protocol T1DirectMessageQuickReplyPresentationDelegate;

@interface T1DirectMessageConversationQuickReplyPresentationBehavior : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: delegate
    // Error parsing type: , name: conversationViewModel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)hideQuickReply;
- (void)conversationUpdated;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, retain) T1DirectMessageConversationEntriesViewModel *conversationViewModel; // @synthesize conversationViewModel;
@property(nonatomic) __weak id <T1DirectMessageQuickReplyPresentationDelegate> delegate; // @synthesize delegate;

@end

