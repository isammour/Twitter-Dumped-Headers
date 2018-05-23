//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSDictionary, NSString;

@interface TFNTwitterPromotedCardVariant : NSObject <NSCoding, TFSPlistSerialization>
{
    unsigned long long _variantType;
    unsigned long long _mediaAppCardVariant;
    unsigned long long _promoWebsiteCardVariant;
}

@property(readonly, nonatomic) unsigned long long promoWebsiteCardVariant; // @synthesize promoWebsiteCardVariant=_promoWebsiteCardVariant;
@property(readonly, nonatomic) unsigned long long mediaAppCardVariant; // @synthesize mediaAppCardVariant=_mediaAppCardVariant;
@property(readonly, nonatomic) unsigned long long variantType; // @synthesize variantType=_variantType;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *cardLayoutDict;
@property(readonly, nonatomic) NSString *cardLayoutVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

