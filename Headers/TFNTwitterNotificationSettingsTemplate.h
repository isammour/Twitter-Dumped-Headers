//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TFNTwitterNotificationSettingsTemplateEntry;

@interface TFNTwitterNotificationSettingsTemplate : NSObject
{
    NSString *_checksum;
    NSString *_version;
    NSString *_language;
    NSString *_descriptionText;
    NSArray *_sections;
    NSDictionary *_jsonDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
- (void).cxx_destruct;
- (_Bool)isEqualToSettingsTemplate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)containsSettingIdentifiers:(id)arg1;
@property(readonly, nonatomic) TFNTwitterNotificationSettingsTemplateEntry *masterSwitch;
@property(readonly, copy, nonatomic) NSArray *entries;
- (id)description;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

