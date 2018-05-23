//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVShareSheetLayoutSpec : NSObject
{
}

+ (id)ShareItemTitleTextColor;
+ (id)ShareItemTitleFont;
+ (struct CGRect)ShareLabelFrameWithAttributedText:(id)arg1 SuperViewSize:(struct CGSize)arg2;
+ (id)ShareItemShareStringTextColor;
+ (id)ShareItemShareStringFont;
+ (struct CGRect)IconSelectedBackgroundFrameWithIconFrame:(struct CGRect)arg1;
+ (id)ShareSheetItemSelectedBackgroundImage;
+ (struct CGRect)IconFrameIsPresented:(_Bool)arg1 SuperViewSize:(struct CGSize)arg2;
+ (double)ShareSheetHorizontalPadding;
+ (double)ShareSheetVerticalPadding;
+ (struct CGRect)DismissButtonFrameWithItemHeight:(double)arg1 ButtonSize:(struct CGSize)arg2;
+ (struct CGRect)ScrollViewFrameWithItemHeight:(double)arg1 SuperViewWidth:(double)arg2;
+ (struct CGRect)ShareItemFrameForIndex:(unsigned long long)arg1 AllItemCount:(unsigned long long)arg2 ItemSize:(struct CGSize)arg3 SuperViewWidth:(double)arg4;
+ (double)StartingXForShareSheetItemsWithItemCount:(unsigned long long)arg1 SuperViewWidth:(double)arg2;
+ (double)WidthForAllShareSheetItemsWithCount:(unsigned long long)arg1;
+ (double)HorizontalSpacingBetweenShareSheetItems;
+ (double)ShareSheetItemWidth;

@end
