//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, TFNTwitterLocationManager, TFSTwitterLocation;

@protocol TFNTwitterLocationManagerDelegate
- (void)locationManager:(TFNTwitterLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(TFNTwitterLocationManager *)arg1 didUpdateToLocation:(TFSTwitterLocation *)arg2;
@end

