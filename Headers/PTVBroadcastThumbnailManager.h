//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVWorkClientDelegate-Protocol.h>

@class NSString, PTVBroadcastController, PTVReplayChunkPlaylist, PTVWeakSet, PTVWorkClient;

@interface PTVBroadcastThumbnailManager : NSObject <PTVWorkClientDelegate>
{
    PTVWorkClient *_workClient;
    PTVWeakSet *_observers;
    PTVBroadcastController *_broadcastController;
    PTVReplayChunkPlaylist *_replayChunkPlaylist;
}

@property(retain, nonatomic) PTVReplayChunkPlaylist *replayChunkPlaylist; // @synthesize replayChunkPlaylist=_replayChunkPlaylist;
@property(readonly, nonatomic) __weak PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lastThumbnailVideoPosition;
- (void)didFailToLoadReplayChunkPlaylistWithError:(id)arg1;
- (void)didLoadReplayChunkPlaylist:(id)arg1;
- (void)getPreLoadedAndBestThumbnailURLForVideoPosition:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchThumbnails;
- (void)notifyWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithBroadcastController:(id)arg1;
- (id)context;
- (void)error:(id)arg1 context:(id)arg2;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

