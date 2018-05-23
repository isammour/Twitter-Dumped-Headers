//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterDefaultStream-Protocol.h>
#import <T1Twitter/TFNTwitterLoadableStream-Protocol.h>
#import <T1Twitter/TFNTwitterPollableStream-Protocol.h>

@class NSArray, NSError, NSMutableDictionary, NSString, TFNTwitterTimelineChunkManager;
@protocol TFNTwitterTimelineStreamLoader;

@interface TFNTwitterRichTimelineStream : NSObject <TFNTwitterDefaultStream, TFNTwitterPollableStream, TFNTwitterLoadableStream>
{
    id <TFNTwitterTimelineStreamLoader> _streamLoader;
    _Bool _isAtEnd;
    double _pollingInterval;
    TFNTwitterTimelineChunkManager *_timelineChunkManager;
    NSArray *_streamOperators;
    NSMutableDictionary *_notificationHandlers;
    unsigned long long _streamState;
    NSError *_loadTopError;
    NSError *_loadBottomError;
    NSError *_loadGapError;
}

@property(retain, nonatomic) NSError *loadGapError; // @synthesize loadGapError=_loadGapError;
@property(retain, nonatomic) NSError *loadBottomError; // @synthesize loadBottomError=_loadBottomError;
@property(retain, nonatomic) NSError *loadTopError; // @synthesize loadTopError=_loadTopError;
@property(nonatomic) _Bool isAtEnd; // @synthesize isAtEnd=_isAtEnd;
@property(nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
@property(readonly, nonatomic) NSMutableDictionary *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(copy, nonatomic) NSArray *streamOperators; // @synthesize streamOperators=_streamOperators;
@property(readonly, nonatomic) TFNTwitterTimelineChunkManager *timelineChunkManager; // @synthesize timelineChunkManager=_timelineChunkManager;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
- (void).cxx_destruct;
- (void)_postUpdateNotification:(id)arg1 source:(long long)arg2 notificationType:(long long)arg3 error:(id)arg4;
- (void)_removeTweetsWithCompositionTimelineEntryContext:(id)arg1;
- (void)_validateAndInsertChunk:(id)arg1 updateIndex:(unsigned long long)arg2;
- (_Bool)loadPolling;
- (CDUnknownBlockType)_loadGapResponseBlockWithGapItem:(id)arg1 source:(long long)arg2;
- (_Bool)loadGap:(id)arg1 withSource:(long long)arg2;
- (CDUnknownBlockType)_loadBottomResponseBlockWithSource:(long long)arg1;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (CDUnknownBlockType)_loadTopResponseBlockWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)loadPosition:(unsigned long long)arg1 source:(long long)arg2 gapItem:(id)arg3;
- (_Bool)loadPosition:(unsigned long long)arg1 source:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *streamObjects;
- (void)_handleNotification:(id)arg1;
- (void)unregisterNotificationHandler:(id)arg1 forNotificationName:(id)arg2;
- (void)registerNotificationHandler:(id)arg1 forNotificationName:(id)arg2;
- (_Bool)retryForError:(id)arg1 withSource:(long long)arg2;
- (void)handleMemoryWarning;
- (void)resetStream;
- (id)errorForPosition:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isIdle;
- (_Bool)isLoadingPosition:(unsigned long long)arg1;
- (id)initWithStreamLoader:(id)arg1 chunkManager:(id)arg2;
- (id)initWithStreamLoader:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

