//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TLPSubscriptionCollection : NSObject
{
    NSMutableDictionary *_subscriptions;
}

- (void).cxx_destruct;
- (void)distributeEvent:(id)arg1;
- (id)allSubscriptions;
- (id)allTopics;
- (_Bool)containsTopic:(id)arg1;
- (_Bool)contains:(id)arg1;
- (void)changeState:(long long)arg1;
- (void)pauseAndRemoveAll;
- (void)removeAll;
- (void)removeSubscriptionsByTopic:(id)arg1;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (_Bool)isEmpty;
- (id)init;

@end
