//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1MomentCapsuleInfoView, T1MomentCapsuleInfoViewTheme, TFNLayoutMetrics, TFNTwitterAccount;
@protocol T1MomentViewModel;

@protocol T1MomentCapsuleInfoViewLayoutDelegate <NSObject>
@property(nonatomic) _Bool hidesFollowButton;
- (void)layoutView:(T1MomentCapsuleInfoView *)arg1 withLayoutMetrics:(TFNLayoutMetrics *)arg2;
- (struct CGSize)sizeOfViewWithMomentViewModel:(id <T1MomentViewModel>)arg1 width:(double)arg2 theme:(T1MomentCapsuleInfoViewTheme *)arg3 account:(TFNTwitterAccount *)arg4 layoutMetrics:(TFNLayoutMetrics *)arg5;

@optional
- (struct CGSize)sizeOfLoadingViewForView:(T1MomentCapsuleInfoView *)arg1;
- (void)layoutLoadingViewForView:(T1MomentCapsuleInfoView *)arg1;
- (struct CGSize)estimatedSizeOfViewWithMomentViewModel:(id <T1MomentViewModel>)arg1 theme:(T1MomentCapsuleInfoViewTheme *)arg2 account:(TFNTwitterAccount *)arg3 layoutMetrics:(TFNLayoutMetrics *)arg4;
@end

