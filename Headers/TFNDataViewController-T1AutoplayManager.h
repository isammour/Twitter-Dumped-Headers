//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewController.h>

#import <T1Twitter/T1Autoplayable-Protocol.h>

@class NSString;
@protocol T1AutoplayableManager;

@interface TFNDataViewController (T1AutoplayManager) <T1Autoplayable>
@property(nonatomic) _Bool shouldAutoplay;
- (struct CGRect)autoplayableFrameIn:(id)arg1;
- (id)t1_activeAutoplayable;
- (void)t1_configureAutoplayManager;
@property(nonatomic) _Bool t1_isAutoplaySuspendedForScrollToTop;
@property(nonatomic) _Bool t1_isAutoplaySuspendedForFullscreenPlayer;
- (void)t1_setAutoplayManager:(id)arg1 statusMediaHandler:(id)arg2;
@property(readonly, nonatomic) id <T1AutoplayableManager> t1_autoplayManager;
- (void)setT1_autoplayManagerHelper:(id)arg1;
- (id)t1_autoplayManagerHelper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

