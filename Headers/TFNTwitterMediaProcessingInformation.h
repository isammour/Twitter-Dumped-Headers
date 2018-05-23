//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError;

@interface TFNTwitterMediaProcessingInformation : NSObject
{
    long long _pollingInterval;
    double _progressPercent;
    unsigned long long _state;
    NSError *_error;
}

+ (unsigned long long)stateFromString:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double progressPercent; // @synthesize progressPercent=_progressPercent;
@property(readonly, nonatomic) long long pollingInterval; // @synthesize pollingInterval=_pollingInterval;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

