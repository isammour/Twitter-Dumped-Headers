//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1MomentPageEngagementDelegate-Protocol.h>
#import <T1Twitter/T1MomentViewControllerDelegate-Protocol.h>

@class T1MomentCapsulePageViewController, UIPinchGestureRecognizer;

@protocol T1MomentCapsulePageViewControllerDelegate <T1MomentViewControllerDelegate, T1MomentPageEngagementDelegate>
- (void)momentCapsulePageViewControllerDidTapCTA:(T1MomentCapsulePageViewController *)arg1;
- (void)momentCapsulePageViewControllerDidTapRetryHydration:(T1MomentCapsulePageViewController *)arg1;
- (void)momentCapsulePageViewControllerDidTapRetryFetch:(T1MomentCapsulePageViewController *)arg1;
- (void)momentCapsulePageViewControllerDidPinch:(T1MomentCapsulePageViewController *)arg1 withGestureRecognizer:(UIPinchGestureRecognizer *)arg2;
- (void)momentCapsulePageViewControllerDidRotate:(T1MomentCapsulePageViewController *)arg1;
- (void)momentCapsulePageViewControllerDidDoubleTap:(T1MomentCapsulePageViewController *)arg1;
- (void)momentCapsulePageViewControllerDidTap:(T1MomentCapsulePageViewController *)arg1 withLocation:(struct CGPoint)arg2;
@end

