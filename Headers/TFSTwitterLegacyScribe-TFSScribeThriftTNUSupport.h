//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSScribe/TFSTwitterLegacyScribe.h>

@interface TFSTwitterLegacyScribe (TFSScribeThriftTNUSupport)
- (void)logCDNRequestForTNLResponse:(id)arg1;
- (void)logAPIErrorForTNLResponse:(id)arg1 eventSource:(id)arg2;
- (void)logAPIAttemptForTNLResponse:(id)arg1 eventSource:(id)arg2;
- (void)logAPIRequestForTNLResponse:(id)arg1 eventSource:(id)arg2;
- (void)_logClientNetworkRequestMetrics:(id)arg1 eventType:(id)arg2 eventSource:(id)arg3;
- (void)logNetworkTransactionMetrics:(id)arg1;
@end

