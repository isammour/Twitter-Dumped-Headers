//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVTooltipLayoutSpec : NSObject
{
}

+ (CDStruct_fce13249)CalculateTooltipPositionRelativeToPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 isUpsideDown:(_Bool)arg3 tooltipSize:(struct CGSize)arg4 arrowSize:(struct CGSize)arg5;
+ (CDStruct_fce13249)SelectMaxTooltipFrameRelativeToPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 arrowSize:(struct CGSize)arg3 tooltipSize:(struct CGSize)arg4;
+ (CDStruct_fce13249)CalculateMaxTooltipFrameRelativeToPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 arrowSize:(struct CGSize)arg3 arrowPosition:(unsigned long long)arg4;
+ (double)OffsetForArrowPosition:(unsigned long long)arg1;
+ (struct CGRect)ContainerFrameWithArrowSize:(struct CGSize)arg1 IsUpsideDown:(_Bool)arg2 SuperviewSize:(struct CGSize)arg3;
+ (struct CGRect)ArrowFrame:(struct CGSize)arg1 WithPosition:(unsigned long long)arg2 IsUpsideDown:(_Bool)arg3 SuperviewSize:(struct CGSize)arg4;
+ (struct CGRect)LabelFrameWithArrowSize:(struct CGSize)arg1 ArrowPosition:(unsigned long long)arg2 IsUpsideDown:(_Bool)arg3 SuperviewSize:(struct CGSize)arg4;
+ (id)LabelAttributed:(id)arg1;
+ (struct CGSize)LabelSize:(id)arg1 MaxTooltipWidth:(double)arg2;
+ (id)LabelFont;
+ (struct CGSize)SizeThatFits:(struct CGSize)arg1 ArrowSize:(struct CGSize)arg2;
+ (struct UIEdgeInsets)ContentInsets;

@end

