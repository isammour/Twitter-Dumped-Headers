//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNOnboardingRichText, TFNOnboardingSettingsValueActionData, TFNOnboardingSettingsValueBooleanData, TFNOnboardingSettingsValueListData, TFNOnboardingSettingsValueSettingsGroupData;

@interface TFNOnboardingSettingsValue : NSObject
{
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    NSString *_identifier;
    long long _type;
    TFNOnboardingSettingsValueBooleanData *_booleanData;
    TFNOnboardingSettingsValueListData *_listData;
    TFNOnboardingSettingsValueActionData *_actionData;
    TFNOnboardingSettingsValueSettingsGroupData *_settingsGroupData;
}

+ (long long)private_settingsTypeForTypeString:(id)arg1;
@property(readonly, nonatomic) TFNOnboardingSettingsValueSettingsGroupData *settingsGroupData; // @synthesize settingsGroupData=_settingsGroupData;
@property(readonly, nonatomic) TFNOnboardingSettingsValueActionData *actionData; // @synthesize actionData=_actionData;
@property(readonly, nonatomic) TFNOnboardingSettingsValueListData *listData; // @synthesize listData=_listData;
@property(readonly, nonatomic) TFNOnboardingSettingsValueBooleanData *booleanData; // @synthesize booleanData=_booleanData;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (_Bool)private_requiresValueData;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

