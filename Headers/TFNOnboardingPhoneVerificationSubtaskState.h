//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtaskState.h>

@class NSString;

@interface TFNOnboardingPhoneVerificationSubtaskState : TFNOnboardingSubtaskState
{
    _Bool _byVoice;
    NSString *_normalizedPhone;
    NSString *_code;
}

@property(nonatomic) _Bool byVoice; // @synthesize byVoice=_byVoice;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *normalizedPhone; // @synthesize normalizedPhone=_normalizedPhone;
- (void).cxx_destruct;
- (void)addStateToJSONDictionary:(id)arg1;

@end

