//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormDelegate-Protocol.h>

@class T1CombinedSignUpForm, TFNFormField;

@protocol T1CombinedSignUpFormDelegate <TFNFormDelegate>
- (void)submitCombinedSignUpForm:(T1CombinedSignUpForm *)arg1;

@optional
- (void)combinedSignUpForm:(T1CombinedSignUpForm *)arg1 toolbarItemsDidChangeForFormField:(TFNFormField *)arg2;
- (void)combinedSignUpForm:(T1CombinedSignUpForm *)arg1 focusOnFormField:(TFNFormField *)arg2;
@end

