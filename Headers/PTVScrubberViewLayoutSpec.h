//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVScrubberViewLayoutSpec : NSObject
{
}

+ (struct CGRect)StartIndicatorFrameWithSuperViewSize:(struct CGSize)arg1 StartTime:(double)arg2 CurrentTime:(double)arg3 TotalTime:(double)arg4 ZoomFactor:(double)arg5;
+ (struct CGRect)TimeBarFrameForIndex:(unsigned long long)arg1 WithSuperViewSize:(struct CGSize)arg2 CurrentTime:(double)arg3 TotalTime:(double)arg4 ZoomFactor:(double)arg5;
+ (unsigned long long)NumberOfTimeBarsForTotalDuration:(double)arg1;
+ (double)TimeBetweenTimeBarsForTotalDuration:(double)arg1;
+ (struct CGRect)WhiteBarFrameWithSuperViewSize:(struct CGSize)arg1 CurrentTime:(double)arg2 TotalTime:(double)arg3 ZoomFactor:(double)arg4;
+ (struct CGRect)GrayBarFrameWithSuperViewSize:(struct CGSize)arg1 CurrentTime:(double)arg2 TotalTime:(double)arg3 ZoomFactor:(double)arg4;
+ (double)FullBarWidthWithSuperviewSize:(struct CGSize)arg1 ZoomFactor:(double)arg2;
+ (double)BarHeight;
+ (double)SpacingBetweenIndicatorAndBar;
+ (double)StartIndicatorHeight;
+ (double)StartingXForSuperviewSize:(struct CGSize)arg1 CurrentTime:(double)arg2 TotalTime:(double)arg3 ZoomFactor:(double)arg4;

@end
