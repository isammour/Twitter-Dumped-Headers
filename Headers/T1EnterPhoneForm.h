//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1AddPhoneNumberForm.h>

#import <T1Twitter/T1SignUpFormFieldPhoneFieldDelegate-Protocol.h>

@class NSString, T1SignUpFormField;

@interface T1EnterPhoneForm : T1AddPhoneNumberForm <T1SignUpFormFieldPhoneFieldDelegate>
{
    _Bool _forSignUp;
    NSString *_normalizedPhoneNumber;
    T1SignUpFormField *_phoneField;
}

@property(copy, nonatomic) T1SignUpFormField *phoneField; // @synthesize phoneField=_phoneField;
@property(copy, nonatomic) NSString *normalizedPhoneNumber; // @synthesize normalizedPhoneNumber=_normalizedPhoneNumber;
@property(readonly, nonatomic) _Bool forSignUp; // @synthesize forSignUp=_forSignUp;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
- (id)simCountryCode;
- (id)sections;
- (id)initForPhoneAssociation:(_Bool)arg1 emphasized:(_Bool)arg2 phoneNumberFormatter:(id)arg3;
- (id)initForPhoneAssociation:(_Bool)arg1 emphasized:(_Bool)arg2 phoneNumberFormatter:(id)arg3 forSignUp:(_Bool)arg4;

@end

