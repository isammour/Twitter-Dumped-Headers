//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNModalContainerViewControllerDelegate-Protocol.h>

@class TFNModalSheetViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol TFNModalSheetViewControllerDelegate <TFNModalContainerViewControllerDelegate>

@optional
- (void)modalSheetViewControllerDidDismiss:(TFNModalSheetViewController *)arg1 fromGesture:(_Bool)arg2;
- (void)modalSheetViewControllerWillDismiss:(TFNModalSheetViewController *)arg1 fromGesture:(_Bool)arg2;
- (void)modalSheetViewController:(TFNModalSheetViewController *)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
@end

