//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPILiveEventSubscriptionCommand : TFSTwitterAPICommand
{
    _Bool _remindMe;
    NSString *_eventID;
    NSString *_notificationID;
}

@property(copy, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic) _Bool remindMe; // @synthesize remindMe=_remindMe;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 eventID:(id)arg3 remindMe:(_Bool)arg4 notificationID:(id)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

