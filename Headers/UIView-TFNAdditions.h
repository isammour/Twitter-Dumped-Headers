//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIViewController;

@interface UIView (TFNAdditions)
+ (struct UIEdgeInsets)tfn_systemSafeAreaInsetsForInterfaceOrientation:(long long)arg1 withStatusBarHidden:(_Bool)arg2;
+ (void)tfn_addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 curve:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4;
+ (void)tfn_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 delay:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)tfn_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)tfn_animateWithDuration:(double)arg1 curve:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)tfn_addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(CDUnknownBlockType)arg3;
+ (void)tfn_animateWithDuration:(double)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)tfn_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)tfn_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)tfn_performWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)tfn_updateAccessibilityIgnoresInvertColorsOnViewTree;
@property(nonatomic) _Bool tfn_accessibilityIgnoresInvertColors;
@property(readonly, nonatomic) NSArray *tfn_ancestry;
- (id)tfn_centerEmbedInStackViewWithAxis:(long long)arg1;
- (id)tfn_centerEmbedInStackViewWithAxis:(long long)arg1 distribution:(long long)arg2;
- (void)tfn_setCompressionResistanceAndHuggingRequired;
- (void)tfn_addFullSizeSubview:(id)arg1;
- (void)tfn_addAutoLayoutSubview:(id)arg1;
- (struct CGRect)_tfn_systemSafeAreaWithStatusBarHidden:(_Bool)arg1 getWindow:(out id *)arg2;
- (struct CGRect)tfn_expandRect:(struct CGRect)arg1 toFillAdjacentSystemSafeArea:(unsigned long long)arg2;
- (struct UIEdgeInsets)tfn_systemSafeAreaInsetsWithStatusBarHidden:(_Bool)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets tfn_systemSafeAreaInsets;
@property(nonatomic) _Bool tfn_insetsLayoutMarginsFromSafeArea;
@property(readonly, nonatomic) _Bool tfn_dashGestureEnabled;
@property(readonly, nonatomic) _Bool tfn_navigationControllerBackGestureEnabled;
- (void)tfn_flipSelfAndCorrectChildrenIfRTL;
- (void)tfn_flipXAxisIfRTL;
- (_Bool)tfn_isInvisible;
- (id)_tfn_blurEffectView;
- (void)_tfn_discardBlur;
- (id)_tfn_createBlurWithStyle:(long long)arg1;
@property(nonatomic) long long tfn_blurStyle;
@property(nonatomic) double tfn_blur;
- (id)tfn_snapshotAfterAnimations;
- (id)tfn_snapshot;
- (id)tfn_snapshotAfterScreenUpdates:(_Bool)arg1;
- (_Bool)tfn_isInViewHierarchyAndViewFrameContainsPoint:(struct CGPoint)arg1;
- (_Bool)tfn_isInPopover;
- (id)tfn_firstViewOfClass:(Class)arg1;
- (void)tfn_applyOnViewTree:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIViewController *tfn_viewController;
- (void)tfn_animateBounce;
- (void)tfn_updateBoundsToSizeThatFits:(struct CGSize)arg1;
@property(nonatomic) struct CGRect tfn_frameFromCenterAndBounds;
@end
