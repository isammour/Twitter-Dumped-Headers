//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFSTimer;
@protocol NSCopying;

@interface TFNTwitterCompositionOutboxProgressing : NSObject
{
    double _progress;
    id <NSCopying> _uniqueID;
    unsigned long long _numberOfObjects;
    unsigned long long _seedCount;
    TFSTimer *_seedIntervalTimer;
}

@property(retain, nonatomic) TFSTimer *seedIntervalTimer; // @synthesize seedIntervalTimer=_seedIntervalTimer;
@property(nonatomic) unsigned long long seedCount; // @synthesize seedCount=_seedCount;
@property(nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, copy, nonatomic) id <NSCopying> uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_tfn_main_updateProgress;
- (void)_tfn_timer_incrementSeed:(id)arg1;
- (void)_tfn_main_startProgress;
@property(readonly, nonatomic) _Bool excludeFromProgressCenter;
@property(readonly, nonatomic) unsigned long long progressWeight;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

