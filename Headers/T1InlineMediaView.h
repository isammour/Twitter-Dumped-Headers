//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTappableImageView.h>

#import <T1Twitter/T1Autoplayable-Protocol.h>
#import <T1Twitter/T1VideoBitRateManagerDelegate-Protocol.h>
#import <T1Twitter/T1VideoCaptionsViewDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, NSString, T1NativeVideoEndScreenView, T1PillView, T1TimeDurationPillView, T1VideoBitRateManager, T1VideoCaptionsView, TAVPlaybackState, TAVScribeContext, TFNTwitterAVPlayerController, TFNTwitterAccount, TFNTwitterSkipCountdownLabel, TFNTwitterVideoAdButton, TFSTimer, UIActivityIndicatorView, UIButton, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol T1InlineMediaViewDelegate, T1PlayerFactoryIdentifiable, TAVPlayerView, TFNTwitterAVPlayerSessionSource;

@interface T1InlineMediaView : TFNTappableImageView <T1Autoplayable, UIGestureRecognizerDelegate, TAVPlaybackObserver, T1VideoBitRateManagerDelegate, T1VideoCaptionsViewDelegate>
{
    UILongPressGestureRecognizer *_overlayLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_playerLongPressGestureRecognizer;
    UITapGestureRecognizer *_tavPlayerTappedGestureRecognizer;
    _Bool _shouldDisableAutoplayAtTheEndOfVideoPlaying;
    _Bool _stickerBadgeEnabled;
    _Bool _threeSixtyVideoEnabled;
    _Bool _isTimePillViewHidden;
    _Bool _periscopeIsThreeSixty;
    _Bool _bumperPrerollEnabled;
    _Bool _showVideoEndSlateWithOneCallToActionButton;
    _Bool _showVideoEndSlateWithTwoCallToActionButtons;
    _Bool _containsLearnMoreButton;
    TFNTwitterVideoAdButton *_skipAdButton;
    id <T1InlineMediaViewDelegate> _delegate;
    unsigned long long _imageState;
    unsigned long long _videoState;
    UIView *_playerView;
    UIView *_playerIconView;
    TFNTwitterAVPlayerController *_playerController;
    id <T1PlayerFactoryIdentifiable> _viewModelPlayerFactoryIdentifiable;
    TAVScribeContext *_tavScribeContext;
    id <TFNTwitterAVPlayerSessionSource> _presentedSessionSource;
    TFNTwitterAccount *_account;
    unsigned long long _playerIconViewType;
    TFNTwitterVideoAdButton *_learnMoreButton;
    UIColor *_dominantBackgroundColor;
    CAShapeLayer *_borderLayer;
    UIView *_overlayView;
    UIButton *_overlayButton;
    UIActivityIndicatorView *_videoLoadingIndicator;
    T1NativeVideoEndScreenView *_endScreenView;
    TFNTwitterSkipCountdownLabel *_skipCountdownLabel;
    double _initialPillViewTimeInterval;
    T1VideoCaptionsView *_captionsView;
    TFSTimer *_timePillFadeTimer;
    unsigned long long _videoViewCount;
    NSString *_periscopeTotalParticipants;
    TAVPlaybackState *_previousPlaybackState;
    UIView<TAVPlayerView> *_tavPlayerView;
    T1VideoBitRateManager *_videoBitrateManager;
    T1PillView *_threeSixtyPillView;
}

+ (_Bool)_t1_shouldDisplaySmallerPreviewImages;
+ (void)updatePreviewImageVariantSelectionWithAccount:(id)arg1;
@property(readonly, nonatomic) T1PillView *threeSixtyPillView; // @synthesize threeSixtyPillView=_threeSixtyPillView;
@property(retain, nonatomic) T1VideoBitRateManager *videoBitrateManager; // @synthesize videoBitrateManager=_videoBitrateManager;
@property(retain, nonatomic) UIView<TAVPlayerView> *tavPlayerView; // @synthesize tavPlayerView=_tavPlayerView;
@property(retain, nonatomic) TAVPlaybackState *previousPlaybackState; // @synthesize previousPlaybackState=_previousPlaybackState;
@property(nonatomic) _Bool containsLearnMoreButton; // @synthesize containsLearnMoreButton=_containsLearnMoreButton;
@property(nonatomic) _Bool showVideoEndSlateWithTwoCallToActionButtons; // @synthesize showVideoEndSlateWithTwoCallToActionButtons=_showVideoEndSlateWithTwoCallToActionButtons;
@property(nonatomic) _Bool showVideoEndSlateWithOneCallToActionButton; // @synthesize showVideoEndSlateWithOneCallToActionButton=_showVideoEndSlateWithOneCallToActionButton;
@property(nonatomic) _Bool bumperPrerollEnabled; // @synthesize bumperPrerollEnabled=_bumperPrerollEnabled;
@property(nonatomic) _Bool periscopeIsThreeSixty; // @synthesize periscopeIsThreeSixty=_periscopeIsThreeSixty;
@property(copy, nonatomic) NSString *periscopeTotalParticipants; // @synthesize periscopeTotalParticipants=_periscopeTotalParticipants;
@property(nonatomic) unsigned long long videoViewCount; // @synthesize videoViewCount=_videoViewCount;
@property(retain, nonatomic) TFSTimer *timePillFadeTimer; // @synthesize timePillFadeTimer=_timePillFadeTimer;
@property(nonatomic) _Bool isTimePillViewHidden; // @synthesize isTimePillViewHidden=_isTimePillViewHidden;
@property(retain, nonatomic) T1VideoCaptionsView *captionsView; // @synthesize captionsView=_captionsView;
@property(nonatomic) double initialPillViewTimeInterval; // @synthesize initialPillViewTimeInterval=_initialPillViewTimeInterval;
@property(retain, nonatomic) TFNTwitterSkipCountdownLabel *skipCountdownLabel; // @synthesize skipCountdownLabel=_skipCountdownLabel;
@property(retain, nonatomic) T1NativeVideoEndScreenView *endScreenView; // @synthesize endScreenView=_endScreenView;
@property(retain, nonatomic) UIActivityIndicatorView *videoLoadingIndicator; // @synthesize videoLoadingIndicator=_videoLoadingIndicator;
@property(retain, nonatomic) UIButton *overlayButton; // @synthesize overlayButton=_overlayButton;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIColor *dominantBackgroundColor; // @synthesize dominantBackgroundColor=_dominantBackgroundColor;
@property(readonly, nonatomic) TFNTwitterVideoAdButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(nonatomic, getter=isThreeSixtyVideoEnabled) _Bool threeSixtyVideoEnabled; // @synthesize threeSixtyVideoEnabled=_threeSixtyVideoEnabled;
@property(nonatomic, getter=isStickerBadgeEnabled) _Bool stickerBadgeEnabled; // @synthesize stickerBadgeEnabled=_stickerBadgeEnabled;
@property(nonatomic) unsigned long long playerIconViewType; // @synthesize playerIconViewType=_playerIconViewType;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <TFNTwitterAVPlayerSessionSource> presentedSessionSource; // @synthesize presentedSessionSource=_presentedSessionSource;
@property(nonatomic) _Bool shouldDisableAutoplayAtTheEndOfVideoPlaying; // @synthesize shouldDisableAutoplayAtTheEndOfVideoPlaying=_shouldDisableAutoplayAtTheEndOfVideoPlaying;
@property(copy, nonatomic) TAVScribeContext *tavScribeContext; // @synthesize tavScribeContext=_tavScribeContext;
@property(retain, nonatomic) id <T1PlayerFactoryIdentifiable> viewModelPlayerFactoryIdentifiable; // @synthesize viewModelPlayerFactoryIdentifiable=_viewModelPlayerFactoryIdentifiable;
@property(nonatomic) __weak TFNTwitterAVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) UIView *playerIconView; // @synthesize playerIconView=_playerIconView;
@property(readonly, nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) unsigned long long videoState; // @synthesize videoState=_videoState;
@property(nonatomic) unsigned long long imageState; // @synthesize imageState=_imageState;
@property(nonatomic) __weak id <T1InlineMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)restartAnimationsIfNeeded;
- (void)cleanup;
- (void)updatePreferredPeakBitRate:(id)arg1;
- (void)videoCaptionsView:(id)arg1 didSelectMediaSelectionOption:(id)arg2;
- (void)_t1_initializeCaptionsViewIfNeeded;
- (void)_t1_showEndScreenViewAndHideLearnMoreButtonIfNeeded;
- (id)_t1_tavPlayerViewConfiguration;
- (void)t1_updateWithPlaybackState:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)_t1_tavPlayerViewWasTapped:(id)arg1;
- (void)beginPresentingPlayer:(id)arg1 identifiable:(id)arg2;
- (void)t1_layoutThreeSixtyPill;
- (void)t1_layoutBrandPill:(id)arg1;
- (void)_layoutPlayerIconView;
- (void)_layoutSkipCountDownLabel;
- (void)_layoutSkipAdButton;
- (void)_t1_layoutLearnMoreButton;
- (void)layoutSubviews;
- (void)dealloc;
- (id)periscopePillView;
- (id)_t1_currentAdvertiserName;
- (void)_updateSkipCountDownLabelWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2 skipAdDurationRequirement:(double)arg3;
- (void)stopPillViewAnimation:(_Bool)arg1;
- (void)_updateAdPillViewWithCurrentPlaybackTime:(double)arg1 adDuration:(double)arg2;
- (void)startPillViewAnimation:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isPillViewAnimating;
- (void)t1_updateViewCountVisibility;
@property(nonatomic) double pillViewTimeInterval;
@property(readonly, nonatomic) T1TimeDurationPillView *pillView;
- (void)_showSkipButtonWithCurrentPlaybackTime:(double)arg1 duration:(double)arg2;
@property(readonly, nonatomic) TFNTwitterVideoAdButton *skipAdButton; // @synthesize skipAdButton=_skipAdButton;
@property(nonatomic, getter=isBorderHidden) _Bool borderHidden;
@property(nonatomic, getter=isPlayerIconViewHidden) _Bool playerIconViewHidden;
- (void)t1_setUpVideoEndScreenWithTitles:(id)arg1;
- (void)_updateButtonImage;
- (id)_buttonImageHighlighted:(_Bool)arg1 size:(struct CGSize)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1 event:(id)arg2;
@property(readonly, nonatomic) struct CGRect overlayFrame;
@property(nonatomic, getter=isShowingOverlay) _Bool showingOverlay;
@property(nonatomic) double overlayAlpha;
- (void)hidePillViewAnimated;
- (void)startTimePillFadeTimer;
- (void)setVideoState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)areCaptionsEnabled;
- (_Bool)isPlaybackSourceLive;
- (_Bool)_isAutoplaying;
- (void)updateWithViewModel:(id)arg1 viewCountsEnabled:(_Bool)arg2;
- (void)updateDurationBadgeWithPlayer:(id)arg1;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)detachPlayerViewAnimated:(_Bool)arg1;
- (void)attachPlayerView:(id)arg1 animated:(_Bool)arg2;
- (void)_cleanupPlayerLongPressGestureRecognizer;
- (void)_setupPlayerLongPressGestureRecognizer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)amplifyPlayer;
- (void)setTip_fetchHelper:(id)arg1;
- (void)setTip_fetchHelperIfUsedAsImageView:(id)arg1;
- (id)init;
@property(nonatomic) _Bool shouldAutoplay;
- (id)t1_getPlayerFromCache;
- (void)_shouldAutoplayDidSet:(_Bool)arg1;
- (struct CGRect)autoplayableFrameIn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

