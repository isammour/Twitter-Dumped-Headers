//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNChartView.h>

@class NSArray, TFNHoverBarValueView;
@protocol TFNBarChartViewDataSource, TFNBarChartViewDelegate;

@interface TFNBarChartView : TFNChartView
{
    TFNHoverBarValueView *_barValueView;
    NSArray *_barViews;
}

+ (id)new;
@property(retain, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(retain, nonatomic) TFNHoverBarValueView *barValueView; // @synthesize barValueView=_barValueView;
- (void).cxx_destruct;
- (void)tfnui_hideValueLabel;
- (void)tfnui_placeBarValueViewAtIndex:(unsigned long long)arg1 valueText:(id)arg2;
- (void)tfnui_unHighlightAllBars;
- (void)tfnui_highlightBarAtIndex:(unsigned long long)arg1;
- (id)tfnui_colorForBarViewAtIndex:(unsigned long long)arg1;
- (struct CGRect)tfnui_barViewFrameAtIndex:(unsigned long long)arg1;
- (double)tfnui_calculateMaxBarHeight;
- (void)clearView;
- (void)handleDeselect;
- (void)handleSelectAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDataPoints;
@property(readonly, nonatomic) _Bool shouldShowZeroValues;
@property(readonly, nonatomic) struct CGSize minimumBarValueViewSize;
@property(readonly, nonatomic) double barValueViewHeight;
@property(readonly, nonatomic) _Bool shouldShowBarValueView;
@property(readonly, nonatomic) double paddingWidth;
@property(readonly, nonatomic) double barWidth;
- (void)reloadData:(_Bool)arg1;
- (void)layoutSubviews;
- (void)commonBarChartInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <TFNBarChartViewDataSource> dataSource; // @dynamic dataSource;
@property(nonatomic) __weak id <TFNBarChartViewDelegate> delegate; // @dynamic delegate;

@end

