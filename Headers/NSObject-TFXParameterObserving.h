//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (TFXParameterObserving)
- (void)tfx_stopObservingParameters;
- (void)tfx_startObservingParameters;
- (void)tfx_setupObservingForParameter:(id)arg1;
- (void)tfx_bindParameter:(id)arg1 toProperty:(id)arg2;
- (void)tfx_bindParameter:(id)arg1 toBlock:(CDUnknownBlockType)arg2;
- (id)tfx_parameterObservers;
@end
