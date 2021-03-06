//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSString, NSURL, T1BroadcastContainerViewModel, TFNTwitterBroadcast, TFNTwitterCardContext, UIColor;
@protocol T1NativeBroadcastCardViewModelDelegate;

@interface T1NativeBroadcastCardViewModel : NSObject <TFNTwitterCardContextModel>
{
    _Bool _broadcastUnavailable;
    TFNTwitterCardContext *_cardContext;
    TFNTwitterBroadcast *_broadcast;
    T1BroadcastContainerViewModel *_broadcastContainerViewModel;
    id <T1NativeBroadcastCardViewModelDelegate> _delegate;
    NSString *_ubsRefreshIdentifier;
}

@property(nonatomic, getter=isBroadcastUnavailable) _Bool broadcastUnavailable; // @synthesize broadcastUnavailable=_broadcastUnavailable;
@property(retain, nonatomic) NSString *ubsRefreshIdentifier; // @synthesize ubsRefreshIdentifier=_ubsRefreshIdentifier;
@property(nonatomic) __weak id <T1NativeBroadcastCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1BroadcastContainerViewModel *broadcastContainerViewModel; // @synthesize broadcastContainerViewModel=_broadcastContainerViewModel;
@property(retain, nonatomic) TFNTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
- (void)_t1_processBroadcastUnavailable;
- (void)_t1_processBroadcastAvailable:(id)arg1;
- (void)_t1_processGetBroadcastResponse:(id)arg1;
@property(readonly, nonatomic) _Bool broadcastRequiresAttribution;
@property(readonly, nonatomic, getter=isInErrorState) _Bool inErrorState;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) NSURL *imageURL;
- (id)imageSpec;
- (void)stopPeriodicUpdates;
- (void)startPeriodicUpdates;
- (_Bool)isEqualToCardViewModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

