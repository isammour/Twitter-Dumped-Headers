//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TPXAnimator.h>

@class TPXDecaySolver;
@protocol TPXDecayAnimation2DObserver;

@interface TPXDecayAnimator2D : TPXAnimator
{
    TPXDecaySolver *_decayX;
    TPXDecaySolver *_decayY;
}

@property(readonly, nonatomic) TPXDecaySolver *decayY; // @synthesize decayY=_decayY;
@property(readonly, nonatomic) TPXDecaySolver *decayX; // @synthesize decayX=_decayX;
- (void).cxx_destruct;
- (void)notifyDecayYStabilized;
- (void)notifyDecayXStabilized;
- (void)updateAnimation;
- (_Bool)animationShouldComplete;
@property(nonatomic) struct CGPoint velocity;
@property(nonatomic) struct CGPoint position;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <TPXDecayAnimation2DObserver> delegate; // @dynamic delegate;

@end

