//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterAdvertisingInformation : NSObject
{
    _Bool _advertisingTrackingEnabled;
    NSString *_IDFAString;
}

@property(readonly, nonatomic, getter=isAdvertisingTrackingEnabled) _Bool advertisingTrackingEnabled; // @synthesize advertisingTrackingEnabled=_advertisingTrackingEnabled;
@property(readonly, nonatomic) NSString *IDFAString; // @synthesize IDFAString=_IDFAString;
- (void).cxx_destruct;
- (id)initWithIDFAString:(id)arg1 advertisingTrackingEnabled:(_Bool)arg2;
- (id)initWithAdIdentifierManager:(id)arg1;

@end
