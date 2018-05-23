//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1DirectMessageConversationMediaAutoplayBehavior;
@protocol T1DirectMessageConversationMediaAutoplayBehaviorPlayerProperties, T1DirectMessageEntryCellAutoplayable;

@protocol T1DirectMessageConversationMediaAutoplayFrameworkAdapter <NSObject>
@property(nonatomic) __weak T1DirectMessageConversationMediaAutoplayBehavior *behavior;
- (void)cleanUpPlayer:(id <T1DirectMessageConversationMediaAutoplayBehaviorPlayerProperties>)arg1;
- (void)playWithPlayer:(id <T1DirectMessageConversationMediaAutoplayBehaviorPlayerProperties>)arg1 cell:(id <T1DirectMessageEntryCellAutoplayable>)arg2;
- (id <T1DirectMessageConversationMediaAutoplayBehaviorPlayerProperties>)playerForDirectMessageEntryCell:(id <T1DirectMessageEntryCellAutoplayable>)arg1;
@end

