//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, TFNPopoverSourceInfo;
@protocol T1DirectMessageConversationHost;

@protocol T1DirectMessageCreateConversationPresentation
@property(nonatomic, readonly) id <T1DirectMessageConversationHost> conversationHost;
@property(nonatomic, readonly) TFNPopoverSourceInfo *source;

@optional
@property(nonatomic, readonly) NSString *prefilledText;
@end
