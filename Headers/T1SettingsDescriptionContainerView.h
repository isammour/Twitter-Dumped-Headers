//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, T1SettingsDescriptionItem, TFNAttributedTextView;

@interface T1SettingsDescriptionContainerView : UIView
{
    NSAttributedString *_displayText;
    TFNAttributedTextView *_textView;
    T1SettingsDescriptionItem *_item;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)private_setTextViewDelegate:(id)arg1;
- (void)private_setText:(id)arg1 linkRanges:(id)arg2;
- (void)setItem:(id)arg1 forController:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

@end

