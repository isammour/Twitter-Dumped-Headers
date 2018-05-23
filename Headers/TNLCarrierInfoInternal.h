//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/TNLCarrierInfo-Protocol.h>

@class NSString;

@interface TNLCarrierInfoInternal : NSObject <TNLCarrierInfo>
{
    _Bool _allowsVOIP;
    NSString *_carrierName;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSString *_isoCountryCode;
}

+ (id)carrierWithCarrier:(id)arg1;
@property(readonly, nonatomic) _Bool allowsVOIP; // @synthesize allowsVOIP=_allowsVOIP;
@property(readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, copy, nonatomic) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(readonly, copy, nonatomic) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(readonly, copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void).cxx_destruct;
- (id)initWithCarrierName:(id)arg1 mobileCountryCode:(id)arg2 mobileNetworkCode:(id)arg3 isoCountryCode:(id)arg4 allowsVOIP:(_Bool)arg5;
- (id)initWithCarrier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

