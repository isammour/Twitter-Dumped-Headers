//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray, TFNTwitterTimelineCursor, TFNTwitterTimelineReplaceEntries;

@interface T1URTAPIResponseModelResponseBridge : NSObject <TFSModel>
{
    // Error parsing type: , name: response
    // Error parsing type: , name: statuses
    // Error parsing type: , name: users
    // Error parsing type: , name: bridgeDetails
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *timelineArray;
@property(nonatomic, readonly) TFNTwitterTimelineReplaceEntries *replaceEntries;
@property(nonatomic, readonly) TFNTwitterTimelineCursor *responseCursor;
@property(nonatomic, readonly) NSArray *updateDisplayActionNotifications;
@property(nonatomic, readonly) _Bool startAtTop;

@end

