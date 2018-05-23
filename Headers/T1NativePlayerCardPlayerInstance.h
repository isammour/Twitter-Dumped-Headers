//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterAVAutoplayPlayerControllerViewContainer-Protocol.h>

@class NSString, T1NativePlayerCardPlayerContainerView, UIImage, UIView;
@protocol TFNTwitterAVPlayerSessionSource;

@interface T1NativePlayerCardPlayerInstance : NSObject <TFNTwitterAVAutoplayPlayerControllerViewContainer>
{
    _Bool _visible;
    id <TFNTwitterAVPlayerSessionSource> _playerSessionSource;
    T1NativePlayerCardPlayerContainerView *_containerView;
    long long _playerControllerMode;
}

@property(nonatomic) long long playerControllerMode; // @synthesize playerControllerMode=_playerControllerMode;
@property(readonly, nonatomic) __weak T1NativePlayerCardPlayerContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource; // @synthesize playerSessionSource=_playerSessionSource;
- (void).cxx_destruct;
- (void)playerDidFailToLoad:(id)arg1 error:(id)arg2;
- (void)restartAnimationsIfNeeded;
- (void)updateWithPlayer:(id)arg1;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)detachPlayerViewAnimated:(_Bool)arg1;
- (void)attachPlayerView:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
- (void)didFailToPlay;
- (void)didPlay;
- (void)disableAutoPlay;
- (void)unpauseIfAppropriate;
- (_Bool)shouldPersistOnElementDisposal;
- (void)pause;
- (void)play;
- (void)dispose;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithContainerView:(id)arg1 playerSessionSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

