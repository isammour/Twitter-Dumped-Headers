//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, TFNTwitterAccount;

@interface T1DataSaverSettings : NSObject
{
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_setPreviousSettings:(id)arg1 forKey:(id)arg2;
- (id)_t1_previousSettingsForKey:(id)arg1;
- (void)_t1_displayOnboardingAlert;
- (void)_t1_updateMediaAutoplaySettingsWithDataSaverEnabled:(_Bool)arg1;
- (void)_t1_updateVideoQualitySettingsWithDataSaverEnabled:(_Bool)arg1;
- (void)_t1_updateImageQualitySettingsWithDataSaverEnabled:(_Bool)arg1;
@property(nonatomic) _Bool hasDisplayedOnboardingAlert;
@property(retain, nonatomic) NSNumber *previousMediaAutoplaySettings;
@property(retain, nonatomic) NSNumber *previousVideoQualitySettings;
@property(retain, nonatomic) NSNumber *previousImageQualitySettings;
- (void)setDataSaverEnabled:(_Bool)arg1 showOnboardingPromptIfNeeded:(_Bool)arg2;
@property(nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

