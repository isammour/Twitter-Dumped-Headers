//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageModelObject.h>

#import <T1Twitter/TFNDirectMessageContextConversationFactory-Protocol.h>

@interface TFNDirectMessageConversationFactory : TFNDirectMessageModelObject <TFNDirectMessageContextConversationFactory>
{
}

- (id)_t1_definitiveGroupConversationWithUsers:(id)arg1;
- (id)_t1_definitiveOneToOneConversationWithUserID:(long long)arg1 encrypted:(_Bool)arg2;
- (id)_t1_conversationWithDirectMessageUsers:(id)arg1;
- (id)conversationWithConversationID:(id)arg1;
- (id)conversationWithUsers:(id)arg1;
- (id)encryptedOneToOneConversationWithUser:(id)arg1;
- (id)oneToOneConversationWithUser:(id)arg1;

@end

