//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterLiveEventRemindMeSubscription : NSObject
{
    _Bool _enabled;
    _Bool _subscribed;
    NSString *_notificationID;
}

@property(readonly, copy, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (_Bool)isEqualToRemindMeSubscription:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1 subscribed:(_Bool)arg2 notificationID:(id)arg3;
- (id)initWithCardData:(id)arg1;
- (id)init;

@end

