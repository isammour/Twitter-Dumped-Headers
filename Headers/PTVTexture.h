//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;

@interface PTVTexture : NSObject
{
    _Bool _isPortrait;
    _Bool _loaded;
    unsigned int _textureID;
    EAGLContext *_context;
    unsigned long long _width;
    unsigned long long _height;
}

@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int textureID; // @synthesize textureID=_textureID;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)deleteTexture;
- (void)generateFromCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 mipMap:(_Bool)arg3;
- (id)initWithContext:(id)arg1;

@end

