//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1CachedImageColorExtractorDelegate-Protocol.h>
#import <T1Twitter/T1MomentCapsuleAnimatable-Protocol.h>
#import <T1Twitter/TFNTwitterImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1CachedImageColorExtractor, T1MomentCalculatedMediaRenderLayoutView, T1MomentCapsuleViewConfiguration, TFNTwitterAccount, TFNTwitterMomentPage, UIImageView;
@protocol T1MomentCapsulePageImageViewDelegate;

@interface T1MomentCapsulePageImageView : UIView <TFNTwitterImageViewFetchHelperDelegate, T1CachedImageColorExtractorDelegate, T1MomentCapsuleAnimatable>
{
    T1MomentCalculatedMediaRenderLayoutView *_mediaContainerView;
    UIImageView *_mediaView;
    TFNTwitterMomentPage *_page;
    TFNTwitterAccount *_account;
    T1MomentCapsuleViewConfiguration *_configuration;
    double _bottomFixedContentLength;
    double _topFixedContentLength;
    id <T1MomentCapsulePageImageViewDelegate> _delegate;
    long long _currentCapsuleContentMode;
    T1CachedImageColorExtractor *_colorExtractor;
    struct CGSize _mediaDimensions;
}

@property(retain, nonatomic) T1CachedImageColorExtractor *colorExtractor; // @synthesize colorExtractor=_colorExtractor;
@property(nonatomic) long long currentCapsuleContentMode; // @synthesize currentCapsuleContentMode=_currentCapsuleContentMode;
@property(nonatomic) __weak id <T1MomentCapsulePageImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize mediaDimensions; // @synthesize mediaDimensions=_mediaDimensions;
@property(nonatomic) double topFixedContentLength; // @synthesize topFixedContentLength=_topFixedContentLength;
@property(nonatomic) double bottomFixedContentLength; // @synthesize bottomFixedContentLength=_bottomFixedContentLength;
@property(retain, nonatomic) T1MomentCapsuleViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterMomentPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) UIImageView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) T1MomentCalculatedMediaRenderLayoutView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
- (void).cxx_destruct;
- (void)imageColorExtractor:(id)arg1 didFinishExtractingMostDominantColor:(id)arg2 image:(id)arg3 identifier:(id)arg4;
- (void)performPreppedAnimation:(id)arg1;
- (void)updateDependenciesForPreppedAnimation;
- (_Bool)prepToPerformAnimationToContentMode:(long long)arg1;
- (void)tfn_fetchHelper:(id)arg1 didUpdateProgress:(float)arg2;
- (void)tfn_fetchHelper:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)tfn_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)_reloadConfiguration;
- (void)_zoomToCurrentContentModeAnimated:(_Bool)arg1 animation:(id)arg2;
- (void)_zoomToCurrentContentMode;
- (void)cleanup;
- (void)setPage:(id)arg1 account:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

