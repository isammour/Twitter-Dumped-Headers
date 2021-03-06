//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSString, TAVPlaybackState;

@interface TFNLiveEventCardViewLifecycleObserver : NSObject <TAVPlaybackObserver>
{
    double _viewThreshold;
    NSString *_component;
    TAVPlaybackState *_lastPlaybackState;
}

- (void).cxx_destruct;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)initWithViewThreshold:(double)arg1 component:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

