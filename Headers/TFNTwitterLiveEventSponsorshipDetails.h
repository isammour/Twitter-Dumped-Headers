//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterLiveEventSponsorshipDetails : NSObject
{
    NSString *_sponsorName;
}

@property(readonly, copy, nonatomic) NSString *sponsorName; // @synthesize sponsorName=_sponsorName;
- (void).cxx_destruct;
- (_Bool)isEqualToSponsorshipDetails:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithSponsorName:(id)arg1;
- (id)initWithNullableSponsorName:(id)arg1;
- (id)initWithCardData:(id)arg1;
- (id)init;

@end

