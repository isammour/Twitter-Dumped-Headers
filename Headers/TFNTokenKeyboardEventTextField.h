//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextField.h>

@protocol TFNTokenKeyboardEventTextFieldDelegate;

@interface TFNTokenKeyboardEventTextField : TFNTextField
{
    id <TFNTokenKeyboardEventTextFieldDelegate> _delegate;
}

@property(nonatomic) __weak id <TFNTokenKeyboardEventTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (void)deleteBackward;
- (id)initWithFrame:(struct CGRect)arg1;

@end
