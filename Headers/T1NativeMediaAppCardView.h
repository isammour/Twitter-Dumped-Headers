//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardView.h>

#import <T1Twitter/T1NativePlayerCardPlayerContainerViewDelegate-Protocol.h>

@class NSString, T1NativeAppCardDetailsView, T1NativeMediaAppCardViewEventRegistry, T1NativeMediaAppCardViewModel, T1NativePlayerCardPlayerContainerView, TFNSolidColorView, TFNTappableHighlightView, UIImage, UIView;
@protocol TFNTwitterCardViewDelegate;

@interface T1NativeMediaAppCardView : TFNTwitterCardView <T1NativePlayerCardPlayerContainerViewDelegate>
{
    id <TFNTwitterCardViewDelegate> _delegate;
    T1NativePlayerCardPlayerContainerView *_playerContainerView;
    T1NativeMediaAppCardViewModel *_viewModel;
    T1NativeMediaAppCardViewEventRegistry *_viewEventRegistry;
    TFNTappableHighlightView *_imageHighlightView;
    T1NativeAppCardDetailsView *_detailsView;
    TFNTappableHighlightView *_detailsHighlightView;
    UIView *_borderSeparator;
    TFNTappableHighlightView *_fallbackHighlightView;
    UIView *_proxyHighlightView;
    TFNSolidColorView *_dominantColorView;
}

@property(retain, nonatomic) TFNSolidColorView *dominantColorView; // @synthesize dominantColorView=_dominantColorView;
@property(retain, nonatomic) UIView *proxyHighlightView; // @synthesize proxyHighlightView=_proxyHighlightView;
@property(retain, nonatomic) TFNTappableHighlightView *fallbackHighlightView; // @synthesize fallbackHighlightView=_fallbackHighlightView;
@property(retain, nonatomic) UIView *borderSeparator; // @synthesize borderSeparator=_borderSeparator;
@property(retain, nonatomic) TFNTappableHighlightView *detailsHighlightView; // @synthesize detailsHighlightView=_detailsHighlightView;
@property(retain, nonatomic) T1NativeAppCardDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) TFNTappableHighlightView *imageHighlightView; // @synthesize imageHighlightView=_imageHighlightView;
@property(retain, nonatomic) T1NativeMediaAppCardViewEventRegistry *viewEventRegistry; // @synthesize viewEventRegistry=_viewEventRegistry;
@property(retain, nonatomic) T1NativeMediaAppCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1NativePlayerCardPlayerContainerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
- (id)delegate;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)playerInstance:(id)arg1 presentFullscreenPlayerFromPreviewView:(id)arg2 withPreviewImage:(id)arg3;
- (void)cardPlayerContainerView:(id)arg1 didTapPlayButtonOverlayWithEvent:(id)arg2;
- (void)_updatePlayerContainerView;
- (void)_updateContent;
- (void)_videoDidPresent:(id)arg1;
- (void)_viewModelDidUpdate:(id)arg1;
- (void)_setupHighlightView:(id)arg1 withAccessibilityIdentifier:(id)arg2;
- (void)tfn_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (void)fetchImages;
- (id)imageFetchingViews;
- (void)restartAnimationsIfNeeded;
- (void)autoplayStartingWithVideoView:(id)arg1 playerController:(id)arg2;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (void)setDelegate:(id)arg1;
- (id)previewImageView;
- (id)playerViewContainer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) double mediaAspectRatio;
@property(readonly, nonatomic) UIImage *playerImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
