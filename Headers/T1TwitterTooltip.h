//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTooltip.h>

@class NSString, TFNButton, TFNTextTooltipContentView, UIColor, UIFont;

@interface T1TwitterTooltip : TFNTooltip
{
    TFNTextTooltipContentView *_textContentView;
}

+ (id)tooltipWithText:(id)arg1 delegate:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 tapAnywhereToDismiss:(_Bool)arg4;
+ (id)tooltipWithText:(id)arg1 delegate:(id)arg2 permittedArrowDirections:(unsigned long long)arg3;
+ (id)tooltipWithText:(id)arg1 delegate:(id)arg2;
+ (id)tooltipWithText:(id)arg1;
@property(retain, nonatomic) TFNTextTooltipContentView *textContentView; // @synthesize textContentView=_textContentView;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNButton *button;
@property(retain, nonatomic) UIFont *labelFont;
@property(retain, nonatomic) UIColor *labelColor;
@property(copy, nonatomic) NSString *buttonText;
@property(copy, nonatomic) NSString *labelText;
@property(nonatomic) _Bool shouldCenterLabel;
- (id)init;

@end

