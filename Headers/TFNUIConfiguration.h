//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/NSCopying-Protocol.h>
#import <TFNUI/TFNUIConfiguration-Protocol.h>

@class NSString;
@protocol TFNFontGroup, TFNUIConfiguration;

@interface TFNUIConfiguration : NSObject <TFNUIConfiguration, NSCopying>
{
    id <TFNUIConfiguration> _storedConfiguration;
    id <TFNFontGroup> _fontGroup;
}

+ (id)_tfnui_queue;
+ (void)setUpWithConfiguration:(id)arg1;
+ (id)currentConfiguration;
@property(retain, nonatomic) id <TFNFontGroup> fontGroup; // @synthesize fontGroup=_fontGroup;
@property(retain, nonatomic) id <TFNUIConfiguration> storedConfiguration; // @synthesize storedConfiguration=_storedConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDataViewSetNeedsDisplayEnabled;
@property(readonly, nonatomic) _Bool isModalSheetUIEnabled;
@property(readonly, nonatomic) _Bool isSmartInvertColorsEnabled;
@property(readonly, nonatomic) _Bool isCharacterLimitAnimationEnabled;
@property(readonly, nonatomic) _Bool isFloatingActionButtonEnabled;
@property(readonly, nonatomic) long long engagementAnimationType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

