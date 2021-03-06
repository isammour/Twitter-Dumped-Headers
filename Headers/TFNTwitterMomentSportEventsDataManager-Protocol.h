//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, TFNTwitterMomentEvent, TFNTwitterMomentSportEventUpdate;
@protocol TFNTwitterMomentSportEventUpdateListener;

@protocol TFNTwitterMomentSportEventsDataManager <NSObject>
- (void)dispatchEventUpdates:(NSArray *)arg1;
- (TFNTwitterMomentSportEventUpdate *)latestUpdateForEvent:(TFNTwitterMomentEvent *)arg1;
- (void)removeListener:(id <TFNTwitterMomentSportEventUpdateListener>)arg1 event:(TFNTwitterMomentEvent *)arg2;
- (void)addListener:(id <TFNTwitterMomentSportEventUpdateListener>)arg1 event:(TFNTwitterMomentEvent *)arg2;
@end

