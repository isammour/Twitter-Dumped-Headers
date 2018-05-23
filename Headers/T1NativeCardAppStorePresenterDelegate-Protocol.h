//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNStoreOpenerLoadResult, TFNTwitterCardViewEvent, TFNTwitterCardViewEventContext;
@protocol T1NativeCardAppStorePresenter;

@protocol T1NativeCardAppStorePresenterDelegate <NSObject>

@optional
- (void)presenter:(id <T1NativeCardAppStorePresenter>)arg1 didRedeemAppWithLoadResult:(unsigned long long)arg2 context:(TFNTwitterCardViewEventContext *)arg3 viewEvent:(TFNTwitterCardViewEvent *)arg4;
- (void)presenter:(id <T1NativeCardAppStorePresenter>)arg1 didAttemptToOpenAppFromAppStoreForContext:(TFNTwitterCardViewEventContext *)arg2 viewEvent:(TFNTwitterCardViewEvent *)arg3 appOpenResult:(unsigned long long)arg4;
- (void)presenter:(id <T1NativeCardAppStorePresenter>)arg1 didUpdateAppStoreForLoadResult:(TFNStoreOpenerLoadResult *)arg2 context:(TFNTwitterCardViewEventContext *)arg3;
@end

