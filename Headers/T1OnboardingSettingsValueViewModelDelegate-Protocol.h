//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, T1OnboardingSettingsValueViewModel, TFNOnboardingNavigationLink, TFNOnboardingSettingsValue;

@protocol T1OnboardingSettingsValueViewModelDelegate <NSObject>
- (void)onboardingSettingsValueViewModel:(T1OnboardingSettingsValueViewModel *)arg1 didChangeForSettingsValue:(TFNOnboardingSettingsValue *)arg2;

@optional
- (void)onboardingSettingsValueViewModel:(T1OnboardingSettingsValueViewModel *)arg1 didSelectSettingsList:(NSArray *)arg2 forSettingsValue:(TFNOnboardingSettingsValue *)arg3;
- (void)onboardingSettingsValueViewModel:(T1OnboardingSettingsValueViewModel *)arg1 didSelectActionLink:(TFNOnboardingNavigationLink *)arg2;
@end

