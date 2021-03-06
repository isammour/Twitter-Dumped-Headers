//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormBaseCell.h>

#import <T1Twitter/UIPickerViewDelegate-Protocol.h>
#import <T1Twitter/UITextFieldDelegate-Protocol.h>
#import <T1Twitter/UITextViewDelegate-Protocol.h>

@class CAShapeLayer, NSString, TFNFormField, TFNFormFieldErrorView, TFNFormFieldSupplementaryTextView, TFNFormMultiLineTextField, TFNFormTextField, TFNTextTooltipContentView, TFNTooltip, UIImageView, UITapGestureRecognizer, UIView;
@protocol TFNFormFieldCellDelegate, TFNFormTextInput;

@interface TFNFormFieldCell : TFNFormBaseCell <UITextFieldDelegate, UITextViewDelegate, UIPickerViewDelegate>
{
    NSString *_previousErrorMessage;
    _Bool _showingError;
    UIImageView *_disclosureView;
    id <TFNFormFieldCellDelegate> _delegate;
    TFNFormTextField *_singleLineTextField;
    TFNFormMultiLineTextField *_multiLineTextField;
    UITapGestureRecognizer *_textFieldFocusGestureRecognizer;
    TFNTextTooltipContentView *_tooltipContentView;
    TFNTooltip *_tooltip;
    double _proposedTitleWidth;
    TFNFormFieldSupplementaryTextView *_supplementaryTextView;
    TFNFormFieldErrorView *_errorView;
    CAShapeLayer *_arrowLayer;
}

+ (double)private_heightForStackedTitle;
+ (_Bool)private_hasStackedTitleForFormField:(id)arg1;
+ (Class)private_textFieldClassForMultiline:(_Bool)arg1;
+ (double)combiningWidthForFormField:(id)arg1 containerWidth:(double)arg2 layoutMetrics:(id)arg3;
+ (double)errorArrowOffsetWithLayoutMetrics:(id)arg1;
+ (double)titleWidthForFormField:(id)arg1;
+ (double)_heightForFormField:(id)arg1 withWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4 permanentContentOnly:(_Bool)arg5;
+ (double)heightForFormField:(id)arg1 withWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4;
+ (id)formViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 initialization:(CDUnknownBlockType)arg6;
@property(nonatomic, getter=isShowingError) _Bool showingError; // @synthesize showingError=_showingError;
@property(readonly, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(readonly, nonatomic) TFNFormFieldErrorView *errorView; // @synthesize errorView=_errorView;
@property(readonly, nonatomic) TFNFormFieldSupplementaryTextView *supplementaryTextView; // @synthesize supplementaryTextView=_supplementaryTextView;
@property(nonatomic) double proposedTitleWidth; // @synthesize proposedTitleWidth=_proposedTitleWidth;
@property(retain, nonatomic) TFNTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) TFNTextTooltipContentView *tooltipContentView; // @synthesize tooltipContentView=_tooltipContentView;
@property(retain, nonatomic) UITapGestureRecognizer *textFieldFocusGestureRecognizer; // @synthesize textFieldFocusGestureRecognizer=_textFieldFocusGestureRecognizer;
@property(retain, nonatomic) TFNFormMultiLineTextField *multiLineTextField; // @synthesize multiLineTextField=_multiLineTextField;
@property(retain, nonatomic) TFNFormTextField *singleLineTextField; // @synthesize singleLineTextField=_singleLineTextField;
@property(nonatomic) __weak id <TFNFormFieldCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setSectionBreaks:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)private_baseAccessibilityLabel;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)private_announceInvalidInput;
- (void)_layoutArrowLayerWithMetrics:(id)arg1;
- (void)_layoutErrorViewWithMetrics:(id)arg1;
- (void)layoutAccessoryViewWithMetrics:(id)arg1;
- (void)layoutContentWithMetrics:(id)arg1;
- (void)_animateErrorViewMaskToShowError:(_Bool)arg1;
- (void)_animateToShowError:(_Bool)arg1;
- (_Bool)private_usesDatePickerInputView;
- (_Bool)private_shouldShowSupplementaryTextView;
- (void)private_prepareErrorViewForWarning:(_Bool)arg1;
- (void)private_prepareTooltipForWarning:(_Bool)arg1;
- (id)private_backgroundColorForWarning:(_Bool)arg1;
- (void)_addErrorViewMaskWithVisibleHeight:(double)arg1 layoutMetrics:(id)arg2 replaceIfExists:(_Bool)arg3;
- (void)_dependedOnFormFieldInputDidChange;
- (void)_shouldSuggestUserInput;
- (void)_userInputDidUpdate;
- (void)_updateSupplementaryTextViewVisibilityAnimated:(_Bool)arg1;
- (void)_textDidChangeForTextField:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
@property(nonatomic) struct _NSRange selectedNSRange;
- (void)replaceNSRange:(struct _NSRange)arg1 withText:(id)arg2;
- (void)_formFieldDidUpdateValidity:(id)arg1;
- (id)disclosureView;
- (_Bool)combinesWithNextCell;
@property(readonly, nonatomic) _Bool shouldHighlightWhileEditing;
- (_Bool)canHighlight;
@property(readonly, nonatomic) _Bool hasInlineTitle;
- (double)titleWidthForContentWidth:(double)arg1;
@property(readonly, nonatomic) UIView<TFNFormTextInput> *textField;
- (void)setFormItem:(id)arg1;
@property(readonly, nonatomic) TFNFormField *formField;
- (void)setAppearance:(id)arg1;
- (double)heightOfPermanentContentForLayoutMetrics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

