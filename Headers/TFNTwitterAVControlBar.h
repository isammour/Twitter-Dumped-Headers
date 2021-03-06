//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TAVPlaybackObserver-Protocol.h>
#import <T1Twitter/TFNTwitterAVPlayerControllerObserver-Protocol.h>

@class NSNumber, NSString, TAVPlaybackState, TAVPlayer, TFNTwitterAVControlBarGradientView, TFNTwitterAVPlayerController, TFNTwitterMediaSlider, TFNTwitterSkipCountdownLabel, TFNTwitterVideoAdButton, UIButton, UIImage, UILabel, UIStackView, UIView;

@interface TFNTwitterAVControlBar : NSObject <TAVPlaybackObserver, TFNTwitterAVPlayerControllerObserver>
{
    _Bool _shouldShowMuteButton;
    _Bool _shouldHideAdControls;
    UIView *_view;
    TFNTwitterAVPlayerController *_player;
    TAVPlayer *_tavPlayer;
    NSNumber *_viewCount;
    UIButton *_dockButton;
    CDUnknownBlockType _expandButtonTapped;
    CDUnknownBlockType _dockButtonTapped;
    unsigned long long _expandButtonState;
    UIStackView *_innerStackView;
    UIStackView *_controlContainer;
    TFNTwitterMediaSlider *_scrubber;
    UIButton *_playPauseButton;
    UIButton *_muteUnmuteButton;
    UIButton *_expandButton;
    UIImage *_pauseImage;
    UIImage *_playImage;
    UIImage *_replayImage;
    UIImage *_dockImage;
    UIImage *_expandImage;
    UIImage *_soundOnImage;
    UIImage *_soundOffImage;
    UIImage *_collapseImage;
    UILabel *_currentTimeLabel;
    UILabel *_durationLabel;
    UILabel *_countDownTimerLabel;
    UILabel *_viewCountLabel;
    UIView *_countDownTimerDisplay;
    UIView *_liveBadge;
    TFNTwitterVideoAdButton *_skipButton;
    TFNTwitterSkipCountdownLabel *_skipCountdownLabel;
    UIView *_timeDisplay;
    UILabel *_slashLabel;
    TFNTwitterAVControlBarGradientView *_backgroundView;
    unsigned long long _layout;
    TAVPlaybackState *_lastPlaybackState;
}

@property(copy, nonatomic) TAVPlaybackState *lastPlaybackState; // @synthesize lastPlaybackState=_lastPlaybackState;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) TFNTwitterAVControlBarGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *slashLabel; // @synthesize slashLabel=_slashLabel;
@property(retain, nonatomic) UIView *timeDisplay; // @synthesize timeDisplay=_timeDisplay;
@property(retain, nonatomic) TFNTwitterSkipCountdownLabel *skipCountdownLabel; // @synthesize skipCountdownLabel=_skipCountdownLabel;
@property(retain, nonatomic) TFNTwitterVideoAdButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIView *liveBadge; // @synthesize liveBadge=_liveBadge;
@property(retain, nonatomic) UIView *countDownTimerDisplay; // @synthesize countDownTimerDisplay=_countDownTimerDisplay;
@property(retain, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) UILabel *countDownTimerLabel; // @synthesize countDownTimerLabel=_countDownTimerLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIImage *collapseImage; // @synthesize collapseImage=_collapseImage;
@property(retain, nonatomic) UIImage *soundOffImage; // @synthesize soundOffImage=_soundOffImage;
@property(retain, nonatomic) UIImage *soundOnImage; // @synthesize soundOnImage=_soundOnImage;
@property(retain, nonatomic) UIImage *expandImage; // @synthesize expandImage=_expandImage;
@property(retain, nonatomic) UIImage *dockImage; // @synthesize dockImage=_dockImage;
@property(retain, nonatomic) UIImage *replayImage; // @synthesize replayImage=_replayImage;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIButton *muteUnmuteButton; // @synthesize muteUnmuteButton=_muteUnmuteButton;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) TFNTwitterMediaSlider *scrubber; // @synthesize scrubber=_scrubber;
@property(retain, nonatomic) UIStackView *controlContainer; // @synthesize controlContainer=_controlContainer;
@property(retain, nonatomic) UIStackView *innerStackView; // @synthesize innerStackView=_innerStackView;
@property(nonatomic) unsigned long long expandButtonState; // @synthesize expandButtonState=_expandButtonState;
@property(copy, nonatomic) CDUnknownBlockType dockButtonTapped; // @synthesize dockButtonTapped=_dockButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType expandButtonTapped; // @synthesize expandButtonTapped=_expandButtonTapped;
@property(nonatomic) _Bool shouldHideAdControls; // @synthesize shouldHideAdControls=_shouldHideAdControls;
@property(nonatomic) _Bool shouldShowMuteButton; // @synthesize shouldShowMuteButton=_shouldShowMuteButton;
@property(retain, nonatomic) UIButton *dockButton; // @synthesize dockButton=_dockButton;
@property(retain, nonatomic) NSNumber *viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) __weak TAVPlayer *tavPlayer; // @synthesize tavPlayer=_tavPlayer;
@property(nonatomic) __weak TFNTwitterAVPlayerController *player; // @synthesize player=_player;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 mutedChanged:(_Bool)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 didChangeFromVideo:(id)arg3 toVideo:(id)arg4;
- (void)avPlayerControllerDidPlayToEndTime:(id)arg1 session:(id)arg2 video:(id)arg3;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 playingChangedTo:(_Bool)arg4;
- (void)avPlayerController:(id)arg1 session:(id)arg2 video:(id)arg3 timeDidChangeTo:(double)arg4 withContinuousInterval:(double)arg5;
- (void)_tfn_updatePlaybackState:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)_updateVisibleControls;
- (void)_updateSkipCountdownLabelWithCurrentPlaybackTime:(double)arg1;
- (void)_showSkipButtonWithCurrentPlaybackTime:(double)arg1 videoDuration:(double)arg2;
- (void)_skipButtonTapped;
- (void)_muteUnmuteButtonTapped;
- (void)_updateMuteUnmuteButton;
- (void)_playPauseButtonTapped;
- (void)_updatePlayPauseButton;
- (void)_scrubDidEnd:(id)arg1;
- (void)_scrubDidChange:(id)arg1;
- (void)_scrubDidBegin:(id)arg1;
- (void)_expandButtonTapped;
@property(nonatomic) _Bool shouldShowExpandButton;
@property(nonatomic) _Bool shouldShowDockButton;
- (void)_tfn_dockButtonTapped;
@property(nonatomic) double backgroundAlpha;
- (id)_newButtonWithImage:(id)arg1 action:(SEL)arg2;
- (id)tfn_labelWithFont:(id)arg1;
- (id)tfn_timeLabel;
- (id)tfn_newLabel;
- (void)_updateLayout;
- (id)initWithAssets:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

