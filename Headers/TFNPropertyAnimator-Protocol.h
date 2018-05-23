//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSArray, TFNInterpolatedKeyframe;
@protocol TFNKeyframeDataSource;

@protocol TFNPropertyAnimator <NSObject>
@property(readonly, nonatomic) TFNInterpolatedKeyframe *keyframe;
@property(nonatomic) __weak id <TFNKeyframeDataSource> dataSource;
- (void)animateWithKeyframes:(NSArray *)arg1;
@end
