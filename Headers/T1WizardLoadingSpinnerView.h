//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface T1WizardLoadingSpinnerView : UIView
{
    _Bool _animating;
    UIColor *_color;
    double _strokeWidth;
    CAShapeLayer *_arcLayer;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) CAShapeLayer *arcLayer; // @synthesize arcLayer=_arcLayer;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)resetAnimation;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

