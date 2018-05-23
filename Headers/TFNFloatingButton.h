//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <TFNUI/TFNHapticFeedback-Protocol.h>
#import <TFNUI/TPXDecayAnimation2DObserver-Protocol.h>
#import <TFNUI/TPXSpringAnimation2DObserver-Protocol.h>

@class NSString, TPXDecayAnimator2D, TPXSpringAnimator, TPXSpringAnimator2D, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UITapGestureRecognizer;
@protocol TFNFloatingButtonDelegate;

@interface TFNFloatingButton : UIButton <TPXSpringAnimation2DObserver, TPXDecayAnimation2DObserver, TFNHapticFeedback>
{
    struct CGRect _keyboardRect;
    struct CGPoint _startCenter;
    _Bool _canActivate;
    TPXSpringAnimator2D *_centerPositionSpring;
    TPXDecayAnimator2D *_decayAnimator;
    TPXSpringAnimator *_scaleSpring;
    struct CGPoint _touchVelocity;
    double _lastTouchEventTimestamp;
    NSString *_autosavingKey;
    struct CGPoint _normalizedPosition;
    double _absoluteTranslation;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _centerStored;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    id <TFNFloatingButtonDelegate> _delegate;
    CDUnknownBlockType _wasHitCallback;
    NSString *_autoSavingPositionIdentifier;
    struct CGPoint _storedCenter;
}

+ (void)setHapticFeedbackEnabled:(_Bool)arg1;
+ (_Bool)isHapticFeedbackEnabled;
@property(readonly, nonatomic) struct CGPoint storedCenter; // @synthesize storedCenter=_storedCenter;
@property(nonatomic, getter=isCenterStored) _Bool centerStored; // @synthesize centerStored=_centerStored;
@property(copy, nonatomic) NSString *autoSavingPositionIdentifier; // @synthesize autoSavingPositionIdentifier=_autoSavingPositionIdentifier;
@property(copy, nonatomic) CDUnknownBlockType wasHitCallback; // @synthesize wasHitCallback=_wasHitCallback;
@property(nonatomic) __weak id <TFNFloatingButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
- (void).cxx_destruct;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
- (_Bool)tfn_dashGestureEnabled;
- (void)stopAnimations;
- (void)tpx_animationDidStop:(id)arg1;
- (void)tpx_animationDidUpdate:(id)arg1;
- (struct CGPoint)constrainCenterPoint:(struct CGPoint)arg1;
- (struct CGRect)validButtonArea;
- (struct CGRect)greatestAreaSubRectOfRect:(struct CGRect)arg1 excludingRect:(struct CGRect)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)finishedMoving;
- (void)finishedTouching;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_orientationDidChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_t1_tapGestureAction:(id)arg1;
- (void)_t1_configureHapticFeedback;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_init;
- (void)wasHit;
- (void)didFinishMoving;
- (void)didMoveToSuperview;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end
