//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSObject, TFSProgressiveTimelineJSONParser, TFSTwitterAPITimelineHomeCommandConfiguration, TFSTwitterAPITimelineHomeRequestConfiguration, TNUServiceHTTPConfiguration;
@protocol OS_dispatch_group;

@interface TFSTwitterAPITimelineHomeCommand : TFSTwitterAPICommand
{
    _Bool _allowPromotedContent;
    TFSTwitterAPITimelineHomeCommandConfiguration *_homeCommandConfiguration;
    TFSTwitterAPITimelineHomeRequestConfiguration *_homeRequestConfiguration;
    CDUnknownBlockType _homeProgressBlock;
    TNUServiceHTTPConfiguration *_httpRequestConfiguration;
    TFSProgressiveTimelineJSONParser *_parser;
    NSObject<OS_dispatch_group> *_progressiveResponseSequencingGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *progressiveResponseSequencingGroup; // @synthesize progressiveResponseSequencingGroup=_progressiveResponseSequencingGroup;
@property(readonly, nonatomic) TFSProgressiveTimelineJSONParser *parser; // @synthesize parser=_parser;
@property(readonly, nonatomic) TNUServiceHTTPConfiguration *httpRequestConfiguration; // @synthesize httpRequestConfiguration=_httpRequestConfiguration;
@property(readonly, nonatomic) _Bool allowPromotedContent; // @synthesize allowPromotedContent=_allowPromotedContent;
@property(readonly, copy, nonatomic) CDUnknownBlockType homeProgressBlock; // @synthesize homeProgressBlock=_homeProgressBlock;
@property(readonly, nonatomic) TFSTwitterAPITimelineHomeRequestConfiguration *homeRequestConfiguration; // @synthesize homeRequestConfiguration=_homeRequestConfiguration;
@property(readonly, nonatomic) TFSTwitterAPITimelineHomeCommandConfiguration *homeCommandConfiguration; // @synthesize homeCommandConfiguration=_homeCommandConfiguration;
- (void).cxx_destruct;
- (void)_tfs_processProgressiveResponse:(id)arg1;
- (void)APIRequest:(id)arg1 requestOperation:(id)arg2 didReceiveData:(id)arg3;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)scribeCommandResponse:(id)arg1;
- (void)willCallCompletionBlock;
- (void)scribeCommandAttemptResponse:(id)arg1 willRetry:(_Bool)arg2;
- (void)completeWithModel:(id)arg1 error:(id)arg2;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 homeCommandConfiguration:(id)arg2 homeRequestConfiguration:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

