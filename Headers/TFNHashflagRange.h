//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNHashflag;

@interface TFNHashflagRange : NSObject
{
    _Bool _isRightToLeft;
    TFNHashflag *_hashflag;
    struct _NSRange _range;
}

@property(readonly, nonatomic) _Bool isRightToLeft; // @synthesize isRightToLeft=_isRightToLeft;
@property(readonly, nonatomic) TFNHashflag *hashflag; // @synthesize hashflag=_hashflag;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange)arg1 hashflag:(id)arg2 isRightToLeft:(_Bool)arg3;

@end

