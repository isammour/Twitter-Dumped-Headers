//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIViewController;

@protocol T1ResizableHeaderContentViewController
@property(nonatomic) long long selectedIndex;
@property(nonatomic) _Bool shouldAutoHideNavigationBar;
- (double)topPaddingMaximumHeight;
- (double)topPaddingHeight;
- (double)navigationBarHeight;
- (void)reloadViewControllerData;
- (UIViewController *)viewControllerAtIndex:(long long)arg1;
- (long long)numberOfViewControllers;
- (_Bool)isViewControllerLoadedAtIndex:(long long)arg1;
- (UIViewController *)selectedViewController;
@end

