//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNButton.h>

@class UILongPressGestureRecognizer;

@interface T1NativeCardClassicButton : TFNButton
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id _longPressTarget;
    SEL _longPressAction;
}

+ (struct CGSize)defaultButtonSizeWithText:(id)arg1;
+ (id)defaultButton;
+ (struct UIEdgeInsets)buttonContentEdgeInset;
+ (unsigned long long)buttonPresentation;
+ (unsigned long long)buttonVariant;
+ (unsigned long long)buttonStrength;
+ (unsigned long long)buttonSize;
- (void).cxx_destruct;
- (void)_didLongPress:(id)arg1;
- (void)_loadLongPressGestureRecognizer;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)setFixedWidth:(double)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;

@end

