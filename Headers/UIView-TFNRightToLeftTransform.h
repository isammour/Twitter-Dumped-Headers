//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TFNRightToLeftTransform)
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (_Bool)tfn_isRightToLeftTransformActive;
+ (void)tfn_activateRightToLeftTransform;
- (void)tfn_private_appendRightToLeftTransformInfo:(id)arg1;
- (id)tfn_rightToLeftTransformDebugString;
@property(readonly, nonatomic) _Bool tfn_isFlippedForRightToLeftTransform;
@property(nonatomic) _Bool tfn_shouldFlipForRightToLeftTransform;
- (id)tfn_private_shouldFlipForSemanticContentAttribute;
- (void)tfn_private_removeReverseRightToLeftTransform;
- (void)tfn_private_addReverseRightToLeftTransform;
- (void)tfn_private_removeRightToLeftTransform:(_Bool)arg1;
- (void)tfn_private_addRightToLeftTransform:(_Bool)arg1;
@property(nonatomic) _Bool tfn_applyRightToLeftTransform;
@end
