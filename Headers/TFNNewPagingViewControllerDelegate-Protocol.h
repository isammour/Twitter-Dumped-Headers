//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, TFNNewPagingViewController;

@protocol TFNNewPagingViewControllerDelegate <NSObject>

@optional
- (void)pagingViewControllerDidUpdate:(TFNNewPagingViewController *)arg1;
- (void)pagingViewController:(TFNNewPagingViewController *)arg1 didUpdateVisiblePercent:(double)arg2 onPageAtIndexPath:(NSIndexPath *)arg3;
- (void)pagingViewController:(TFNNewPagingViewController *)arg1 didEndDisplayingPageAtIndexPath:(NSIndexPath *)arg2;
- (void)pagingViewController:(TFNNewPagingViewController *)arg1 willDisplayPageAtIndexPath:(NSIndexPath *)arg2;
@end

