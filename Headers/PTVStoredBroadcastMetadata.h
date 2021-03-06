//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface PTVStoredBroadcastMetadata : NSObject
{
    NSString *_broadcastID;
    NSDate *_broadcastDate;
    NSArray *_viewerCountData;
    NSNumber *_numChatCommentsReceived;
}

+ (void)DeleteBroadcastOccupancyDataIfNeeded;
+ (void)DeleteBroadcastOccupancyDataForBroadcastWithID:(id)arg1;
+ (id)LoadChatOccupancyMetricsForBroadcastWithID:(id)arg1;
@property(retain, nonatomic) NSNumber *numChatCommentsReceived; // @synthesize numChatCommentsReceived=_numChatCommentsReceived;
@property(copy, nonatomic) NSArray *viewerCountData; // @synthesize viewerCountData=_viewerCountData;
@property(retain, nonatomic) NSDate *broadcastDate; // @synthesize broadcastDate=_broadcastDate;
@property(retain, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
- (void).cxx_destruct;
- (void)saveChatOccupancyMetrics;
- (id)dictionaryForStoring;
- (id)initWithBroadcastID:(id)arg1 dictionary:(id)arg2;

@end

