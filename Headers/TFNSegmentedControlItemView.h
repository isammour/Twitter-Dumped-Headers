//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, NSString, UIColor, UIFont, UIImageView, UILabel, UIView;

@interface TFNSegmentedControlItemView : UIControl
{
    CALayer *_layerMask;
    UIView *_backgroundContainerView;
    _Bool _shouldUpdateTextMask;
    _Bool _subtitleVisible;
    unsigned long long _type;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    UIImageView *_backgroundView;
    UILabel *_titleLabel;
    UIImageView *_selectedBackgroundView;
    UILabel *_selectedTitlelabel;
    UILabel *_subtitleLabel;
    UILabel *_selectedSubtitleLabel;
    NSString *_title;
    NSString *_subtitle;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    double _subtitleAlpha;
}

@property(nonatomic, getter=isSubtitleVisible) _Bool subtitleVisible; // @synthesize subtitleVisible=_subtitleVisible;
@property(nonatomic) double subtitleAlpha; // @synthesize subtitleAlpha=_subtitleAlpha;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UILabel *selectedSubtitleLabel; // @synthesize selectedSubtitleLabel=_selectedSubtitleLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *selectedTitlelabel; // @synthesize selectedTitlelabel=_selectedTitlelabel;
@property(readonly, nonatomic) UIImageView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_tfnui_resizableImage:(unsigned long long)arg1 selected:(_Bool)arg2 strokeColor:(id)arg3 fillColor:(id)arg4;
- (void)_tfnui_updateImages;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)_updateTextMaskIfNeeded;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

