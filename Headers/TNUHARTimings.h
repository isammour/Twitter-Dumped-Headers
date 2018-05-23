//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/TNUHARObject.h>

@interface TNUHARTimings : TNUHARObject
{
    long long _blocked;
    long long _dns;
    long long _connect;
    long long _send;
    long long _wait;
    long long _receive;
    long long _ssl;
}

@property(nonatomic) long long ssl; // @synthesize ssl=_ssl;
@property(nonatomic) long long receive; // @synthesize receive=_receive;
@property(nonatomic) long long wait; // @synthesize wait=_wait;
@property(nonatomic) long long send; // @synthesize send=_send;
@property(nonatomic) long long connect; // @synthesize connect=_connect;
@property(nonatomic) long long dns; // @synthesize dns=_dns;
@property(nonatomic) long long blocked; // @synthesize blocked=_blocked;
- (long long)summedDuration;
- (_Bool)hasAnyRequiredValue;
- (void)setAllValuesToUnknown;
- (id)mutableJSONDictionary;

@end

