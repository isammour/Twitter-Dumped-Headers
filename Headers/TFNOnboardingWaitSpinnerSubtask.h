//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class TFNOnboardingNavigationLink, TFNOnboardingRichText, TFNOnboardingSubtaskDataReference;

@interface TFNOnboardingWaitSpinnerSubtask : TFNOnboardingSubtask
{
    TFNOnboardingRichText *_spinnerMessage;
    long long _waitTimeMs;
    long long _maxExtensionTimeMs;
    TFNOnboardingSubtaskDataReference *_extensionCondition;
    TFNOnboardingNavigationLink *_nextLink;
}

+ (id)typeNames;
+ (long long)version;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *extensionCondition; // @synthesize extensionCondition=_extensionCondition;
@property(readonly, nonatomic) long long maxExtensionTimeMs; // @synthesize maxExtensionTimeMs=_maxExtensionTimeMs;
@property(readonly, nonatomic) long long waitTimeMs; // @synthesize waitTimeMs=_waitTimeMs;
@property(readonly, nonatomic) TFNOnboardingRichText *spinnerMessage; // @synthesize spinnerMessage=_spinnerMessage;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 error:(id *)arg4;

@end
