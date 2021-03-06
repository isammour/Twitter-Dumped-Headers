//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1InlineMediaViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusPhotoVideoDetailsViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusViewInlineImages-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>
#import <T1Twitter/TFNTwitterImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1InlineMediaView, T1MultiPhotoView, T1StatusPhotoVideoDetailsView, TFNAVPlayerView, TFNTwitterAVAutoplayPlayerController, TFNTwitterAccount, TFNTwitterImageViewFetchHelper;
@protocol T1StatusPhotoVideoForwardViewDelegate, T1StatusViewModel;

@interface T1StatusPhotoVideoForwardView : UIView <T1InlineMediaViewDelegate, T1StatusPhotoVideoDetailsViewDelegate, TFNTwitterImageViewFetchHelperDelegate, TAVPlaybackObserver, T1StatusViewInlineImages>
{
    unsigned long long _imageState;
    UIView *_possiblySensitiveView;
    TFNTwitterImageViewFetchHelper *_fetchHelper;
    _Bool _playerWasPlaying;
    _Bool _isShowingAd;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    unsigned long long _attachmentType;
    T1InlineMediaView *_inlineMediaView;
    T1MultiPhotoView *_multiPhotoView;
    T1StatusPhotoVideoDetailsView *_attributionView;
    double _cornerRadius;
    id <T1StatusPhotoVideoForwardViewDelegate> _delegate;
    T1StatusPhotoVideoDetailsView *_videoDetailsView;
    TFNTwitterAVAutoplayPlayerController *_currentInlineMediaPlayer;
    unsigned long long _currentInlineMediaState;
    struct CGSize _imageSize;
}

+ (_Bool)shouldShowVideoDetailsForStatusViewModel:(id)arg1 account:(id)arg2 options:(unsigned long long)arg3;
+ (unsigned long long)_imageStateForViewModel:(id)arg1 account:(id)arg2 options:(unsigned long long)arg3 attachmentType:(unsigned long long)arg4 usingCompactVerticalLayout:(_Bool)arg5;
+ (_Bool)useCompactVerticalLayoutWithLayoutMetrics:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
+ (struct CGSize)preferredSizeForWidth:(double)arg1 usingCompactVerticalLayout:(_Bool)arg2 viewModel:(id)arg3 options:(unsigned long long)arg4 mediaParameters:(id)arg5 forceAdaptiveMediaRatios:(_Bool)arg6 attachmentType:(unsigned long long)arg7;
@property(nonatomic) _Bool isShowingAd; // @synthesize isShowingAd=_isShowingAd;
@property(nonatomic) unsigned long long currentInlineMediaState; // @synthesize currentInlineMediaState=_currentInlineMediaState;
@property(nonatomic) __weak TFNTwitterAVAutoplayPlayerController *currentInlineMediaPlayer; // @synthesize currentInlineMediaPlayer=_currentInlineMediaPlayer;
@property(retain, nonatomic) T1StatusPhotoVideoDetailsView *videoDetailsView; // @synthesize videoDetailsView=_videoDetailsView;
@property(nonatomic) __weak id <T1StatusPhotoVideoForwardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) T1StatusPhotoVideoDetailsView *attributionView; // @synthesize attributionView=_attributionView;
@property(retain, nonatomic) T1MultiPhotoView *multiPhotoView; // @synthesize multiPhotoView=_multiPhotoView;
@property(readonly, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)tfn_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (long long)tfn_scaleAspectFillFocusModeForFetchHelper:(id)arg1;
- (id)tfn_focusRectanglesForFocusMode:(long long)arg1 inBounds:(struct CGRect)arg2 forFetchHelper:(id)arg3;
- (void)tfn_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (void)_t1_updateVideoDetailsWithVideoContext:(id)arg1;
- (void)_t1_updateForAdDisplay:(id)arg1 animated:(_Bool)arg2;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)stopLoadingIndicatorAndShowPlayButton:(_Bool)arg1;
- (void)startLoadingIndicator;
- (void)_updateIndicators;
- (void)_imageLongPressAction;
- (void)_imageTapAction;
- (void)_imageLongPressActionAtIndex:(unsigned long long)arg1;
- (void)_imageTapActionAtIndex:(unsigned long long)arg1;
- (void)_imageLoadedAtIndex:(unsigned long long)arg1 source:(long long)arg2 success:(_Bool)arg3;
- (void)statusPhotoVideoDetailsView:(id)arg1 didTapAttributionForMediaEntity:(id)arg2;
- (void)mediaView:(id)arg1 didDetachPlayer:(id)arg2;
- (void)mediaView:(id)arg1 willPresentPlayer:(id)arg2;
- (void)mediaViewDidLongPressPlayer:(id)arg1;
@property(readonly, nonatomic) TFNAVPlayerView *avPlayerView;
- (void)overlayButtonWasLongPressed:(id)arg1;
- (void)overlayButtonWasTapped:(id)arg1 event:(id)arg2;
- (long long)mediaTypeForInlineMediaView:(id)arg1;
@property(readonly, nonatomic) double borderCornerRadius;
- (void)_t1_updateAccessoryViews;
- (void)layoutSubviews;
- (void)_t1_handleStatusViewModelUpdateNotification:(id)arg1;
- (void)_updateForImageStateSensitive;
- (void)_updateForImageStateMulti;
- (long long)mediaType;
- (void)_updateForImageStateSingle;
- (void)_updateContent;
- (long long)_imageContentMode;
- (long long)imageContentModeAtIndex:(long long)arg1;
- (struct CGRect)_imageContentsRect;
- (struct CGRect)imageContentsRectAtIndex:(long long)arg1;
- (_Bool)hasAnyVisibleImageBeenDownloaded;
- (id)imageViewAtIndex:(long long)arg1;
- (id)imageAtIndex:(long long)arg1;
- (id)mediaInfoAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfImages;
- (void)_t1_updateBorderDisplay;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 attachmentType:(unsigned long long)arg4 imageSize:(struct CGSize)arg5;
- (unsigned long long)currentImageState;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

