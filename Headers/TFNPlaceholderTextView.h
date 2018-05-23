//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextView.h>

@class NSString, UIColor, UILabel;

@interface TFNPlaceholderTextView : TFNTextView
{
    NSString *_placeholderText;
    UIColor *_placeholderTextColor;
    UILabel *_placeholderTextLabel;
}

@property(readonly, nonatomic) UILabel *placeholderTextLabel; // @synthesize placeholderTextLabel=_placeholderTextLabel;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)_tfn_private_textDidChange;
- (void)_tfn_notification_textViewTextDidChange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;
- (void)_tfn_private_updatePlaceholderTextLabel;
- (void)encodeWithCoder:(id)arg1;
- (void)_tfn_placeholderTextView_initialize;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
