//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterAPICommand/TFSAuthAPIResponse-Protocol.h>

@class NSError, NSString;

@interface TFSTwitterAPICommandAPIResponse : NSObject <TFSAuthAPIResponse>
{
    _Bool _success;
    NSError *_signError;
    NSError *_apiError;
    long long _statusCode;
    NSString *_accountID;
    unsigned long long _authType;
    unsigned long long _startMachTime;
}

@property(nonatomic) unsigned long long startMachTime; // @synthesize startMachTime=_startMachTime;
@property(nonatomic) unsigned long long authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSError *apiError; // @synthesize apiError=_apiError;
@property(retain, nonatomic) NSError *signError; // @synthesize signError=_signError;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithAPIResponse:(id)arg1 accountID:(id)arg2 authType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

