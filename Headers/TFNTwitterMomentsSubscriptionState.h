//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterMomentsSubscriptionState : NSObject
{
    _Bool _subscribed;
    NSString *_momentID;
}

@property(readonly, nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
- (void).cxx_destruct;
- (id)initWithMomentID:(id)arg1 subscribed:(_Bool)arg2;
- (id)init;

@end
