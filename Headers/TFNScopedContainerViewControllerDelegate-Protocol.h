//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNScopedContainerViewController;

@protocol TFNScopedContainerViewControllerDelegate <NSObject>

@optional
- (void)scopedContainerViewController:(TFNScopedContainerViewController *)arg1 didSelectViewControllerAtIndex:(long long)arg2;
- (void)scopedContainerViewController:(TFNScopedContainerViewController *)arg1 willSelectViewControllerAtIndex:(long long)arg2;
- (NSString *)scopedContainerViewController:(TFNScopedContainerViewController *)arg1 titleForSegmentAtIndex:(long long)arg2;
@end
