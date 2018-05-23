//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSArray, NSDictionary, NSString, TFSTwitterOnboardingFlowSpec;

@interface TFSTwitterAPIOnboardingGetTaskCommand : TFSTwitterAPICommand
{
    long long _apiVersion;
    NSString *_knownDeviceToken;
    NSString *_simCountryCode;
    NSString *_terminationReason;
    TFSTwitterOnboardingFlowSpec *_flowSpec;
    NSString *_flowToken;
    NSDictionary *_flowData;
    NSArray *_subtaskStateDictionaries;
    NSDictionary *_subtaskVersions;
}

- (void).cxx_destruct;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 flowToken:(id)arg3 flowData:(id)arg4 subtaskStateDictionaries:(id)arg5 terminationReason:(id)arg6 source:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithService:(id)arg1 accountID:(id)arg2 flowSpec:(id)arg3 apiVersion:(long long)arg4 knownDeviceToken:(id)arg5 simCountryCode:(id)arg6 subtaskVersions:(id)arg7 source:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

