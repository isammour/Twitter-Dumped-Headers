//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, TFNTwitterMomentSportEventUpdate;

@interface TFNTwitterMomentSportEventUpdateStoreEntry : NSObject
{
    TFNTwitterMomentSportEventUpdate *_eventUpdate;
    NSDate *_storageDate;
}

@property(readonly, nonatomic) NSDate *storageDate; // @synthesize storageDate=_storageDate;
@property(readonly, nonatomic) TFNTwitterMomentSportEventUpdate *eventUpdate; // @synthesize eventUpdate=_eventUpdate;
- (void).cxx_destruct;
- (id)initWithUpdate:(id)arg1 storageDate:(id)arg2;

@end

