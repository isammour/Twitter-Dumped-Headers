//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVSketchPointReceivable-Protocol.h>
#import <PeriscopeViewer/PTVSwitchboardDisplayable-Protocol.h>
#import <PeriscopeViewer/PTVThreadContainer-Protocol.h>
#import <PeriscopeViewer/PTVVideoEntityDataSource-Protocol.h>

@class EAGLContext, NSArray, NSString, NSThread, PTVFramebuffer, PTVFramebufferDisplayView, PTVSketchEngine, PTVSwitchboardEntity, PTVVideoEntity;
@protocol PTVVideoProcessorDelegate;

@interface PTVVideoProcessor : NSObject <PTVVideoEntityDataSource, PTVThreadContainer, PTVSketchPointReceivable, PTVSwitchboardDisplayable>
{
    _Bool _omitVideoDuringFramebufferDisplay;
    _Bool _mirrorVideoPreview;
    _Bool _pipelineLoaded;
    _Bool _shuttingDown;
    _Bool _appIsInactive;
    PTVFramebufferDisplayView *_targetDisplayView;
    id <PTVVideoProcessorDelegate> _delegate;
    double _videoZoom;
    double _encodedRotation;
    double _viewOrientation;
    EAGLContext *_context;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVOpenGLESTextureCache *_textureCacheHQ;
    struct __CVOpenGLESTextureCache *_currentTextureCacheForVideoEntity;
    PTVVideoEntity *_videoEntity;
    PTVSwitchboardEntity *_switchboardEntity;
    PTVSketchEngine *_sketchEngine;
    PTVFramebuffer *_framebuffer;
    PTVFramebuffer *_framebufferHQ;
    NSThread *_videoProcessingThread;
    NSArray *_entities;
    struct opaqueCMSampleBuffer *_currentSampleBuffer;
    struct CGSize _targetSize;
}

@property(nonatomic) _Bool appIsInactive; // @synthesize appIsInactive=_appIsInactive;
@property(nonatomic) _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(nonatomic) struct opaqueCMSampleBuffer *currentSampleBuffer; // @synthesize currentSampleBuffer=_currentSampleBuffer;
@property(retain, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) NSThread *videoProcessingThread; // @synthesize videoProcessingThread=_videoProcessingThread;
@property(retain, nonatomic) PTVFramebuffer *framebufferHQ; // @synthesize framebufferHQ=_framebufferHQ;
@property(retain, nonatomic) PTVFramebuffer *framebuffer; // @synthesize framebuffer=_framebuffer;
@property(nonatomic) _Bool pipelineLoaded; // @synthesize pipelineLoaded=_pipelineLoaded;
@property(retain, nonatomic) PTVSketchEngine *sketchEngine; // @synthesize sketchEngine=_sketchEngine;
@property(retain, nonatomic) PTVSwitchboardEntity *switchboardEntity; // @synthesize switchboardEntity=_switchboardEntity;
@property(retain, nonatomic) PTVVideoEntity *videoEntity; // @synthesize videoEntity=_videoEntity;
@property(nonatomic) struct __CVOpenGLESTextureCache *currentTextureCacheForVideoEntity; // @synthesize currentTextureCacheForVideoEntity=_currentTextureCacheForVideoEntity;
@property(nonatomic) struct __CVOpenGLESTextureCache *textureCacheHQ; // @synthesize textureCacheHQ=_textureCacheHQ;
@property(nonatomic) struct __CVOpenGLESTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property double viewOrientation; // @synthesize viewOrientation=_viewOrientation;
@property(nonatomic) double encodedRotation; // @synthesize encodedRotation=_encodedRotation;
@property double videoZoom; // @synthesize videoZoom=_videoZoom;
@property(nonatomic) _Bool mirrorVideoPreview; // @synthesize mirrorVideoPreview=_mirrorVideoPreview;
@property(nonatomic) _Bool omitVideoDuringFramebufferDisplay; // @synthesize omitVideoDuringFramebufferDisplay=_omitVideoDuringFramebufferDisplay;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) __weak id <PTVVideoProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PTVFramebufferDisplayView *targetDisplayView; // @synthesize targetDisplayView=_targetDisplayView;
- (void).cxx_destruct;
- (void)removeSwitchboardAsset;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes)arg1;
- (void)displaySwitchboardAsset:(id)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
- (struct __CVOpenGLESTextureCache *)textureCacheForVideoEntity:(id)arg1;
- (struct opaqueCMSampleBuffer *)currentSampleBufferForVideoEntity:(id)arg1;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)enqueueSketchPoints:(id)arg1;
- (void)setVideoPreview:(id)arg1;
- (void)detachDisplayView:(id)arg1;
- (void)attachDisplayView:(id)arg1 omittingVideo:(_Bool)arg2;
- (void)backgroundProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processiPhoneCameraMetadataObjects:(id)arg1;
- (void)processiPhoneCameraSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)_teardownPipeline;
- (void)_setupPipeline;
- (void)performOnRenderThread:(CDUnknownBlockType)arg1 waitTillDone:(_Bool)arg2;
- (void)performOnRenderThread:(CDUnknownBlockType)arg1;
- (id)initWithTargetSize:(struct CGSize)arg1 appIsCurrentlyActive:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (void)_executeBackgroundBlock:(CDUnknownBlockType)arg1;
- (void)startupBackgroundRunloop;
- (void)shutdown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

