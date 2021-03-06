//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterNotificationSettingsEntryFeatureSwitchConfig : NSObject
{
    long long _type;
    NSArray *_featureSwitches;
    NSString *_experiment;
    NSArray *_treatmentBuckets;
}

+ (id)defaultConfig;
+ (id)configWithExperiment:(id)arg1 treatmentBuckets:(id)arg2;
+ (id)configWithFeatureSwitches:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *treatmentBuckets; // @synthesize treatmentBuckets=_treatmentBuckets;
@property(readonly, copy, nonatomic) NSString *experiment; // @synthesize experiment=_experiment;
@property(readonly, copy, nonatomic) NSArray *featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)arg1 featureSwitches:(id)arg2 experiment:(id)arg3 treatmentBuckets:(id)arg4;

@end

