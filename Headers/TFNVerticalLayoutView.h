//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIFont;
@protocol TFNVerticalLayoutViewDelegate;

@interface TFNVerticalLayoutView : UIView
{
    NSMutableArray *_arrangedSubviews;
    NSArray *_cachedSubviewRecords;
    double _cachedMaxArrangedSubviewWidth;
    _Bool _baselineRelativeSpacing;
    id <TFNVerticalLayoutViewDelegate> _delegate;
    double _spacing;
    UIFont *_defaultFontForBaselineRelativeSpacing;
}

@property(retain, nonatomic) UIFont *defaultFontForBaselineRelativeSpacing; // @synthesize defaultFontForBaselineRelativeSpacing=_defaultFontForBaselineRelativeSpacing;
@property(nonatomic, getter=isBaselineRelativeSpacing) _Bool baselineRelativeSpacing; // @synthesize baselineRelativeSpacing=_baselineRelativeSpacing;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) __weak id <TFNVerticalLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_spacingBetweenUpperSubviewRecord:(id)arg1 andLowerSubview:(id)arg2;
- (void)_makeCachedValuesIfNecessary;
- (double)_maxArrangedSubviewWidth;
- (id)_subviewRecords;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)willRemoveSubview:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews;
- (void)addArrangedSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
