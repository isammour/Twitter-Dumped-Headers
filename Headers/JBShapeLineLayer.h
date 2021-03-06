//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIBezierPath;

@interface JBShapeLineLayer : CAShapeLayer
{
    _Bool _filled;
    unsigned long long _tag;
    UIBezierPath *_currentPath;
}

+ (void)initialize;
@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;
@property(readonly, nonatomic) _Bool filled; // @synthesize filled=_filled;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWithTag:(unsigned long long)arg1 filled:(_Bool)arg2 smoothedLine:(_Bool)arg3 lineStyle:(long long)arg4 currentPath:(id)arg5;

@end

