//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSDictionary, NSString;

@interface TFNAuthorizationRecord : NSObject <TFSPlistSerialization>
{
    _Bool _needsSynchronization;
    long long _serviceType;
    long long _inAppStatus;
    long long _systemStatus;
    NSDictionary *_metadata;
}

@property(nonatomic) _Bool needsSynchronization; // @synthesize needsSynchronization=_needsSynchronization;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) long long systemStatus; // @synthesize systemStatus=_systemStatus;
@property(readonly, nonatomic) long long inAppStatus; // @synthesize inAppStatus=_inAppStatus;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithServiceType:(long long)arg1 inAppStatus:(long long)arg2 systemStatus:(long long)arg3 metadata:(id)arg4 needsSynchronization:(_Bool)arg5;
- (id)initWithServiceType:(long long)arg1 inAppStatus:(long long)arg2 systemStatus:(long long)arg3 metadata:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

