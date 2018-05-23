//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TFNTwitterActivityPagination : NSObject
{
    _Bool _hasBottomGap;
    _Bool _hasTopGap;
    long long _maxCursor;
    long long _minCursor;
}

@property(readonly, nonatomic) long long minCursor; // @synthesize minCursor=_minCursor;
@property(readonly, nonatomic) long long maxCursor; // @synthesize maxCursor=_maxCursor;
@property(readonly, nonatomic) _Bool hasTopGap; // @synthesize hasTopGap=_hasTopGap;
@property(readonly, nonatomic) _Bool hasBottomGap; // @synthesize hasBottomGap=_hasBottomGap;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;
- (id)initWithMaxCursor:(long long)arg1 minCursor:(long long)arg2 hasTopGap:(_Bool)arg3 hasBottomGap:(_Bool)arg4;

@end
