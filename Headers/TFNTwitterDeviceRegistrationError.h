//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNTwitterDeviceRegistrationError : NSObject
{
    long long _code;
    NSString *_message;
}

+ (id)deviceRegisterErrorWithJSONData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

