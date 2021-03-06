//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSMutableArray, NSString;

@interface PTVShaderProgram : NSObject
{
    _Bool _programLinked;
    unsigned int _program;
    EAGLContext *_context;
    NSMutableArray *_attributes;
    NSMutableArray *_uniforms;
    NSString *_vertexShaderString;
    NSString *_fragmentShaderString;
}

+ (unsigned int)_compileShaderFromString:(id)arg1 type:(unsigned int)arg2;
+ (unsigned int)_linkProgramWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
@property(nonatomic) _Bool programLinked; // @synthesize programLinked=_programLinked;
@property(retain, nonatomic) NSString *fragmentShaderString; // @synthesize fragmentShaderString=_fragmentShaderString;
@property(retain, nonatomic) NSString *vertexShaderString; // @synthesize vertexShaderString=_vertexShaderString;
@property(nonatomic) unsigned int program; // @synthesize program=_program;
@property(retain, nonatomic) NSMutableArray *uniforms; // @synthesize uniforms=_uniforms;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)deleteProgram;
- (void)dealloc;
- (void)use;
- (_Bool)createProgramAndLink;
- (unsigned int)uniformIndex:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (id)initWithVertexShaderFilename:(id)arg1 fragmentShaderFilename:(id)arg2 context:(id)arg3;

@end

