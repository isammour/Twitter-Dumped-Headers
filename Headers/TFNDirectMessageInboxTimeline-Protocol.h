//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageObject-Protocol.h>

@class NSArray, TFNDirectMessageTimelineCursor;

@protocol TFNDirectMessageInboxTimeline <TFNDirectMessageObject>
@property(nonatomic, readonly) unsigned long long countOfUnseenConversations;
@property(nonatomic, readonly) NSArray *conversations;
@property(nonatomic, readonly) TFNDirectMessageTimelineCursor *cursor;
@end
