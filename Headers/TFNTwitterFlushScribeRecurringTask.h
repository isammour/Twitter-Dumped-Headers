//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterBaseTwitterRecurringTask.h>

@class NSMutableDictionary;

@interface TFNTwitterFlushScribeRecurringTask : TFNTwitterBaseTwitterRecurringTask
{
    NSMutableDictionary *_tokens;
    _Bool _observing;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)tfs_priorityForEvent:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_acquireAccount:(out id *)arg1 scribe:(out id *)arg2;
- (void)tfs_triggerFromService:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_selectNextInactiveAccount;
- (void)_flushNotification:(id)arg1;
- (void)_stopObservingFlushNotificationIfNecessary;
- (void)_startObservingFlushNotificationIfNecessary;
- (void)dealloc;
- (id)initWithTwitter:(id)arg1 type:(long long)arg2;

@end

