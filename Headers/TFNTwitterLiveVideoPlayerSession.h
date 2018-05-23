//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterAVPlayerControllerSession.h>

@class TFNTwitterAccount;
@protocol TFSTwitterAPICommandCancellable;

@interface TFNTwitterLiveVideoPlayerSession : TFNTwitterAVPlayerControllerSession
{
    _Bool _isLiveVideoStreamAcquisitionEnabled;
    _Bool _locationSharingRulesEnforced;
    TFNTwitterAccount *_account;
    id <TFSTwitterAPICommandCancellable> _cancellablePrepareOperation;
}

@property(nonatomic) __weak id <TFSTwitterAPICommandCancellable> cancellablePrepareOperation; // @synthesize cancellablePrepareOperation=_cancellablePrepareOperation;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool locationSharingRulesEnforced; // @synthesize locationSharingRulesEnforced=_locationSharingRulesEnforced;
@property(nonatomic) _Bool isLiveVideoStreamAcquisitionEnabled; // @synthesize isLiveVideoStreamAcquisitionEnabled=_isLiveVideoStreamAcquisitionEnabled;
- (void).cxx_destruct;
- (void)private_handleAuthorizedStreamStatus:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPreparation;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSource:(id)arg1 account:(id)arg2;
- (id)initWithLiveVideoEvent:(id)arg1 account:(id)arg2;
- (id)initWithLiveVideoEvent:(id)arg1 liveVideoScribableItem:(id)arg2 account:(id)arg3;
- (id)initWithAccount:(id)arg1 scribableItem:(id)arg2 playlistContentID:(id)arg3 playlistOwnerID:(id)arg4 playlistURL:(id)arg5 contentVideo:(id)arg6;
- (id)init;

@end

