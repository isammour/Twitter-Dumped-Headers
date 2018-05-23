//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardViewBaseEventHandler.h>

#import <T1Twitter/TFNTwitterCardViewEventHandler-Protocol.h>

@class NSString;

@interface T1NativeBroadcastCardViewEventHandler : TFNTwitterCardViewBaseEventHandler <TFNTwitterCardViewEventHandler>
{
}

- (void)_t1_logCardViewEvent:(id)arg1 withContext:(id)arg2;
- (id)_t1_broadcastControllerForCardViewEvent:(id)arg1 context:(id)arg2 displayMode:(unsigned long long)arg3;
- (id)_t1_broadcastForContext:(id)arg1;
- (id)_t1_handleAttributionPreviewingEvent:(id)arg1 context:(id)arg2;
- (id)_t1_handleBroadcastPreviewingEvent:(id)arg1 context:(id)arg2;
- (id)_t1_handleAttributionViewEvent:(id)arg1 context:(id)arg2;
- (id)_t1_handleBroadcastViewEvent:(id)arg1 context:(id)arg2;
- (id)handleViewEvent:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

