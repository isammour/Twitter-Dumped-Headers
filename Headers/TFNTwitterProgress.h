//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterProgress : NSObject
{
    unsigned long long _count;
    double _progress;
}

@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)initWithCount:(unsigned long long)arg1 progress:(double)arg2;
- (id)init;

@end

