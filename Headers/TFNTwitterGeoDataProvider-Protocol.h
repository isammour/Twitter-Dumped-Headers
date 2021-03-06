//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFSTwitterLocation;

@protocol TFNTwitterGeoDataProvider <NSObject>
@property(nonatomic) double locationUpdateDuration;
@property(nonatomic) double locationUpdateInterval;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) NSString *timezoneName;
@property(readonly, nonatomic) _Bool locationServicesAvailable;
@property(readonly, nonatomic) TFSTwitterLocation *currentLocation;
@property(readonly, nonatomic) NSString *currentLocationFootprint;
@property(readonly, nonatomic, getter=isCachedLocationAvailable) _Bool cachedLocationAvailable;
- (void)getRealtimeLocationWithCallback:(void (^)(_Bool, TFSTwitterLocation *, NSError *))arg1;
- (void)getLocationServicesAvailableWithCallback:(void (^)(_Bool))arg1;
- (void)stopUpdates;
- (void)startUpdates;
@end

