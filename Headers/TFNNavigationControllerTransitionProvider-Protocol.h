//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol TFNNavigationControllerTransitionProvider <NSObject>
- (id <UIViewControllerAnimatedTransitioning>)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(UIViewController *)arg2 toViewController:(UIViewController *)arg3;

@optional
- (id <UIViewControllerInteractiveTransitioning>)navigationControllerInteractiveTransitionForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg1;
@end

