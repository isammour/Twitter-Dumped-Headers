//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterLoginVerificationEnrollment : NSObject
{
    _Bool _enrolledElsewhere;
    unsigned long long _enrolled;
}

+ (id)loginVerificationEnrollmentWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isEnrolledElsewhere) _Bool enrolledElsewhere; // @synthesize enrolledElsewhere=_enrolledElsewhere;
@property(readonly, nonatomic) unsigned long long enrolled; // @synthesize enrolled=_enrolled;
- (unsigned long long)_verificationModeWithString:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

