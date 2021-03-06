//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1LiveVideoContentViewModelDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1LiveVideoBadgeView, T1LiveVideoContentViewConfiguration, T1LiveVideoContentViewModel, T1LiveVideoContentViewTheme, T1MomentScoreView, TFNButton, TFNGradientView, TFNSolidColorView, TFNTwitterAccount, UIActivityIndicatorView, UIButton, UIImageView, UILabel;
@protocol T1LiveVideoContentViewDelegate, T1LiveVideoContentViewLayoutDelegate;

@interface T1LiveVideoContentView : UIView <T1LiveVideoContentViewModelDelegate, TFNTwitterImageViewFetchHelperDelegate>
{
    _Bool _shouldUpdateSubviews;
    UILabel *_eventTitleLabel;
    UILabel *_eventSubtitleLabel;
    TFNButton *_remindMeButton;
    TFNSolidColorView *_remindMeButtonDividerView;
    TFNButton *_enableLocationButton;
    T1LiveVideoBadgeView *_badgeView;
    T1MomentScoreView *_scoreView;
    TFNSolidColorView *_mediaBackgroundView;
    UIImageView *_placeholderImageView;
    UIView *_playerContainerView;
    UIActivityIndicatorView *_playerLoadingIndicator;
    UIButton *_playerRetryButton;
    TFNGradientView *_gradientView;
    UILabel *_messageLabel;
    TFNSolidColorView *_permanentErrorDividerView;
    TFNSolidColorView *_errorBackgroundView;
    T1LiveVideoContentViewModel *_model;
    id <T1LiveVideoContentViewDelegate> _delegate;
    double _placeholderImageBlurPercent;
    T1LiveVideoContentViewTheme *_theme;
    T1LiveVideoContentViewConfiguration *_configuration;
    id <T1LiveVideoContentViewLayoutDelegate> _layoutDelegate;
    TFNTwitterAccount *_account;
}

@property(nonatomic) _Bool shouldUpdateSubviews; // @synthesize shouldUpdateSubviews=_shouldUpdateSubviews;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1LiveVideoContentViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) T1LiveVideoContentViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) T1LiveVideoContentViewTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) double placeholderImageBlurPercent; // @synthesize placeholderImageBlurPercent=_placeholderImageBlurPercent;
@property(nonatomic) __weak id <T1LiveVideoContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1LiveVideoContentViewModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) __weak TFNSolidColorView *errorBackgroundView; // @synthesize errorBackgroundView=_errorBackgroundView;
@property(readonly, nonatomic) __weak TFNSolidColorView *permanentErrorDividerView; // @synthesize permanentErrorDividerView=_permanentErrorDividerView;
@property(readonly, nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) __weak TFNGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) __weak UIButton *playerRetryButton; // @synthesize playerRetryButton=_playerRetryButton;
@property(readonly, nonatomic) __weak UIActivityIndicatorView *playerLoadingIndicator; // @synthesize playerLoadingIndicator=_playerLoadingIndicator;
@property(readonly, nonatomic) __weak UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(readonly, nonatomic) __weak UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(readonly, nonatomic) __weak TFNSolidColorView *mediaBackgroundView; // @synthesize mediaBackgroundView=_mediaBackgroundView;
@property(readonly, nonatomic) __weak T1MomentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(readonly, nonatomic) __weak T1LiveVideoBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) __weak TFNButton *enableLocationButton; // @synthesize enableLocationButton=_enableLocationButton;
@property(readonly, nonatomic) __weak TFNSolidColorView *remindMeButtonDividerView; // @synthesize remindMeButtonDividerView=_remindMeButtonDividerView;
@property(readonly, nonatomic) __weak TFNButton *remindMeButton; // @synthesize remindMeButton=_remindMeButton;
@property(readonly, nonatomic) __weak UILabel *eventSubtitleLabel; // @synthesize eventSubtitleLabel=_eventSubtitleLabel;
@property(readonly, nonatomic) __weak UILabel *eventTitleLabel; // @synthesize eventTitleLabel=_eventTitleLabel;
- (void).cxx_destruct;
- (void)tfn_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)liveVideoContentViewModelDidUpdate:(id)arg1;
- (void)_t1_prepareBlurIfNeeded;
- (void)_t1_updatePlaceholderImage;
- (void)_t1_didTapEnableLocationButton;
- (void)_t1_didTapRemindMeButton;
- (void)cleanup;
- (void)layoutSubviewsWithLayoutState:(id)arg1;
- (void)updateSubviews;
- (void)setNeedsUpdate;
- (void)setModel:(id)arg1 account:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithTheme:(id)arg1 configuration:(id)arg2 layoutDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

