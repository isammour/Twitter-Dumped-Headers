//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtaskState.h>

@class NSDate, NSString;

@interface TFNOnboardingSignUpSubtaskState : TFNOnboardingSubtaskState
{
    NSString *_name;
    NSString *_phone;
    NSString *_email;
    NSDate *_birthday;
    NSString *_jsInstrumentationResponse;
}

@property(copy, nonatomic) NSString *jsInstrumentationResponse; // @synthesize jsInstrumentationResponse=_jsInstrumentationResponse;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)addStateToJSONDictionary:(id)arg1;

@end

