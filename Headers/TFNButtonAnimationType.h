//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNButtonAnimationType : NSObject
{
    CDUnknownBlockType _animationBlock;
}

+ (id)animationTypeWithImageSequenceConfiguration:(id)arg1;
+ (id)imageScaleUpDownAnimationType;
+ (id)crossFadeAnimationType;
@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
- (void).cxx_destruct;
- (id)initWithAnimationBlock:(CDUnknownBlockType)arg1;

@end

