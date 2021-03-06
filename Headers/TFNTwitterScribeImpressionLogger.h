//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TFNTwitterScribeErrorHandler, TFNTwitterScribeWriter;
@protocol OS_dispatch_queue;

@interface TFNTwitterScribeImpressionLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    TFNTwitterScribeWriter *_scribeWriter;
    NSMutableDictionary *_scribedItemImpressions;
    TFNTwitterScribeErrorHandler *_errorHandler;
}

@property(retain, nonatomic) TFNTwitterScribeErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSMutableDictionary *scribedItemImpressions; // @synthesize scribedItemImpressions=_scribedItemImpressions;
@property(readonly, nonatomic) TFNTwitterScribeWriter *scribeWriter; // @synthesize scribeWriter=_scribeWriter;
- (void).cxx_destruct;
- (void)_enqueueCardEvent:(id)arg1 eventName:(id)arg2 query:(id)arg3 timestamp:(id)arg4 group:(id)arg5;
- (void)_enqueueItemImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 itemParameters:(id)arg4 timestamp:(id)arg5 group:(id)arg6;
- (id)eventsForImpressionsBatch:(id)arg1 group:(id)arg2;
- (void)_logItemImpression:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 itemParameters:(id)arg6 deduplicate:(_Bool)arg7 group:(id)arg8 firstImpressionParameterKey:(id)arg9 firstImpressionCache:(id)arg10 forceFirstImpression:(_Bool)arg11 impressionDuration:(unsigned long long)arg12;
- (void)logItemLingerImpression:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 itemParameters:(id)arg6 group:(id)arg7 firstImpressionParameterKey:(id)arg8 firstImpressionCache:(id)arg9 forceFirstImpression:(_Bool)arg10 impressionDuration:(unsigned long long)arg11;
- (void)logItemImpression:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 itemParameters:(id)arg6 deduplicate:(_Bool)arg7 group:(id)arg8;
- (void)clearItemImpressionsCache;
- (id)initWithScribeWriter:(id)arg1;

@end

