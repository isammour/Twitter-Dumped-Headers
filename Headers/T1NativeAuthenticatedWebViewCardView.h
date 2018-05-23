//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardView.h>

@class NSURL, T1NativeAuthenticatedWebViewCardEventRegistry, T1NativeAuthenticatedWebViewCardModel, TFNButton, TFNTappableHighlightView, UIImageView, UILabel, UIView;
@protocol TFNTwitterCardViewDelegate;

@interface T1NativeAuthenticatedWebViewCardView : TFNTwitterCardView
{
    id <TFNTwitterCardViewDelegate> _delegate;
    NSURL *_websiteURL;
    T1NativeAuthenticatedWebViewCardModel *_viewModel;
    T1NativeAuthenticatedWebViewCardEventRegistry *_viewEventRegistry;
    UIView *_highlightProxyView;
    TFNTappableHighlightView *_cardContainerHighlightView;
    UIView *_contentContainer;
    UIView *_dividerView;
    UIImageView *_imageView;
    TFNTappableHighlightView *_imageHighlightView;
    UIView *_badgeLabelContainer;
    UILabel *_badgeLabel;
    UILabel *_titleLabel;
    UILabel *_labelByline;
    TFNTappableHighlightView *_titleHighlightView;
    TFNButton *_callToActionButton;
}

@property(retain, nonatomic) TFNButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(retain, nonatomic) TFNTappableHighlightView *titleHighlightView; // @synthesize titleHighlightView=_titleHighlightView;
@property(retain, nonatomic) UILabel *labelByline; // @synthesize labelByline=_labelByline;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIView *badgeLabelContainer; // @synthesize badgeLabelContainer=_badgeLabelContainer;
@property(retain, nonatomic) TFNTappableHighlightView *imageHighlightView; // @synthesize imageHighlightView=_imageHighlightView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) TFNTappableHighlightView *cardContainerHighlightView; // @synthesize cardContainerHighlightView=_cardContainerHighlightView;
@property(retain, nonatomic) UIView *highlightProxyView; // @synthesize highlightProxyView=_highlightProxyView;
@property(retain, nonatomic) T1NativeAuthenticatedWebViewCardEventRegistry *viewEventRegistry; // @synthesize viewEventRegistry=_viewEventRegistry;
@property(retain, nonatomic) T1NativeAuthenticatedWebViewCardModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSURL *websiteURL; // @synthesize websiteURL=_websiteURL;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateSubviews;
- (void)_setupHighlightView:(id)arg1 withProxyView:(id)arg2 accessibilityIdentifier:(id)arg3;
- (void)_createSubviews;
- (void)fetchImages;
- (id)imageFetchingViews;
- (void)cardContextDidUpdate;
- (void)_cleanup;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
