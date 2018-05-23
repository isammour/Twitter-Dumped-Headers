//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPITimelineHomeCommandConfiguration : NSObject
{
    _Bool _URTLegacyIntegrationEnabled;
    _Bool _allowAPIRequestDebugLogging;
    NSString *_accountID;
    unsigned long long _sourceType;
    TFNTwitterAccountModel *_accountModel;
}

@property(readonly, nonatomic) _Bool allowAPIRequestDebugLogging; // @synthesize allowAPIRequestDebugLogging=_allowAPIRequestDebugLogging;
@property(readonly, nonatomic, getter=isURTLegacyIntegrationEnabled) _Bool URTLegacyIntegrationEnabled; // @synthesize URTLegacyIntegrationEnabled=_URTLegacyIntegrationEnabled;
@property(readonly, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)arg1 sourceType:(unsigned long long)arg2 accountModel:(id)arg3 URTLegacyIntegrationEnabled:(_Bool)arg4 allowAPIRequestDebugLogging:(_Bool)arg5;
- (id)init;

@end
