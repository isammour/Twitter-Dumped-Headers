//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, TFNRichTextView, UIColor;
@protocol TFNRichTextContainerViewDelegate, TFSActiveTextRange;

@interface TFNRichTextContainerView : UIView
{
    NSAttributedString *_attributedString;
    NSArray *_activeRanges;
    id <TFSActiveTextRange> _selectedActiveRange;
    id <TFNRichTextContainerViewDelegate> _delegate;
    UIColor *_selectionColor;
    TFNRichTextView *_textView;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) TFNRichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(nonatomic) __weak id <TFNRichTextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <TFSActiveTextRange> selectedActiveRange; // @synthesize selectedActiveRange=_selectedActiveRange;
@property(copy, nonatomic) NSArray *activeRanges; // @synthesize activeRanges=_activeRanges;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (void)tfn_showMenuForCharacterRange:(struct _NSRange)arg1;
- (void)tfn_selectCharacterRange:(struct _NSRange)arg1;
- (struct CGRect)tfn_boundingRectForSelectedActiveRange;
- (void)setAccessibilityLabel:(id)arg1;
- (void)_tfn_didMuteSelectedText:(id)arg1;
- (void)_tfn_didSearchSelectedText:(id)arg1;
- (void)_tfn_didLongPressActiveRange:(id)arg1;
- (void)_tfn_didTapActiveRange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
