//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtaskState.h>

#import <T1Twitter/NSCopying-Protocol.h>

@interface TFNOnboardingPrivacyOptionsSubtaskState : TFNOnboardingSubtaskState <NSCopying>
{
    _Bool _discoverableByEmail;
    _Bool _discoverableByPhone;
}

@property(nonatomic) _Bool discoverableByPhone; // @synthesize discoverableByPhone=_discoverableByPhone;
@property(nonatomic) _Bool discoverableByEmail; // @synthesize discoverableByEmail=_discoverableByEmail;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addStateToJSONDictionary:(id)arg1;

@end

