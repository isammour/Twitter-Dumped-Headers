//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1MomentCapsulePivotOverlayViewController, UIButton;

@protocol T1MomentCapsulePivotOverlayViewControllerDelegate <NSObject>

@optional
- (void)overlayViewController:(T1MomentCapsulePivotOverlayViewController *)arg1 didPressMomentLevelLikeButton:(UIButton *)arg2 didLikeMoment:(_Bool)arg3;
- (void)overlayViewController:(T1MomentCapsulePivotOverlayViewController *)arg1 didPressEditButton:(id)arg2;
- (void)overlayViewController:(T1MomentCapsulePivotOverlayViewController *)arg1 didPressShareButton:(id)arg2;
- (void)overlayViewController:(T1MomentCapsulePivotOverlayViewController *)arg1 didPressSoundButton:(id)arg2;
- (void)overlayViewController:(T1MomentCapsulePivotOverlayViewController *)arg1 didPressCloseButton:(id)arg2;
@end

