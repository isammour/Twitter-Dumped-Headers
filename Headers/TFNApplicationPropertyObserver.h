//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;

@interface TFNApplicationPropertyObserver : NSObject
{
    UIApplication *_application;
    long long _applicationIconBadgeNumber;
    long long _applicationState;
}

@property long long applicationState; // @synthesize applicationState=_applicationState;
@property long long applicationIconBadgeNumber; // @synthesize applicationIconBadgeNumber=_applicationIconBadgeNumber;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_tfn_applicationStateDidChange;
- (void)_tfn_applicationStateChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithApplication:(id)arg1;
- (id)init;

@end

