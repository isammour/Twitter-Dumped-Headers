//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1BoundedSliderContinuousLongPressDetectorHistoryItem : NSObject
{
    unsigned long long _hash;
    double _time;
    struct CGPoint _location;
}

@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTime:(double)arg1 location:(struct CGPoint)arg2;
- (id)init;

@end

