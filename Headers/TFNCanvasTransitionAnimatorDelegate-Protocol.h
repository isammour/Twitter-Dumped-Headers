//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNCanvasTransitionAnimator, UIView;
@protocol UIBarPositioning;

@protocol TFNCanvasTransitionAnimatorDelegate <NSObject>
- (_Bool)animator:(TFNCanvasTransitionAnimator *)arg1 shouldHideChromeAfterDelay:(UIView<UIBarPositioning> *)arg2;
- (_Bool)animator:(TFNCanvasTransitionAnimator *)arg1 shouldAnimateChrome:(UIView<UIBarPositioning> *)arg2;
- (UIView *)animator:(TFNCanvasTransitionAnimator *)arg1 transitionViewForPurpose:(unsigned long long)arg2;
@end

