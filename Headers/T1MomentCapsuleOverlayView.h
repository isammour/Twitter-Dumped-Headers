//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1MomentCapsuleAnimatable-Protocol.h>

@class NSString, T1MomentCapsuleOverlayTheme, T1MomentCapsuleProgressBarView;

@interface T1MomentCapsuleOverlayView : UIView <T1MomentCapsuleAnimatable>
{
    T1MomentCapsuleProgressBarView *_progressBarView;
    T1MomentCapsuleOverlayTheme *_theme;
    long long _currentCapsuleContentMode;
}

+ (double)progressBarHeight;
@property(nonatomic) long long currentCapsuleContentMode; // @synthesize currentCapsuleContentMode=_currentCapsuleContentMode;
@property(retain, nonatomic) T1MomentCapsuleOverlayTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) T1MomentCapsuleProgressBarView *progressBarView; // @synthesize progressBarView=_progressBarView;
- (void).cxx_destruct;
- (void)performPreppedAnimation:(id)arg1;
- (void)updateDependenciesForPreppedAnimation;
- (_Bool)prepToPerformAnimationToContentMode:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

