//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TwitterTextEntity : NSObject
{
    unsigned long long _type;
    struct _NSRange _range;
}

+ (id)entityWithType:(unsigned long long)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange)arg2;

@end

