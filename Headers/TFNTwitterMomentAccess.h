//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSString;

@interface TFNTwitterMomentAccess : NSObject <TFSPlistSerialization>
{
    NSString *_accessType;
}

@property(readonly, nonatomic) NSString *accessType; // @synthesize accessType=_accessType;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithAccessType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

