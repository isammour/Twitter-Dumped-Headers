//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNHashflagProvider-Protocol.h>

@class NSDictionary, NSString;
@protocol TFNTwitterFeatureSwitches;

@interface T1HashflagProvider : NSObject <TFNHashflagProvider>
{
    _Bool _ignoreDates;
    NSDictionary *_hashflagGroupMap;
    NSString *_imageLocationPrefix;
    id <TFNTwitterFeatureSwitches> _featureSwitches;
    long long _hashflagVersion;
}

@property(nonatomic) long long hashflagVersion; // @synthesize hashflagVersion=_hashflagVersion;
@property(nonatomic) _Bool ignoreDates; // @synthesize ignoreDates=_ignoreDates;
@property(retain, nonatomic) id <TFNTwitterFeatureSwitches> featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(copy, nonatomic) NSString *imageLocationPrefix; // @synthesize imageLocationPrefix=_imageLocationPrefix;
@property(copy, nonatomic) NSDictionary *hashflagGroupMap; // @synthesize hashflagGroupMap=_hashflagGroupMap;
- (void).cxx_destruct;
- (id)hashflagForKey:(id)arg1 inGroup:(id)arg2;
- (id)hashtags;
- (id)hashflagForHashtag:(id)arg1;
- (id)initWithFeatureSwitches:(id)arg1 hashflagVersion:(long long)arg2 ignoreDates:(_Bool)arg3;
- (id)initWithFeatureSwitches:(id)arg1 hashflagVersion:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

