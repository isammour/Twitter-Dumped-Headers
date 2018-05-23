//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, TFNDirectMessageEventsResponse;

@interface TFNDirectMessageIncrementalUpdatesResponse : NSObject
{
    NSString *_cursor;
    TFNDirectMessageEventsResponse *_eventsResponse;
    NSNumber *_lastSeenEventID;
    NSNumber *_trustedLastSeenEventID;
    NSNumber *_untrustedLastSeenEventID;
}

@property(readonly, nonatomic) NSNumber *untrustedLastSeenEventID; // @synthesize untrustedLastSeenEventID=_untrustedLastSeenEventID;
@property(readonly, nonatomic) NSNumber *trustedLastSeenEventID; // @synthesize trustedLastSeenEventID=_trustedLastSeenEventID;
@property(readonly, nonatomic) NSNumber *lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(readonly, nonatomic) TFNDirectMessageEventsResponse *eventsResponse; // @synthesize eventsResponse=_eventsResponse;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;

@end

