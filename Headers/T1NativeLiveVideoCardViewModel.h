//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1PlayerCardViewModel-Protocol.h>
#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSError, NSString, T1LiveVideoContentViewModel, TFNTwitterCardContext, TFNTwitterCardPersistedStateManager, TFNTwitterLiveVideoEvent, TFSTimer;
@protocol T1NativeLiveVideoCardViewModelDelegate;

@interface T1NativeLiveVideoCardViewModel : NSObject <TFNTwitterCardContextModel, T1PlayerCardViewModel>
{
    _Bool _refreshingFromCAPIEndpoint;
    TFNTwitterCardContext *_cardContext;
    TFNTwitterLiveVideoEvent *_liveVideoEvent;
    T1LiveVideoContentViewModel *_liveVideoContentViewModel;
    NSError *_error;
    id <T1NativeLiveVideoCardViewModelDelegate> _delegate;
    TFNTwitterCardPersistedStateManager *_cardStateManager;
    TFSTimer *_capiRefreshTimer;
}

@property(retain, nonatomic) TFSTimer *capiRefreshTimer; // @synthesize capiRefreshTimer=_capiRefreshTimer;
@property(nonatomic, getter=isRefreshingFromCAPIEndpoint) _Bool refreshingFromCAPIEndpoint; // @synthesize refreshingFromCAPIEndpoint=_refreshingFromCAPIEndpoint;
@property(retain, nonatomic) TFNTwitterCardPersistedStateManager *cardStateManager; // @synthesize cardStateManager=_cardStateManager;
@property(nonatomic) __weak id <T1NativeLiveVideoCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) T1LiveVideoContentViewModel *liveVideoContentViewModel; // @synthesize liveVideoContentViewModel=_liveVideoContentViewModel;
@property(readonly, nonatomic) TFNTwitterLiveVideoEvent *liveVideoEvent; // @synthesize liveVideoEvent=_liveVideoEvent;
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long playerControllerMode;
@property(readonly, nonatomic) _Bool canPlayStreamInline;
@property(readonly, nonatomic) _Bool isMediaStream;
@property(readonly, nonatomic) _Bool isAmplify;
@property(readonly, nonatomic) _Bool isVine;
@property(readonly, copy, nonatomic) NSString *streamURL;
- (void)_postEventLiveStatusUpdate;
- (void)_refreshResponse:(id)arg1;
- (void)_capiRefreshTimerDidFire;
- (void)stopRefreshingFromCAPIEndpoint;
- (void)startRefreshingFromCAPIEndpoint;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
