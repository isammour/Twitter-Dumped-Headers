//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNFullscreenMediaTransitionPresenter-Protocol.h>

@class NSString;

@interface TFNFullscreenMediaTransitionModalPresenter : NSObject <TFNFullscreenMediaTransitionPresenter>
{
}

- (_Bool)isPresentingViewController:(id)arg1;
- (void)preparePresentingViewControllerForPresentation:(id)arg1;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

