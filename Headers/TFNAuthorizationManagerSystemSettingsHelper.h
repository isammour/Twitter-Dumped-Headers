//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFSTimer;

@interface TFNAuthorizationManagerSystemSettingsHelper : NSObject
{
    CDUnknownBlockType _completion;
    TFSTimer *_timeoutTimer;
}

- (void).cxx_destruct;
- (void)private_resetTimer;
- (void)private_callCompletion;
- (void)dealloc;
- (void)openSettingsWithCompletion:(CDUnknownBlockType)arg1;

@end

