//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVRProjection, NSDate;
@protocol AVRInteractionController, AVRInternalRenderView;

@interface AVRRenderView : UIView
{
    _Bool _readyForDisplay;
    _Bool _superResolutionSupported;
    _Bool _superResolutionEnabled;
    double _zoom;
    AVRProjection *_contentProjection;
    id <AVRInteractionController> _controller;
    long long _superResolutionContentType;
    long long _superResolutionEncoderType;
    UIView<AVRInternalRenderView> *_renderView;
    double _lastAspect;
    NSDate *_lastRenderTime;
    unsigned long long _bufferID;
    struct CGSize _lastDisplaySize;
    struct CGRect _cachedBounds;
}

+ (void)collectWeakRefs;
+ (void)flushGPU;
+ (void)_trackInternalView:(id)arg1;
+ (id)_trackLockQueue;
+ (id)_trackedViews;
@property(nonatomic) unsigned long long bufferID; // @synthesize bufferID=_bufferID;
@property(nonatomic) struct CGSize lastDisplaySize; // @synthesize lastDisplaySize=_lastDisplaySize;
@property(retain, nonatomic) NSDate *lastRenderTime; // @synthesize lastRenderTime=_lastRenderTime;
@property double lastAspect; // @synthesize lastAspect=_lastAspect;
@property struct CGRect cachedBounds; // @synthesize cachedBounds=_cachedBounds;
@property(retain, nonatomic) UIView<AVRInternalRenderView> *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) long long superResolutionEncoderType; // @synthesize superResolutionEncoderType=_superResolutionEncoderType;
@property(nonatomic) long long superResolutionContentType; // @synthesize superResolutionContentType=_superResolutionContentType;
@property(nonatomic) _Bool superResolutionEnabled; // @synthesize superResolutionEnabled=_superResolutionEnabled;
@property(nonatomic, getter=isSuperResolutionSupported) _Bool superResolutionSupported; // @synthesize superResolutionSupported=_superResolutionSupported;
@property(nonatomic) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic) id <AVRInteractionController> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) AVRProjection *contentProjection; // @synthesize contentProjection=_contentProjection;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
- (void).cxx_destruct;
- (id)_createInternalView:(long long)arg1;
- (id)takeSnapshot;
- (void)_setupInternalView:(id)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 bufferID:(unsigned long long)arg2 presentationTime:(double)arg3 forceUpdate:(_Bool)arg4 computationCompleted:(CDUnknownBlockType)arg5 displayCompleted:(CDUnknownBlockType)arg6;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 bufferID:(unsigned long long)arg2 presentationTime:(double)arg3 forceUpdate:(_Bool)arg4;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 forceUpdate:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 api:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

