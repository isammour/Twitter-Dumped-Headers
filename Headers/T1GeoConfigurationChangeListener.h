//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1GeoConfigurationChangeListener : NSObject
{
    _Bool _started;
}

+ (id)defaultListener;
@property(nonatomic, getter=hasStarted) _Bool started; // @synthesize started=_started;
- (void)_startUpdates;
- (void)start;
- (id)init;

@end
