//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSSet, PTVGiftContributorWatcher, PTVMergeParticipantUser, PTVMessage, PTVVideoOverlayViewController, UIView;

@protocol PTVVideoOverlayViewControllerBroadcasterDelegate <NSObject>
- (void)broadcasterDidBlockUserFromMessage:(PTVMessage *)arg1;
- (void)broadcasterDidBlockUser:(PTVMergeParticipantUser *)arg1;

@optional
- (void)videoOverlayViewControllerDidTapOnContributors:(PTVVideoOverlayViewController *)arg1 withContributorWatcher:(PTVGiftContributorWatcher *)arg2 presentUserIDs:(NSSet *)arg3;
- (void)videoOverlayViewControllerReplayDidSelectPauseReplay:(PTVVideoOverlayViewController *)arg1;
- (void)videoOverlayViewControllerReplayDidSelectPlayReplay:(PTVVideoOverlayViewController *)arg1;
- (void)videoOverlayViewControllerDidSelectShowBroadcastDetails:(PTVVideoOverlayViewController *)arg1;
- (void)videoOverlayViewControllerDidSelectOverflowMenu:(PTVVideoOverlayViewController *)arg1;
- (void)videoOverlayViewController:(PTVVideoOverlayViewController *)arg1 didSelectShareBroadcastAtSelectedTime:(double)arg2 fromView:(UIView *)arg3;
- (void)videoOverlayViewControllerDidSelectShareBroadcast:(PTVVideoOverlayViewController *)arg1 shareHighlightSelectedByDefault:(_Bool)arg2;
- (void)videoOverlayViewControllerDidSelectShareScreenshotOnTwitter:(PTVVideoOverlayViewController *)arg1 sourceViewForActivityViewController:(UIView *)arg2;
@end

