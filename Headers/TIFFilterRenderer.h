//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TIFFilterContext;

@interface TIFFilterRenderer : NSObject
{
    struct Renderer *_renderer;
    struct RenderTarget *_gaussianV;
    struct RenderTarget *_gaussianH;
    unsigned int _gaussianProgram;
    float _gaussianKernel[15];
    TIFFilterContext *_context;
}

+ (id)autoLevelImage:(id)arg1;
+ (void)tfn_filterImage:(id)arg1 filterLibraryId:(id)arg2 filterId:(id)arg3 autoLevel:(_Bool)arg4 shaderParam:(float)arg5 vignetteParam:(float)arg6 sync:(_Bool)arg7 onComplete:(CDUnknownBlockType)arg8;
@property(readonly, nonatomic) TIFFilterContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_gaussianBlur:(unsigned int)arg1 kernel:(float [15])arg2;
- (id)filterImage:(id)arg1 filter:(id)arg2 autoLevel:(_Bool)arg3 shaderParam:(float)arg4 vignetteParam:(float)arg5;
- (void)renderImage:(id)arg1 sourceTexture:(unsigned int)arg2 sourceDims:(struct CGSize)arg3 dims:(struct CGSize)arg4 offset:(struct CGPoint)arg5 alpha:(float)arg6 scissorRect:(struct CGRect)arg7 flipUVs:(_Bool)arg8 rotation:(float)arg9 upsideDown:(_Bool)arg10 flipX:(_Bool)arg11 shaderParam:(float)arg12 vignetteParam:(float)arg13;
- (void)renderImage:(id)arg1 sourceTexture:(unsigned int)arg2 sourceDims:(struct CGSize)arg3 dims:(struct CGSize)arg4 offset:(struct CGPoint)arg5 alpha:(float)arg6 scissorRect:(struct CGRect)arg7 flipUVs:(_Bool)arg8 rotation:(float)arg9 shaderParam:(float)arg10 vignetteParam:(float)arg11;
- (void)prepareSource:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

