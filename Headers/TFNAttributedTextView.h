//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TFNUI/TFNAttributedTextRendererDelegate-Protocol.h>
#import <TFNUI/TFNPreferredMaxLayoutWidthSizable-Protocol.h>
#import <TFNUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, T1AccessibilityProxyView, TFNActiveTextItem, TFNAttributedTextModel, TFNAttributedTextRenderer, TFNTouchDownGestureRecognizer, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TFNAttributedTextViewDelegate;

@interface TFNAttributedTextView : UIView <TFNAttributedTextRendererDelegate, UIGestureRecognizerDelegate, TFNPreferredMaxLayoutWidthSizable>
{
    TFNAttributedTextRenderer *_textRenderer;
    NSArray *_activeRanges;
    TFNTouchDownGestureRecognizer *_touchDownGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSString *_lastSelectedString;
    UIView *_firstBaselineView;
    UIView *_lastBaselineView;
    _Bool _highlighted;
    _Bool _pressed;
    _Bool _selectionPaddingEnabled;
    double _preferredMaxLayoutWidth;
    id <TFNAttributedTextViewDelegate> _delegate;
    TFNAttributedTextModel *_textModel;
    long long _verticalAlignment;
    CDUnknownBlockType _updateFontsBlock;
    T1AccessibilityProxyView *_accessibilityProxyView;
}

+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (double)selectionPadding;
@property(retain, nonatomic) T1AccessibilityProxyView *accessibilityProxyView; // @synthesize accessibilityProxyView=_accessibilityProxyView;
@property(copy, nonatomic) CDUnknownBlockType updateFontsBlock; // @synthesize updateFontsBlock=_updateFontsBlock;
@property(nonatomic) _Bool selectionPaddingEnabled; // @synthesize selectionPaddingEnabled=_selectionPaddingEnabled;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(readonly, nonatomic) TFNAttributedTextRenderer *textRenderer; // @synthesize textRenderer=_textRenderer;
@property(retain, nonatomic) TFNAttributedTextModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) __weak id <TFNAttributedTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (_Bool)private_hasAccessibleFullText;
- (_Bool)private_hasAccessibleSubranges;
- (void)_updateAccessibilityProxy;
- (unsigned long long)accessibilityTraits;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_fontSizeDidChange;
- (void)_dynamicColorsDidReload:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_longPressAction;
- (void)_tapAction;
- (void)_touchDownAction;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (void)_positionLastBaselineView;
- (void)_positionFirstBaselineView;
@property(readonly) UIView *viewForLastBaselineLayout;
@property(readonly) UIView *viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (id)activeRangesForAttributedTextRenderer:(id)arg1;
- (_Bool)_hitTestAtPoint:(struct CGPoint)arg1;
- (void)_menuWasHidden:(id)arg1;
- (void)_setupNonCodedValues;
- (void)setAttributedActiveTextModel:(id)arg1;
- (void)presentMenuController;
@property(retain, nonatomic) NSArray *activeRanges;
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;
- (id)text;
@property(retain, nonatomic) UIColor *selectionColor;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) TFNActiveTextItem *activeTextItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

