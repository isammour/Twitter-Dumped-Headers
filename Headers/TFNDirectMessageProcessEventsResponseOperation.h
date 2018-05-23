//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSSafeOperation.h>

@class NSArray, TFNDirectMessageEventsResponse, TFNDirectMessageModel;

@interface TFNDirectMessageProcessEventsResponseOperation : TFSSafeOperation
{
    TFNDirectMessageEventsResponse *_eventsResponse;
    TFNDirectMessageModel *_model;
    NSArray *_definitiveConversations;
}

@property(copy, nonatomic) NSArray *definitiveConversations; // @synthesize definitiveConversations=_definitiveConversations;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) TFNDirectMessageEventsResponse *eventsResponse; // @synthesize eventsResponse=_eventsResponse;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResponse:(id)arg1 model:(id)arg2;

@end
