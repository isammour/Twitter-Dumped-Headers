//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1AlignableButton, TFNButton, TFNButtonAnimator, TFNNavigationBar, UIButton, UIControl, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol T1ResizableHeaderViewDelegate, TFNPullToLoadTopControl;

@interface T1ResizableHeaderView : UIView
{
    UIView *_bannerOverlayGradient;
    _Bool _pullToLoadTopEnabled;
    _Bool _shouldSimulateStatusBar;
    _Bool _shouldSimulateNavigationBar;
    _Bool _shouldMaintainBannerAspectRatioOnCollapse;
    _Bool _shouldHideButtonProtectionOnCollapse;
    id <T1ResizableHeaderViewDelegate> _delegate;
    UIImage *_bannerImage;
    long long _leftBarButtonOptions;
    long long _rightBarButtonOptions;
    double _bannerAspectRatio;
    UIControl<TFNPullToLoadTopControl> *_pullToLoadTopControl;
    double _bottomContentPadding;
    UILongPressGestureRecognizer *_composeLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_backButtonLongPressGestureRecognizer;
    UITapGestureRecognizer *_bannerImageTapGestureRecognizer;
    UITapGestureRecognizer *_navigationBarTapGestureRecognizer;
    UIView *_pullToLoadControlContainer;
    T1AlignableButton *_alignableCloseButton;
    UIButton *_searchButton;
    UIButton *_composeTweetButton;
    UIButton *_backButton;
    UIButton *_closeButton;
    UIButton *_shareHeaderButton;
    UIButton *_moreActionsButton;
    TFNButton *_likeButton;
    TFNButtonAnimator *_likeButtonAnimator;
    UIView *_likeButtonCircleBackgroundView;
    UIView *_bannerImageContainer;
    TFNNavigationBar *_containerNavigationBar;
    UIImageView *_bannerImageView;
    struct CGSize _preferredSize;
}

+ (double)fadeAnimationDuration;
@property(readonly, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) TFNNavigationBar *containerNavigationBar; // @synthesize containerNavigationBar=_containerNavigationBar;
@property(retain, nonatomic) UIView *bannerOverlayGradient; // @synthesize bannerOverlayGradient=_bannerOverlayGradient;
@property(retain, nonatomic) UIView *bannerImageContainer; // @synthesize bannerImageContainer=_bannerImageContainer;
@property(retain, nonatomic) UIView *likeButtonCircleBackgroundView; // @synthesize likeButtonCircleBackgroundView=_likeButtonCircleBackgroundView;
@property(retain, nonatomic) TFNButtonAnimator *likeButtonAnimator; // @synthesize likeButtonAnimator=_likeButtonAnimator;
@property(retain, nonatomic) TFNButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *moreActionsButton; // @synthesize moreActionsButton=_moreActionsButton;
@property(retain, nonatomic) UIButton *shareHeaderButton; // @synthesize shareHeaderButton=_shareHeaderButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *composeTweetButton; // @synthesize composeTweetButton=_composeTweetButton;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) T1AlignableButton *alignableCloseButton; // @synthesize alignableCloseButton=_alignableCloseButton;
@property(retain, nonatomic) UIView *pullToLoadControlContainer; // @synthesize pullToLoadControlContainer=_pullToLoadControlContainer;
@property(retain, nonatomic) UITapGestureRecognizer *navigationBarTapGestureRecognizer; // @synthesize navigationBarTapGestureRecognizer=_navigationBarTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *bannerImageTapGestureRecognizer; // @synthesize bannerImageTapGestureRecognizer=_bannerImageTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *backButtonLongPressGestureRecognizer; // @synthesize backButtonLongPressGestureRecognizer=_backButtonLongPressGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *composeLongPressGestureRecognizer; // @synthesize composeLongPressGestureRecognizer=_composeLongPressGestureRecognizer;
@property(nonatomic) _Bool shouldHideButtonProtectionOnCollapse; // @synthesize shouldHideButtonProtectionOnCollapse=_shouldHideButtonProtectionOnCollapse;
@property(nonatomic) _Bool shouldMaintainBannerAspectRatioOnCollapse; // @synthesize shouldMaintainBannerAspectRatioOnCollapse=_shouldMaintainBannerAspectRatioOnCollapse;
@property(nonatomic) _Bool shouldSimulateNavigationBar; // @synthesize shouldSimulateNavigationBar=_shouldSimulateNavigationBar;
@property(nonatomic) _Bool shouldSimulateStatusBar; // @synthesize shouldSimulateStatusBar=_shouldSimulateStatusBar;
@property(nonatomic) double bottomContentPadding; // @synthesize bottomContentPadding=_bottomContentPadding;
@property(nonatomic) _Bool pullToLoadTopEnabled; // @synthesize pullToLoadTopEnabled=_pullToLoadTopEnabled;
@property(retain, nonatomic) UIControl<TFNPullToLoadTopControl> *pullToLoadTopControl; // @synthesize pullToLoadTopControl=_pullToLoadTopControl;
@property(nonatomic) double bannerAspectRatio; // @synthesize bannerAspectRatio=_bannerAspectRatio;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(nonatomic) long long rightBarButtonOptions; // @synthesize rightBarButtonOptions=_rightBarButtonOptions;
@property(nonatomic) long long leftBarButtonOptions; // @synthesize leftBarButtonOptions=_leftBarButtonOptions;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(nonatomic) __weak id <T1ResizableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tfn_previewingStateDidChange;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)_t1_updateLikeAnimator;
- (id)_t1_headerButtonWithImageName:(id)arg1 buttonSize:(struct CGSize)arg2 imageSize:(struct CGSize)arg3 target:(id)arg4 action:(SEL)arg5;
- (double)_t1_bannerAspectRatio:(id)arg1;
- (void)_t1_updateBannerBlur;
- (void)_t1_fadeOutBannerView;
- (void)_t1_fadeInBannerView:(_Bool)arg1;
@property(readonly, nonatomic) double minBannerOffset;
- (id)_t1_navButtonBackgroundColor;
- (double)_t1_headerOffsetOpacity;
- (void)_t1_setBannerImageBlurPercent:(double)arg1;
- (void)_t1_didTapLikeButton:(id)arg1;
- (void)_t1_didTapMoreActionsButton:(id)arg1;
- (void)_t1_didTapShareHeaderButton:(id)arg1;
- (void)_t1_didTapCloseButton:(id)arg1;
- (void)_t1_didLongPressBackButton:(id)arg1;
- (void)_t1_didTapBackButton:(id)arg1;
- (void)_t1_didLongPressComposeNavigationButton:(id)arg1;
- (void)_t1_didTapComposeNavigationButton:(id)arg1;
- (void)_t1_didTapSearchNavigationButton:(id)arg1;
- (void)_t1_didTapBannerImage:(id)arg1;
- (void)_t1_didPullToLoadTop;
@property(readonly, nonatomic) double headerDeltaY;
- (void)_t1_updateAndAddButton:(id)arg1 toMutableArray:(id)arg2 forOptions:(long long)arg3 withMask:(long long)arg4;
- (id)_t1_navigationControlsForOptions:(long long)arg1;
- (void)_t1_updateButtons;
- (void)_t1_layoutPullToLoadTopControl;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_t1_statusBarOffsetForStatusBarHeight:(double)arg1;
- (double)_t1_resizableHeaderBannerMinimumHeightForStatusBarOffset:(double)arg1;
- (double)resizableHeaderBannerMinimumHeightForStatusBarHeight:(double)arg1;
- (double)resizableHeaderBannerMinimumHeight;
@property(readonly, nonatomic) double statusBarOffset;
- (double)navigationBarHeight;
@property(readonly, nonatomic) double bannerBlurPercent;
@property(readonly, nonatomic) struct CGRect composeButtonFrame;
@property(readonly, nonatomic) struct CGRect searchButtonFrame;
@property(nonatomic, getter=isBannerHidden) _Bool bannerHidden;
@property(readonly, nonatomic) struct CGRect bannerFrame;
- (void)fontSizeDidChange;
- (double)headerBannerHeightForWidth:(double)arg1 bannerAspectRatio:(double)arg2;
- (double)headerBannerHeightForWidth:(double)arg1;
- (double)headerBannerHeight;
- (double)bannerAspectRatioForTraitCollection:(id)arg1;
- (void)updateBannerAspectRatio;
- (void)updateBannerAccessibility;
- (void)recalculatePreferredSize;
- (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2;
@property(readonly, nonatomic) _Bool shouldShowShareButton;
@property(readonly, nonatomic) _Bool shouldShowSearchButton;
@property(readonly, nonatomic) _Bool shouldShowMoreActionsButton;
@property(readonly, nonatomic) _Bool shouldShowLikeButton;
@property(readonly, nonatomic) _Bool shouldShowComposeButton;
@property(readonly, nonatomic) _Bool shouldShowCloseButton;
@property(readonly, nonatomic) _Bool shouldShowBackButton;
- (void)setBannerImage:(id)arg1 animateFadeIn:(_Bool)arg2;
- (void)completeFadeInAnimated:(_Bool)arg1;
- (void)beginFadeInAnimated:(_Bool)arg1;
- (id)accessibleNavigationBarElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

