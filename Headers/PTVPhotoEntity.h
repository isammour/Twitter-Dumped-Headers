//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVOpenGLEntity-Protocol.h>
#import <PeriscopeViewer/PTVTimeDrivenModel-Protocol.h>

@class EAGLContext, NSMutableArray, NSString, PTVShaderProgram, PTVTexture;

@interface PTVPhotoEntity : NSObject <PTVOpenGLEntity, PTVTimeDrivenModel>
{
    PTVPhotoEntity *_weakSelf;
    CDStruct_9a84cbef _videoQuadBuffers;
    struct {
        unsigned int positionAttribute;
        unsigned int textureCoordinateAttribute;
        unsigned int inputImageTextureUniform;
        unsigned int canvasSizeUniform;
        unsigned int viewportTransformUniform;
        unsigned int opacityUniform;
    } _photoProgramInputs;
    struct PTVVideoQuadStrip _photoQuad;
    struct CGRect _frameInVideo;
    union _GLKMatrix4 _vertexTransform;
    NSMutableArray *_animations;
    _Bool _visible;
    _Bool _aspectFill;
    double _rotation;
    EAGLContext *_context;
    PTVShaderProgram *_photoProgram;
    PTVTexture *_photoTexture;
    double _zoom;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic) _Bool aspectFill; // @synthesize aspectFill=_aspectFill;
@property(retain, nonatomic) PTVTexture *photoTexture; // @synthesize photoTexture=_photoTexture;
@property(retain, nonatomic) PTVShaderProgram *photoProgram; // @synthesize photoProgram=_photoProgram;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)startAnimation:(id)arg1;
- (void)advanceAnimationsBy:(double)arg1;
- (void)animatePhotoOut;
- (void)animatePhotoIn;
- (void)updateQuadForTexture;
- (void)clearPhoto;
- (void)updatePhotoAttributes:(struct PTVPhotoEntityAttributes)arg1;
- (void)loadPhotoFromImage:(struct CGImage *)arg1 attributes:(struct PTVPhotoEntityAttributes)arg2;
- (void)updateVertexTransform;
- (void)tickWithPassageOfTime:(double)arg1;
@property(readonly, nonatomic) _Bool needsToDraw;
@property(readonly, nonatomic) _Bool matchVideoMirroring;
@property(readonly, nonatomic) _Bool isPartOfVideo;
- (void)drawInContext:(id)arg1 withViewportTransform:(union _GLKMatrix4)arg2;
- (void)unloadLongLivedResourcesFromContext:(id)arg1;
- (void)loadLongLivedResourcesInContext:(id)arg1;
- (id)initWithPhotoProgram:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

