//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class PTVMessage;

@protocol PTVChatDeliveryQueueDelegate <NSObject>
- (_Bool)chatDeliveryQueueShouldImmediatelyUnloadBroadcastEndedMessage:(PTVMessage *)arg1;
- (_Bool)chatDeliveryQueueShouldDeliverMessage:(PTVMessage *)arg1;
- (void)chatDeliveryQueueDidDeliverMessage:(PTVMessage *)arg1 deliveryQueueSize:(unsigned long long)arg2;

@optional
- (void)chatDeliveryQueueDidDropMessage:(PTVMessage *)arg1;
@end

