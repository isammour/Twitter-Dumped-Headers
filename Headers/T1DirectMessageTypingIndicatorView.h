//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableSet, NSString, T1DirectMessageTypingIndicatorOverflowAvatarView, TIPImagePipeline, UIStackView, UIView;
@protocol T1DirectMessageTypingIndicatorViewDelegate;

@interface T1DirectMessageTypingIndicatorView : UICollectionReusableView <TFNLayoutMetricsEnvironment>
{
    unsigned long long _currentUserCount;
    id <T1DirectMessageTypingIndicatorViewDelegate> _delegate;
    TIPImagePipeline *_imagePipeline;
    UIStackView *_mainContainer;
    NSLayoutConstraint *_mainContainerLeadingEdgeInsetConstraint;
    UIView *_dotsBubbleContainer;
    UIView *_overflowContainer;
    UIStackView *_avatarsContainer;
    NSArray *_dotViews;
    T1DirectMessageTypingIndicatorOverflowAvatarView *_overflowView;
    NSMutableSet *_disappearingAvatarViews;
    struct CGPoint _manualAnimationStartOffset;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) struct CGPoint manualAnimationStartOffset; // @synthesize manualAnimationStartOffset=_manualAnimationStartOffset;
@property(retain, nonatomic) NSMutableSet *disappearingAvatarViews; // @synthesize disappearingAvatarViews=_disappearingAvatarViews;
@property(retain, nonatomic) T1DirectMessageTypingIndicatorOverflowAvatarView *overflowView; // @synthesize overflowView=_overflowView;
@property(retain, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) UIStackView *avatarsContainer; // @synthesize avatarsContainer=_avatarsContainer;
@property(retain, nonatomic) UIView *overflowContainer; // @synthesize overflowContainer=_overflowContainer;
@property(retain, nonatomic) UIView *dotsBubbleContainer; // @synthesize dotsBubbleContainer=_dotsBubbleContainer;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerLeadingEdgeInsetConstraint; // @synthesize mainContainerLeadingEdgeInsetConstraint=_mainContainerLeadingEdgeInsetConstraint;
@property(retain, nonatomic) UIStackView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic) __weak id <T1DirectMessageTypingIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long currentUserCount; // @synthesize currentUserCount=_currentUserCount;
- (void).cxx_destruct;
- (void)animateAvatarOut:(id)arg1 removeFromSuperview:(_Bool)arg2 didReceiveMessage:(_Bool)arg3 slideCompletion:(CDUnknownBlockType)arg4;
- (void)animateLastAvatarOut:(id)arg1;
- (void)animateAvatarIn:(id)arg1;
- (void)animateFirstAvatarIn:(id)arg1;
- (void)stopDotsAnimation;
- (void)startDotsAnimation;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)removeAvatarView:(id)arg1;
- (void)avatarImageViewTapped:(id)arg1;
- (void)endManualAnimation;
- (void)manuallyAnimateAtPercent:(double)arg1;
- (void)beginManualAnimationFromStartOffset:(struct CGPoint)arg1;
- (void)removeUser:(id)arg1 didReceiveMessage:(_Bool)arg2;
- (void)addUser:(id)arg1;
- (id)avatarImageForUser:(id)arg1;
- (id)createAvatarImageViewForUser:(id)arg1;
- (void)updateConstraints;
- (void)setupViews;
- (id)setupOverflowView;
- (id)setupAvatarsContainer;
- (id)setupThreeDotsBubbleView;
- (id)initWithImagePipeline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

