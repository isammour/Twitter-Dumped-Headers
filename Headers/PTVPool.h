//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PTVPool : NSObject
{
    CDUnknownBlockType _generator;
    NSMutableArray *_pool;
    int _count;
    long long _max;
}

@property(nonatomic) long long max; // @synthesize max=_max;
- (void).cxx_destruct;
- (void)push:(id)arg1;
- (_Bool)drain:(int)arg1;
- (id)pop;
- (id)initWithGenerator:(CDUnknownBlockType)arg1;

@end

