//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TwitterTextWeightedRange : NSObject
{
    long long _weight;
    struct _NSRange _range;
}

@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)initWithRange:(struct _NSRange)arg1 weight:(long long)arg2;

@end

