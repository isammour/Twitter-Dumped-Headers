//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AmplifyControlBar, TFNTwitterAVPlayerControllerVideo;

@protocol T1AmplifyControlBarDelegate <NSObject>
- (void)amplifyControlBar:(T1AmplifyControlBar *)arg1 playButtonDidChangeToState:(long long)arg2 withPreviousState:(long long)arg3;
- (void)ctaWasTappedOnAmplifyControlBar:(T1AmplifyControlBar *)arg1;
- (void)amplifyControlBar:(T1AmplifyControlBar *)arg1 didTapCTAOnVideo:(TFNTwitterAVPlayerControllerVideo *)arg2;
@end
