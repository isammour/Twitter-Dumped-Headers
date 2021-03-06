//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSAttributedString, NSString, T1BroadcastContainerViewModel, T1LiveEventRemindMeViewModel, TFNTwitterBroadcast, TFNTwitterCardContext, TFNTwitterCardData, TFNTwitterEntityImageInfo, TFNTwitterLiveEvent, TFNTwitterStatus, TFNTwitterUser;
@protocol T1NativeLiveEventCardViewModelDelegate, T1NativeLiveEventCardViewTheme;

@interface T1NativeLiveEventCardViewModel : NSObject <TFNTwitterCardContextModel>
{
    _Bool _refreshing;
    _Bool _refreshingFromCAPIEndpoint;
    TFNTwitterCardContext *_cardContext;
    TFNTwitterLiveEvent *_event;
    TFNTwitterBroadcast *_broadcast;
    T1BroadcastContainerViewModel *_broadcastContainerViewModel;
    T1LiveEventRemindMeViewModel *_remindMeViewModel;
    TFNTwitterEntityImageInfo *_eventThumbnailImageInfo;
    id <T1NativeLiveEventCardViewModelDelegate> _delegate;
    NSString *_ubsRefreshIdentifier;
    id <T1NativeLiveEventCardViewTheme> _theme;
    TFNTwitterCardData *_latestCardData;
}

@property(retain, nonatomic) TFNTwitterCardData *latestCardData; // @synthesize latestCardData=_latestCardData;
@property(retain, nonatomic) id <T1NativeLiveEventCardViewTheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *ubsRefreshIdentifier; // @synthesize ubsRefreshIdentifier=_ubsRefreshIdentifier;
@property(nonatomic, getter=isRefreshingFromCAPIEndpoint) _Bool refreshingFromCAPIEndpoint; // @synthesize refreshingFromCAPIEndpoint=_refreshingFromCAPIEndpoint;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) __weak id <T1NativeLiveEventCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTwitterEntityImageInfo *eventThumbnailImageInfo; // @synthesize eventThumbnailImageInfo=_eventThumbnailImageInfo;
@property(readonly, nonatomic) T1LiveEventRemindMeViewModel *remindMeViewModel; // @synthesize remindMeViewModel=_remindMeViewModel;
@property(retain, nonatomic) T1BroadcastContainerViewModel *broadcastContainerViewModel; // @synthesize broadcastContainerViewModel=_broadcastContainerViewModel;
@property(retain, nonatomic) TFNTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(retain, nonatomic) TFNTwitterLiveEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
- (void)_t1_processUBSResponse:(id)arg1;
- (void)_t1_stopPeriodicalUBSUpdates;
- (void)_t1_startPeriodicalUBSUpdates;
- (void)_t1_didReceiveCAPIResponse:(id)arg1;
- (void)_t1_stopPeriodicalCAPIUpdates;
- (void)_t1_startPeriodicalCAPIUpdates;
@property(readonly, nonatomic) TFNTwitterStatus *status;
- (void)stopPeriodicalUpdates;
- (void)startPeriodicalUpdates;
- (_Bool)isEqualToCardViewModel:(id)arg1;
@property(readonly, nonatomic) TFNTwitterUser *authorUser;
@property(readonly, copy, nonatomic) NSAttributedString *attributedEventTitleString;
@property(readonly, copy, nonatomic) NSAttributedString *attributedEventCategoryString;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

