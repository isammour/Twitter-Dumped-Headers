//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNUIConfiguration-Protocol.h>

@class NSString;
@protocol TFNFontGroup;

@interface TFNTwitterUIConfiguration : NSObject <TFNUIConfiguration>
{
    _Bool _isFloatingActionButtonEnabled;
    _Bool _isCharacterLimitAnimationEnabled;
    _Bool _isSmartInvertColorsEnabled;
    _Bool _isModalSheetUIEnabled;
    _Bool _isDataViewSetNeedsDisplayEnabled;
    _Bool _isLevelAAColorsEnabled;
    long long _engagementAnimationType;
}

+ (void)configurePopoverAppearance;
+ (void)configureTFNItemsAppearance;
+ (void)configureTFNStringDataViewAdapterFonts;
+ (void)configurePullToRefreshSoundEffects;
+ (void)configureDefaultButtonStyles;
+ (void)configureDataViewCellColors;
+ (void)configureBarButtonSystemItemOverrides;
+ (void)configure;
@property(nonatomic) _Bool isLevelAAColorsEnabled; // @synthesize isLevelAAColorsEnabled=_isLevelAAColorsEnabled;
@property(readonly, nonatomic) _Bool isDataViewSetNeedsDisplayEnabled; // @synthesize isDataViewSetNeedsDisplayEnabled=_isDataViewSetNeedsDisplayEnabled;
@property(readonly, nonatomic) _Bool isModalSheetUIEnabled; // @synthesize isModalSheetUIEnabled=_isModalSheetUIEnabled;
@property(readonly, nonatomic) _Bool isSmartInvertColorsEnabled; // @synthesize isSmartInvertColorsEnabled=_isSmartInvertColorsEnabled;
@property(readonly, nonatomic) _Bool isCharacterLimitAnimationEnabled; // @synthesize isCharacterLimitAnimationEnabled=_isCharacterLimitAnimationEnabled;
@property(readonly, nonatomic) _Bool isFloatingActionButtonEnabled; // @synthesize isFloatingActionButtonEnabled=_isFloatingActionButtonEnabled;
- (void)_tfn_updateFeatureSwitchValues;
@property(readonly, nonatomic) id <TFNFontGroup> fontGroup;
@property(readonly, nonatomic) long long engagementAnimationType; // @synthesize engagementAnimationType=_engagementAnimationType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

