//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1SignUpFormViewController.h>

#import <T1Twitter/T1VerifyPINFormDelegate-Protocol.h>

@class NSString;
@protocol T1VerifyPhoneViewControllerDelegate;

@interface T1VerifyPhoneViewController : T1SignUpFormViewController <T1VerifyPINFormDelegate>
{
    _Bool _forSignUp;
    NSString *_phoneNumber;
    id <T1VerifyPhoneViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <T1VerifyPhoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)verifyPINFormShouldSubmit:(id)arg1;
- (void)_didNotReceiveSMS:(id)arg1;
- (void)submitForm;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)initWithPhoneNumber:(id)arg1 SMSNotificationsEnabled:(_Bool)arg2 forSignUp:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

