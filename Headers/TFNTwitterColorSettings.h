//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, TFNTwitterColorPaletteSettingInfo;

@interface TFNTwitterColorSettings : NSObject
{
    NSString *_colorPaletteNameUserDefaultsKey;
    NSArray *_availableColorPalettes;
    NSString *_highContrastUserDefaultsKey;
}

+ (id)sharedSettings;
@property(copy, nonatomic) NSString *highContrastUserDefaultsKey; // @synthesize highContrastUserDefaultsKey=_highContrastUserDefaultsKey;
@property(copy, nonatomic) NSArray *availableColorPalettes; // @synthesize availableColorPalettes=_availableColorPalettes;
@property(copy, nonatomic) NSString *colorPaletteNameUserDefaultsKey; // @synthesize colorPaletteNameUserDefaultsKey=_colorPaletteNameUserDefaultsKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *userHighContrastSetting;
@property(readonly, nonatomic) _Bool currentHighContrastSetting;
- (void)applyCurrentColorPalette;
- (id)colorPalettePassingTest:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) TFNTwitterColorPaletteSettingInfo *currentColorPalette;
- (id)init;

@end

