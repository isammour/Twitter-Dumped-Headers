//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1TabNavigationController, T1TabView, UIView;

@protocol T1AppNavigationTabEntry <NSObject>
- (T1TabNavigationController *)createContentController;
@property(nonatomic, readonly) long long panelID;
@property(nonatomic, readonly) T1TabView *tabView;

@optional
@property(nonatomic, retain) UIView *hostingView;
- (void)addContentReadyDependantObservers;
@end

