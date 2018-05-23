//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface TFNExternalURLAbuseProtection : NSObject
{
    _Bool _shouldBlockAllAttempts;
    NSDate *_firstAttemptedDate;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSDate *firstAttemptedDate; // @synthesize firstAttemptedDate=_firstAttemptedDate;
@property(nonatomic) _Bool shouldBlockAllAttempts; // @synthesize shouldBlockAllAttempts=_shouldBlockAllAttempts;
- (void).cxx_destruct;
- (void)resetAbuseProtection;
- (_Bool)shouldBlockAttempt;
- (id)init;

@end
