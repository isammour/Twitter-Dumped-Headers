//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDesignableModel-Protocol.h>

@protocol TFNUIPlaybackInfo <TFNDesignableModel>
@property(readonly, nonatomic) _Bool hasValidDuration;
@property(readonly, nonatomic) _Bool hasTimeFullyElapsed;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) CDStruct_1b6d18a9 elapsedTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@end
