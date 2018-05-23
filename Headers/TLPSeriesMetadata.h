//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLivePipeline/TLPStreamMetadata.h>

@class NSMutableArray;
@protocol TLPTimeProvider;

@interface TLPSeriesMetadata : TLPStreamMetadata
{
    id <TLPTimeProvider> _timeProvider;
    TLPStreamMetadata *_currentStreamMetadata;
    NSMutableArray *_streamMetadataList;
}

@property(readonly, nonatomic) NSMutableArray *streamMetadataList; // @synthesize streamMetadataList=_streamMetadataList;
- (void).cxx_destruct;
- (void)writeToScribe;
- (id)scribeParameters;
- (id)customScribeParametersDictionary;
- (void)didDisconnectWithError:(id)arg1 willReconnect:(_Bool)arg2 eventStreamMetadata:(id)arg3;
- (void)didFailTopic;
- (void)didSendResubscribeRequestWithTopics:(unsigned long long)arg1;
- (void)didSendUpdateSubscriptionsRequestWithSubTopics:(unsigned long long)arg1 unsubTopics:(unsigned long long)arg2;
- (void)connectingWithTopicCount:(unsigned long long)arg1;
- (void)didStart;
- (void)didFinishStream;
- (void)didStartStream;
- (id)initWithScribeWriter:(id)arg1 group:(id)arg2 timeProvider:(id)arg3;

@end

