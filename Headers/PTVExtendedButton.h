//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;

@interface PTVExtendedButton : UIButton
{
    UIView *_debugHitFrameView;
    CDUnknownBlockType _isHighlightedCallback;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (void).cxx_destruct;
- (void)setIsHighlightedCallback:(CDUnknownBlockType)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end

