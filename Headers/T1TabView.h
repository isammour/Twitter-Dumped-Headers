//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1TabView-Protocol.h>

@class NSString, TFNBadgeView, TPXSpringSolver, UIImageView, UILabel;

@interface T1TabView : UIView <T1TabView>
{
    _Bool _showsLabel;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _hasUnreadContent;
    _Bool _badgeWasNumbered;
    NSString *scribePage;
    NSString *_imageName;
    unsigned long long _badgeCount;
    UIImageView *_unreadIndicatorImageView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_transformContainer;
    TFNBadgeView *_badgeView;
    long long _badgeViewIsTransitioningStackCount;
    long long _badgeViewState;
    double _lastAnimationTimestamp;
    TPXSpringSolver *_scaleSpringSolver;
}

+ (_Bool)_titlesOfTabViews:(id)arg1 fitWithFont:(id)arg2 indexSet:(id)arg3;
+ (void)normalizeTabViewsInGroup:(id)arg1;
@property(readonly, nonatomic) TPXSpringSolver *scaleSpringSolver; // @synthesize scaleSpringSolver=_scaleSpringSolver;
@property(nonatomic) double lastAnimationTimestamp; // @synthesize lastAnimationTimestamp=_lastAnimationTimestamp;
@property(readonly, nonatomic) long long badgeViewState; // @synthesize badgeViewState=_badgeViewState;
@property(nonatomic) long long badgeViewIsTransitioningStackCount; // @synthesize badgeViewIsTransitioningStackCount=_badgeViewIsTransitioningStackCount;
@property(nonatomic) _Bool badgeWasNumbered; // @synthesize badgeWasNumbered=_badgeWasNumbered;
@property(readonly, nonatomic) TFNBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UIView *transformContainer; // @synthesize transformContainer=_transformContainer;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *unreadIndicatorImageView; // @synthesize unreadIndicatorImageView=_unreadIndicatorImageView;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) _Bool hasUnreadContent; // @synthesize hasUnreadContent=_hasUnreadContent;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool showsLabel; // @synthesize showsLabel=_showsLabel;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage;
- (void).cxx_destruct;
- (_Bool)tfn_dashGestureEnabled;
- (void)pulseBadge;
- (void)layoutSubviews;
- (void)_popBadgeViewIsTransitioning;
- (void)_pushBadgeViewIsTransitioning;
- (void)_layoutBadgeViewMaximized;
- (void)_layoutBadgeViewMinimized;
- (void)_sizeBadgeViewToContent;
- (void)_updateBadgeViewContent;
- (void)_crossfadeBadgeCount:(_Bool)arg1;
- (void)_transitionBadgeCountToHidden:(_Bool)arg1;
- (void)_transitionBadgeCountToVisible:(_Bool)arg1;
- (id)_badgeScaleTransformKeyframesWithPrecalculatedValues;
- (id)_badgeScaleTransformKeyframeWithSpring;
- (void)setBadgeCount:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setHasUnreadContent:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateImageView;
- (void)_updateTitleLabel;
- (void)tfn_triggerTouchUpAnimation;
- (void)tfn_triggerTouchDownAnimation;
- (id)_keyframeAnimationForSpring:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 accessibilityLabel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

