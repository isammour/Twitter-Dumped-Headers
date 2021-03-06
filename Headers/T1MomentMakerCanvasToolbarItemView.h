//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, TFNSpacerView, TFNTouchDownGestureRecognizer, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;

@interface T1MomentMakerCanvasToolbarItemView : UIView
{
    _Bool _enabled;
    _Bool _circleOutlineEnabled;
    _Bool _hidesLabel;
    CDUnknownBlockType _tapAction;
    NSString *_title;
    NSString *_imageName;
    UIStackView *_stackView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    TFNSpacerView *_midSpacerView;
    TFNTouchDownGestureRecognizer *_pressDownGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CAShapeLayer *_circleLayer;
}

@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TFNTouchDownGestureRecognizer *pressDownGestureRecognizer; // @synthesize pressDownGestureRecognizer=_pressDownGestureRecognizer;
@property(retain, nonatomic) TFNSpacerView *midSpacerView; // @synthesize midSpacerView=_midSpacerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hidesLabel; // @synthesize hidesLabel=_hidesLabel;
@property(nonatomic) _Bool circleOutlineEnabled; // @synthesize circleOutlineEnabled=_circleOutlineEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)_didPress:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 iconSize:(long long)arg3;

@end

