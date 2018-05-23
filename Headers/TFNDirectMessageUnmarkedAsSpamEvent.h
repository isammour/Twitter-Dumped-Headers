//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNDirectMessageEvent-Protocol.h>

@class NSArray, NSDate, NSString, TFNDirectMessageConversation;

@interface TFNDirectMessageUnmarkedAsSpamEvent : NSObject <TFNDirectMessageEvent>
{
    long long _eventID;
    NSDate *_time;
    NSString *_requestID;
    TFNDirectMessageConversation *_conversation;
    NSArray *_messageIDs;
}

@property(readonly, copy, nonatomic) NSArray *messageIDs; // @synthesize messageIDs=_messageIDs;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) long long eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (void)performUpdatesWithModel:(id)arg1;
- (id)initWithEventID:(long long)arg1 time:(id)arg2 requestID:(id)arg3 conversation:(id)arg4 messageIDs:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

