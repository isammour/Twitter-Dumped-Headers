//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PTVAccessVideo : NSObject
{
    NSString *_rtmp_url;
    NSString *_hls_url;
    NSString *_lhls_url;
    _Bool _isEligibleForSuperResolution;
    _Bool _isExternallyManaged;
    NSString *_life_cycle_token;
    NSString *_chat_token;
    NSNumber *_autoPlayStartWatchingThreshold;
    NSString *_replay_url;
    NSArray *_pspVersion;
    unsigned long long _chatRoomPermissionType;
    double _defaultPlaybackBufferLength;
    double _minPlaybackBufferLength;
    double _maxPlaybackBufferLength;
    double _constantPlaybackBufferLength;
    NSString *_share_url;
}

@property(readonly) _Bool isExternallyManaged; // @synthesize isExternallyManaged=_isExternallyManaged;
@property(readonly) NSString *share_url; // @synthesize share_url=_share_url;
@property(readonly) double constantPlaybackBufferLength; // @synthesize constantPlaybackBufferLength=_constantPlaybackBufferLength;
@property(readonly) double maxPlaybackBufferLength; // @synthesize maxPlaybackBufferLength=_maxPlaybackBufferLength;
@property(readonly) double minPlaybackBufferLength; // @synthesize minPlaybackBufferLength=_minPlaybackBufferLength;
@property(readonly) double defaultPlaybackBufferLength; // @synthesize defaultPlaybackBufferLength=_defaultPlaybackBufferLength;
@property(readonly) _Bool isEligibleForSuperResolution; // @synthesize isEligibleForSuperResolution=_isEligibleForSuperResolution;
@property(readonly) unsigned long long chatRoomPermissionType; // @synthesize chatRoomPermissionType=_chatRoomPermissionType;
@property(readonly) NSArray *pspVersion; // @synthesize pspVersion=_pspVersion;
@property(readonly) NSString *replay_url; // @synthesize replay_url=_replay_url;
@property(readonly) NSString *hls_url; // @synthesize hls_url=_hls_url;
@property(readonly) NSString *lhls_url; // @synthesize lhls_url=_lhls_url;
@property(readonly) NSString *rtmp_url; // @synthesize rtmp_url=_rtmp_url;
@property(readonly) NSNumber *autoPlayStartWatchingThreshold; // @synthesize autoPlayStartWatchingThreshold=_autoPlayStartWatchingThreshold;
@property(readonly) NSString *chat_token; // @synthesize chat_token=_chat_token;
@property(readonly) NSString *life_cycle_token; // @synthesize life_cycle_token=_life_cycle_token;
- (void).cxx_destruct;
- (id)replaceURL:(id)arg1 withHost:(id)arg2 andPort:(id)arg3;
- (void)overrideVidManPlaybackURLsIfNeeded;
- (unsigned long long)chatRoomPermissionTypeForString:(id)arg1;
- (_Bool)videoParametersAreEqual:(id)arg1;
- (_Bool)hasAnyVideoURLs;
- (_Bool)hasAnyReplayVideoURLs;
- (_Bool)hasAnyLiveVideoURLs;
- (_Bool)shouldUseLHLS;
- (_Bool)shouldUseRTMP;
- (_Bool)shouldUseHLS;
- (id)initExternalVideoAccessWithLifecycleToken:(id)arg1 chatToken:(id)arg2 chatPermissionType:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

