//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel, TNUServiceHTTPConfiguration;

@interface TFSTwitterAPIStatusesRetweetCommand : TFSTwitterAPICommand
{
    _Bool _earned;
    TFNTwitterAccountModel *_accountModel;
    TNUServiceHTTPConfiguration *_HTTPRequestConfiguration;
    NSNumber *_statusID;
    NSString *_impressionID;
}

@property(nonatomic) _Bool earned; // @synthesize earned=_earned;
@property(retain, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(retain, nonatomic) NSNumber *statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) TNUServiceHTTPConfiguration *HTTPRequestConfiguration; // @synthesize HTTPRequestConfiguration=_HTTPRequestConfiguration;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
- (void).cxx_destruct;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)scribeCommandAttemptResponse:(id)arg1 willRetry:(_Bool)arg2;
- (long long)networkTransactionMetricsStatusForResponse:(id)arg1;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 statusID:(id)arg4 impressionID:(id)arg5 earned:(_Bool)arg6 source:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

