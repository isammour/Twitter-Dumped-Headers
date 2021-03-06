//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1ResizableHeaderSubheaderInfo : NSObject
{
    double _topSpacing;
    double _bottomSpacing;
    double _animationProgress;
    double _lastPreferredHeight;
    double _animationStartHeight;
    long long _animationMode;
    unsigned long long _options;
    CDUnknownBlockType _animationComplete;
}

@property(copy, nonatomic) CDUnknownBlockType animationComplete; // @synthesize animationComplete=_animationComplete;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long animationMode; // @synthesize animationMode=_animationMode;
@property(nonatomic) double animationStartHeight; // @synthesize animationStartHeight=_animationStartHeight;
@property(nonatomic) double lastPreferredHeight; // @synthesize lastPreferredHeight=_lastPreferredHeight;
@property(nonatomic) double animationProgress; // @synthesize animationProgress=_animationProgress;
@property(nonatomic) double bottomSpacing; // @synthesize bottomSpacing=_bottomSpacing;
@property(nonatomic) double topSpacing; // @synthesize topSpacing=_topSpacing;
- (void).cxx_destruct;
- (void)invokeAnimationCompletion;
@property(readonly, nonatomic, getter=isInitializing) _Bool initializing;

@end

