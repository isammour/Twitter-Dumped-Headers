//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel, UITapGestureRecognizer;
@protocol T1FreshContentIndicatorViewDelegate;

@interface T1FreshContentIndicatorView : UIView
{
    UILabel *_label;
    _Bool _showing;
    UIImageView *_arrowImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _alive;
    double _autoHideInterval;
    id <T1FreshContentIndicatorViewDelegate> _delegate;
    long long _animationDirection;
}

@property(nonatomic) _Bool alive; // @synthesize alive=_alive;
@property(nonatomic) long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(nonatomic) __weak id <T1FreshContentIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double autoHideInterval; // @synthesize autoHideInterval=_autoHideInterval;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)_handleTap:(id)arg1;
- (void)_startAutoHideTimer;
@property(retain, nonatomic) UIImageView *arrowImageView;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
