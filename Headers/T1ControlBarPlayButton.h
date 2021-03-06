//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVControlBarItem.h>

@class TAVPlaybackState, UIButton, UIImage;

@interface T1ControlBarPlayButton : TAVControlBarItem
{
    UIButton *_button;
    UIImage *_playImage;
    UIImage *_stopImage;
    TAVPlaybackState *_playbackState;
}

@property(retain, nonatomic) TAVPlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) UIImage *stopImage; // @synthesize stopImage=_stopImage;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_t1_didTapPlayButton;
- (void)t1_updateButtonState;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)view;
- (id)initWithIdentifier:(id)arg1;

@end

