//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNInterpolationProgress : NSObject
{
    double _relativeTime;
    double _relativeValue;
}

@property(readonly, nonatomic) double relativeValue; // @synthesize relativeValue=_relativeValue;
@property(readonly, nonatomic) double relativeTime; // @synthesize relativeTime=_relativeTime;
- (id)description;
- (id)initWithRelativeTime:(double)arg1 relativeValue:(double)arg2;

@end

