//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAKeyframeAnimation.h>

@class NSArray;

@interface T1InterpolatedAnimation : CAKeyframeAnimation
{
    NSArray *_normalizedValues;
    id _toValue;
    id _fromValue;
}

@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) NSArray *normalizedValues; // @synthesize normalizedValues=_normalizedValues;
- (void).cxx_destruct;
- (id)_interpolateValues;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
