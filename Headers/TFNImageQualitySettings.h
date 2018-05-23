//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterImageCategoryVariantSelectionBehaviorProvider-Protocol.h>

@class NSNumber, TIPGlobalConfiguration, TNLCommunicationAgent;
@protocol OS_dispatch_queue;

@interface TFNImageQualitySettings : NSObject <TFNTwitterImageCategoryVariantSelectionBehaviorProvider>
{
    TNLCommunicationAgent *_communicationAgent;
    TIPGlobalConfiguration *_tipConfiguration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNumber *_internalCurrentValueNumber;
}

+ (id)sharedSettings;
@property(retain, nonatomic) NSNumber *internalCurrentValueNumber; // @synthesize internalCurrentValueNumber=_internalCurrentValueNumber;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) TIPGlobalConfiguration *tipConfiguration; // @synthesize tipConfiguration=_tipConfiguration;
@property(readonly, nonatomic) TNLCommunicationAgent *communicationAgent; // @synthesize communicationAgent=_communicationAgent;
- (void).cxx_destruct;
- (void)communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
@property(readonly) CDStruct_4ace6bb3 variantSelectionBehavior;
- (void)_tfn_clearRenderedCacheIfNeededWhenSwitchingFromOldSettings:(long long)arg1 oldStatus:(long long)arg2 toNewSettings:(long long)arg3 newStatus:(long long)arg4;
@property(readonly) _Bool shouldUseHighQualityImages;
@property long long currentValue;
- (id)initWithCommunicationAgent:(id)arg1 tipConfiguration:(id)arg2;
- (id)init;

@end

