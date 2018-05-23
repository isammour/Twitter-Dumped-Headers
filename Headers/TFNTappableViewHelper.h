//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TFNTouchDownGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol TFNTappableView;

@interface TFNTappableViewHelper : NSObject <UIGestureRecognizerDelegate>
{
    UIView<TFNTappableView> *_view;
    id _tapTarget;
    SEL _tapAction;
    id _longPressTarget;
    SEL _longPressAction;
    id _pressedStateDidChangeTarget;
    SEL _pressedStateDidChangeAction;
    _Bool _hasSetUserInteractionEnabled;
    _Bool _hasSetAccessibility;
    SEL _invokingViewSelector;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    TFNTouchDownGestureRecognizer *_touchDownGestureRecognizer;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_longPressAction;
- (void)_tapAction;
- (void)_touchDownAction;
- (void)_updateTouchDownGestureRecognizer;
- (void)_updateUserInteractionEnabled;
- (void)setPressedStateDidChangeTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer; // @synthesize touchDownGestureRecognizer=_touchDownGestureRecognizer;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void)setTapTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)dealloc;
- (id)init;
- (id)initWithTappableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

