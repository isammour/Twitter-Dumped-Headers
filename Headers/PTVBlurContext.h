//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;

@interface PTVBlurContext : NSObject
{
    EAGLContext *_glContext;
}

+ (void)willEnterForeground;
+ (void)didEnterBackground;
+ (void)willResignActive;
+ (void)didBecomeActive;
+ (void)initialize;
- (void).cxx_destruct;
- (id)glContext;
- (void)dealloc;
- (_Bool)releaseContextIfBlocked:(struct *)arg1;
- (void)releaseContext:(struct *)arg1;
- (struct *)acquireContext;
- (id)init;

@end

