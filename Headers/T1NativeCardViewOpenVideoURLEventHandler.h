//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardViewBaseEventHandler.h>

#import <T1Twitter/TFNTwitterCardViewEventHandler-Protocol.h>

@class NSString, T1NativeCardURLPresenter;

@interface T1NativeCardViewOpenVideoURLEventHandler : TFNTwitterCardViewBaseEventHandler <TFNTwitterCardViewEventHandler>
{
    T1NativeCardURLPresenter *_presenter;
}

@property(retain, nonatomic) T1NativeCardURLPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (id)handleViewEvent:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

