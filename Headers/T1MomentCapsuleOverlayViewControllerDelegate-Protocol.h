//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1MomentCapsuleOverlayViewController;

@protocol T1MomentCapsuleOverlayViewControllerDelegate <NSObject>

@optional
- (void)overlayViewController:(T1MomentCapsuleOverlayViewController *)arg1 didEndPanningWithVelocity:(double)arg2;
- (void)overlayViewController:(T1MomentCapsuleOverlayViewController *)arg1 didPanToPercent:(double)arg2;
- (void)overlayViewController:(T1MomentCapsuleOverlayViewController *)arg1 didBeginPanningWithPercent:(double)arg2;
@end

