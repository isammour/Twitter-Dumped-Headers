//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterAVPlayerControllerObserver-Protocol.h>

@class NSHashTable, NSString;

@interface TFNTwitterAVPlayerControllerObserverGroup : NSObject <TFNTwitterAVPlayerControllerObserver>
{
    NSHashTable *_weakObserversHashTable;
}

@property(retain, nonatomic) NSHashTable *weakObserversHashTable; // @synthesize weakObserversHashTable=_weakObserversHashTable;
- (void).cxx_destruct;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 scribeContextWillChangeFrom:(id)arg4 to:(id)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 fullscreenChanged:(_Bool)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 tracksChanged:(id)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 newAccessLogEntryBecameAvailable:(id)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 mutedChanged:(_Bool)arg4;
- (void)avPlayerControllerDidSkipAd:(id)arg1 session:(id)arg2 video:(id)arg3 skipTime:(double)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 playingChangedTo:(_Bool)arg4;
- (void)avPlayerControllerWillReplay:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerControllerDidPlayToEndTime:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerControllerWillLoop:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerControllerTimeDidJump:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerControllerDidStall:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerControllerDidStartPreparingForPlayback:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 timeDidChangeTo:(double)arg4 withContinuousInterval:(double)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 itemRateDidChangeFrom:(id)arg4 to:(id)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 rateDidChangeFrom:(id)arg4 to:(id)arg5;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 didFailWithError:(id)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 didChangeFromVideo:(id)arg3 toVideo:(id)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 willChangeFromVideo:(id)arg3 toVideo:(id)arg4;
- (void)removePlayerObserver:(id)arg1;
- (void)addPlayerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

