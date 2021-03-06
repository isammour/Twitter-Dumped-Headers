//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterAVHeartbeatObserver-Protocol.h>

@class NSNumber, NSString;

@interface TFNTwitterAVHeartbeatScribe : NSObject <TFNTwitterAVHeartbeatObserver>
{
    NSNumber *_lastHeartbeatPlayerVisibility;
}

@property(retain, nonatomic) NSNumber *lastHeartbeatPlayerVisibility; // @synthesize lastHeartbeatPlayerVisibility=_lastHeartbeatPlayerVisibility;
- (void).cxx_destruct;
- (id)_tfn_calculateLayoutEventIntervalsWithHeartbeat:(id)arg1;
- (void)heartbeatDidFire:(id)arg1 forPlayer:(id)arg2 withScribeContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

