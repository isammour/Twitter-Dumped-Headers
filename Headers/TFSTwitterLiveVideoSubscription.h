//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFSTwitterLiveVideoSubscription : NSObject
{
    _Bool _subscribed;
    NSString *_notificationID;
}

+ (id)subscriptionWithJSONData:(id)arg1 error:(out id *)arg2;
@property(readonly, copy, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(readonly, nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(out id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

