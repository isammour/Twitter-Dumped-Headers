//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1StandardSegmentedViewController.h>

@class UIColor;
@protocol T1SegmentedViewControllerDataSource;

@interface T1StandardSegmentedViewController (T1Twitter)
@property(nonatomic, retain) UIColor *tabBarBackgroundColor;
@property(nonatomic) _Bool contentTabChangeInteractionEnabled;
@property(nonatomic) double maximumContentControllerUnusedTime;
- (void)setSelectedTabIndex:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool allowMultiContentSpan;
@property(nonatomic) _Bool carouselSelectionIndicatorShrinksOnDrag;
@property(nonatomic) long long carouselTabSynchronizationType;
@property(nonatomic) long long selectedTabIndex;
@property(nonatomic, retain) UIColor *separatorColor;
- (void)reloadDataSource;
@property(nonatomic) __weak id <T1SegmentedViewControllerDataSource> dataSource;
@end
