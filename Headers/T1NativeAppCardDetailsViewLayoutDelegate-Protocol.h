//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class T1NativeAppCardDetailsViewLayoutState, TFNLayoutMetrics;
@protocol T1NativeAppCardDetailsViewModel;

@protocol T1NativeAppCardDetailsViewLayoutDelegate <TFNLayoutableViewLayoutDelegate>
+ (id)sharedLayoutDelegate;
- (unsigned long long)tfnButtonSizeForViewModel:(id <T1NativeAppCardDetailsViewModel>)arg1;
- (T1NativeAppCardDetailsViewLayoutState *)layoutForViewModel:(id <T1NativeAppCardDetailsViewModel>)arg1 layoutMetrics:(TFNLayoutMetrics *)arg2 layoutType:(unsigned long long)arg3;
@end
