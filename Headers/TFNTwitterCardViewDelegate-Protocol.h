//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNLayoutMetrics, TFNTwitterCardView, TFNTwitterCardViewEvent, TIPImageFetchMetrics, UIImage, UIView, UIViewController;

@protocol TFNTwitterCardViewDelegate <NSObject>
- (UIViewController *)cardView:(TFNTwitterCardView *)arg1 didFireViewEvent:(TFNTwitterCardViewEvent *)arg2;
- (TFNLayoutMetrics *)layoutMetricsForCardView:(TFNTwitterCardView *)arg1;

@optional
- (void)cardView:(TFNTwitterCardView *)arg1 didFinishImageLoadWithMetrics:(TIPImageFetchMetrics *)arg2;
- (void)cardView:(TFNTwitterCardView *)arg1 presentFullscreenPlayerFromPreviewView:(UIView *)arg2 withPreviewImage:(UIImage *)arg3;
@end
