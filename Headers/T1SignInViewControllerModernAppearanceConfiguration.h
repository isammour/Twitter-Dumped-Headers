//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface T1SignInViewControllerModernAppearanceConfiguration : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_usernameHint;
    NSString *_passwordHint;
    NSString *_signInButtonTitle;
    NSString *_forgotPasswordText;
    NSArray *_forgotPasswordActiveRanges;
    NSString *_cancelLabel;
}

@property(copy, nonatomic) NSString *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(copy, nonatomic) NSArray *forgotPasswordActiveRanges; // @synthesize forgotPasswordActiveRanges=_forgotPasswordActiveRanges;
@property(copy, nonatomic) NSString *forgotPasswordText; // @synthesize forgotPasswordText=_forgotPasswordText;
@property(copy, nonatomic) NSString *signInButtonTitle; // @synthesize signInButtonTitle=_signInButtonTitle;
@property(copy, nonatomic) NSString *passwordHint; // @synthesize passwordHint=_passwordHint;
@property(copy, nonatomic) NSString *usernameHint; // @synthesize usernameHint=_usernameHint;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
