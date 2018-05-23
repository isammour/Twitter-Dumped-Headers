//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSNumber, NSString;

@interface TFNTwitterTrendsLocation : NSObject <TFSPlistSerialization>
{
    unsigned long long _type;
    NSString *_name;
    NSNumber *_woeID;
}

@property(readonly, nonatomic) NSNumber *woeID; // @synthesize woeID=_woeID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)_locationTypeForPlaceCode:(long long)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 woeID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

