//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/CLSCrashReport-Protocol.h>

@class CLSInternalReport, NSDate, NSDictionary, NSString;

@interface CLSReport : NSObject <CLSCrashReport>
{
    CLSInternalReport *_internalReport;
    unsigned int _internalKVCounter;
    unsigned int _userKVCounter;
    NSString *_internalCompactedKVFile;
    NSString *_internalIncrementalKVFile;
    NSString *_userCompactedKVFile;
    NSString *_userIncrementalKVFile;
}

@property(readonly, nonatomic) CLSInternalReport *internalReport; // @synthesize internalReport=_internalReport;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userEmail;
@property(copy, nonatomic) NSString *userName;
@property(copy, nonatomic) NSString *userIdentifier;
- (void)setObjectValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool isCrash;
@property(readonly, copy, nonatomic) NSString *OSBuildVersion;
@property(readonly, copy, nonatomic) NSString *OSVersion;
@property(readonly, copy, nonatomic) NSDate *crashedOnDate;
@property(readonly, copy, nonatomic) NSDate *dateCreated;
@property(readonly, copy, nonatomic) NSString *bundleShortVersionString;
@property(readonly, copy, nonatomic) NSString *bundleVersion;
@property(readonly, copy, nonatomic) NSDictionary *customKeys;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)recordValue:(id)arg1 forUserKey:(id)arg2;
- (void)recordValue:(id)arg1 forInternalKey:(id)arg2;
- (CDStruct_4355734a)userKVStorage;
- (CDStruct_4355734a)internalKVStorage;
- (id)initWithInternalReport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
