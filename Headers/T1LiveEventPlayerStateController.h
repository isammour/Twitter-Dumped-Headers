//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol T1LiveEventPlayerStateControllerDelegate;

@interface T1LiveEventPlayerStateController : NSObject
{
    _Bool _playerVisible;
    _Bool _shouldAutoplay;
    _Bool _shouldAutoplayOnPresentedBroadcastDismissal;
    id <T1LiveEventPlayerStateControllerDelegate> _delegate;
}

@property(nonatomic) _Bool shouldAutoplayOnPresentedBroadcastDismissal; // @synthesize shouldAutoplayOnPresentedBroadcastDismissal=_shouldAutoplayOnPresentedBroadcastDismissal;
@property(nonatomic) __weak id <T1LiveEventPlayerStateControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic, getter=isPlayerVisible) _Bool playerVisible; // @synthesize playerVisible=_playerVisible;
- (void).cxx_destruct;
- (void)_t1_didReceiveWillDismissViewControllerNotification:(id)arg1;
- (void)_t1_didReceiveWillPresentViewControllerNotification:(id)arg1;
- (void)_t1_removeViewControllerPresentationObservers;
- (void)_t1_addViewControllerPresentationObservers;
- (id)init;

@end

