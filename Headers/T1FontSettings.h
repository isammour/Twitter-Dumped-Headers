//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1FontSettings : NSObject
{
}

+ (double)_fontSizeForContentCategory:(id)arg1 withModifier:(long long)arg2;
+ (id)_currentContentSizeCategory;
+ (id)_defaultContentSizeCategory;
+ (int)_windowSizeTypeForSmallestWindowDimension:(double)arg1;
+ (int)_windowSizeType;
+ (void)_prepareChangeObserversForWindow:(id)arg1;
+ (void)_fontSizeSettingsDidChange;
+ (double)_effectiveFontSizeFromCategory:(id)arg1 contentSizeCategoryMap:(id)arg2 minFontSize:(double)arg3 maxFontSize:(double)arg4 modifier:(long long)arg5;
+ (void)_setEffectiveFontSizeFromCategory:(id)arg1 modifier:(long long)arg2;
+ (id)_contentSizeCategoryMapForMinFontSize:(double)arg1;
+ (_Bool)_updateStaticStateForWindow:(id)arg1;
+ (void)_initializeWithWindow:(id)arg1;
+ (double)currentFontSizeWithContentSizeModifier:(_Bool)arg1;
+ (void)setCurrentContentSizeModifier:(long long)arg1;
+ (long long)currentContentSizeModifier;
+ (double)defaultFontSize;
+ (double)currentFontSize;
+ (double)scaleFromDefaultFontSize:(double)arg1;
+ (double)scaleOfCurrentFontSizeFromDefaultFontSize;
+ (void)initializeSettingsWithWindow:(id)arg1;
+ (double)fontSizeForWindowSize:(struct CGSize)arg1;
+ (double)_maxFontSizeForWindowSizeType:(int)arg1;
+ (double)maxFontSize;
+ (double)_minFontSizeForWindowSizeType:(int)arg1;
+ (double)minFontSize;

@end
