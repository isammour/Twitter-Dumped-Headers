//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface T1MomentMakerSnapshotAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _dismissing;
}

@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

