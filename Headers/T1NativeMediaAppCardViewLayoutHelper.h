//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1NativeMediaAppCardViewLayoutHelper : NSObject
{
}

+ (double)mediaRatioForModel:(id)arg1;
+ (double)borderWidth;
+ (struct UIEdgeInsets)detailsEdgeInsetsForViewModel:(id)arg1 layoutType:(unsigned long long)arg2;
+ (struct UIEdgeInsets)imageEdgeInsetsForViewModel:(id)arg1 layoutType:(unsigned long long)arg2;
+ (struct CGSize)targetImageSizeForViewModel:(id)arg1 cardWidth:(double)arg2 layoutType:(unsigned long long)arg3 imageRatio:(double)arg4;
- (struct CGRect)_layoutDetailsForLayoutState:(id)arg1 viewModel:(id)arg2 layoutType:(unsigned long long)arg3 layoutMetrics:(id)arg4 detailsFullWidth:(double)arg5 atPoint:(struct CGPoint)arg6 verticallyCentered:(_Bool)arg7;
- (struct CGRect)_layoutImageForLayoutState:(id)arg1 viewModel:(id)arg2 layoutType:(unsigned long long)arg3 imageSize:(struct CGSize)arg4 atPoint:(struct CGPoint)arg5;
- (id)layoutForNativeCardViewModel:(id)arg1 layoutMetrics:(id)arg2;

@end

