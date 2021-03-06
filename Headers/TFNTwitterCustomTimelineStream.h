//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterConcreteStatusesStream.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, TFNTwitterCustomTimeline;

@interface TFNTwitterCustomTimelineStream : TFNTwitterConcreteStatusesStream
{
    NSDate *_lastUpdated;
    TFNTwitterCustomTimeline *_timeline;
    NSString *_minPosition;
    NSString *_maxPosition;
    NSMutableDictionary *_statusesByID;
    NSMutableArray *_timelineEntries;
}

@property(retain, nonatomic) NSMutableArray *timelineEntries; // @synthesize timelineEntries=_timelineEntries;
@property(retain, nonatomic) NSMutableDictionary *statusesByID; // @synthesize statusesByID=_statusesByID;
@property(copy, nonatomic) NSString *maxPosition; // @synthesize maxPosition=_maxPosition;
@property(copy, nonatomic) NSString *minPosition; // @synthesize minPosition=_minPosition;
@property(nonatomic) __weak TFNTwitterCustomTimeline *timeline; // @synthesize timeline=_timeline;
- (void).cxx_destruct;
- (unsigned long long)_indexOfStatusIDInTimeline:(long long)arg1;
- (id)_sortStreamObjects:(id)arg1;
- (unsigned long long)_indexOfStatusID:(long long)arg1 inStatuses:(id)arg2;
- (_Bool)_status:(id)arg1 isNewerThanStatus:(id)arg2;
- (id)_positionForStatusID:(long long)arg1;
- (id)_sortedStatuses:(id)arg1 forTimelineEntries:(id)arg2 sort:(_Bool)arg3;
- (void)_scribeFailedLoadWithError:(id)arg1;
- (void)_loadMinPosition:(id)arg1 maxPosition:(id)arg2 count:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;
- (void)protected_loadOlderWithSource:(long long)arg1;
- (void)protected_loadNewerWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)loadOlderResponseBlock:(long long)arg1;
- (CDUnknownBlockType)loadNewerResponseBlock:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)oldestStatus;
- (id)newestStatus;
- (_Bool)canLoadGap;
- (id)lastUpdated;
- (id)loadingFailedMessage;
- (id)emptyStreamMessage;
- (id)autosaveName;
- (void)removeStatusAtPosition:(long long)arg1;
- (void)removeStatus:(id)arg1;
- (id)init;

@end

