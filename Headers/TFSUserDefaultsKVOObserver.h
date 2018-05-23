//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface TFSUserDefaultsKVOObserver : NSObject
{
    NSMutableDictionary *_callbacksDictionary;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterForCallbackOnKey:(id)arg1;
- (void)_registerForCallbackOnKey:(id)arg1;
- (void)removeValueDidChangeTarget:(id)arg1 selector:(SEL)arg2 forKey:(id)arg3;
- (void)addValueDidChangeTarget:(id)arg1 selector:(SEL)arg2 forKey:(id)arg3;
- (void)removeAllTargets;
- (_Bool)hasRegisteredTarget;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1;

@end

