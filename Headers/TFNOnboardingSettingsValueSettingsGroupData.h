//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TFNOnboardingSettingsValueSettingsGroupData : NSObject
{
    NSArray *_settings;
    NSArray *_statusTextQuantityPairs;
}

+ (id)private_settingsGroupForSettingsGroupDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *statusTextQuantityPairs; // @synthesize statusTextQuantityPairs=_statusTextQuantityPairs;
@property(readonly, nonatomic) NSArray *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

