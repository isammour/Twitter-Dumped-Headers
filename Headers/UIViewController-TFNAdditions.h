//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (TFNAdditions)
@property(readonly, nonatomic) UIViewController *tfn_rootViewController;
@property(readonly, nonatomic) UIViewController *tfn_topPresentedViewController;
@property(readonly, nonatomic) UIViewController *tfn_topViewController;
- (id)tfn_viewControllerWithPredicate:(id)arg1;
- (void)_tfn_addReachableViewControllers:(id)arg1;
- (id)tfn_reachableViewControllers;
@property(readonly, nonatomic) long long tfn_deprecated_interfaceOrientation;
- (_Bool)tfn_shouldPresentControllerFromPresentedViewController:(id)arg1;
@property(readonly, nonatomic) _Bool tfn_locksOrientationWhenPresented;
@end

