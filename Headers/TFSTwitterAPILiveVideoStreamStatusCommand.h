//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString, TNUServiceHTTPConfiguration;

@interface TFSTwitterAPILiveVideoStreamStatusCommand : TFSTwitterAPICommand
{
    _Bool _locationSharingRulesEnforced;
    _Bool _latestReplayPlaylist;
    NSString *_mediaID;
    TNUServiceHTTPConfiguration *_HTTPRequestConfiguration;
}

@property(retain, nonatomic) TNUServiceHTTPConfiguration *HTTPRequestConfiguration; // @synthesize HTTPRequestConfiguration=_HTTPRequestConfiguration;
@property(nonatomic) _Bool latestReplayPlaylist; // @synthesize latestReplayPlaylist=_latestReplayPlaylist;
@property(nonatomic) _Bool locationSharingRulesEnforced; // @synthesize locationSharingRulesEnforced=_locationSharingRulesEnforced;
@property(retain, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
- (void).cxx_destruct;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 mediaID:(id)arg3 locationSharingRulesEnforced:(_Bool)arg4 latestReplayPlaylist:(_Bool)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

