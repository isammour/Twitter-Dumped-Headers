//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol T1CustomerFeedbackRatingViewDelegate;

@interface T1CustomerFeedbackBaseRatingView : UIView
{
    id <T1CustomerFeedbackRatingViewDelegate> _delegate;
}

+ (double)intrinsicHeightForWidth:(double)arg1;
+ (_Bool)shouldDisplayWideFormatForWidth:(double)arg1;
@property(nonatomic) __weak id <T1CustomerFeedbackRatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)currentAvailableWidth;
- (void)resetSelection;
@property(readonly, nonatomic) unsigned long long maxValue;
@property(readonly, nonatomic) unsigned long long minValue;

@end

