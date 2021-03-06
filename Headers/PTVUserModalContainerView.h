//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, POPSpringAnimation, PTVUserModalView;
@protocol PTVDismissButtonDelegate;

@interface PTVUserModalContainerView : UIView <UIGestureRecognizerDelegate>
{
    PTVUserModalContainerView *_weakSelf;
    POPSpringAnimation *_modalViewExpanded;
    POPSpringAnimation *_modalViewCondensed;
    unsigned long long _followingState;
    _Bool _isUserModalReadOnly;
    id <PTVDismissButtonDelegate> _dismissDelegate;
    PTVUserModalView *_modalView;
    unsigned long long _modalViewState;
}

@property(nonatomic) unsigned long long modalViewState; // @synthesize modalViewState=_modalViewState;
@property(readonly, nonatomic) PTVUserModalView *modalView; // @synthesize modalView=_modalView;
@property(nonatomic) __weak id <PTVDismissButtonDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void).cxx_destruct;
- (void)animateHeaderView;
- (void)createHeaderAnimations:(struct CGRect)arg1;
@property(nonatomic) long long interfaceOrientation;
- (_Bool)notificationsEnabled;
- (void)setFollowingState:(unsigned long long)arg1 triggerTooltip:(_Bool)arg2;
- (void)setIsUserModalReadOnly:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithContainer:(struct CGRect)arg1 displayName:(id)arg2 username:(id)arg3 nHearts:(id)arg4 description:(id)arg5 nFollowers:(id)arg6 nFollowing:(id)arg7 historyView:(id)arg8 followersView:(id)arg9 followingView:(id)arg10 followingState:(unsigned long long)arg11 isUserModalReadOnly:(_Bool)arg12 doesUserModalHaveExpandedDetails:(_Bool)arg13 doesUserModalHaveExpandedRecentBroadcastDetails:(_Bool)arg14 isVerified:(_Bool)arg15 isTwitterUser:(_Bool)arg16 vipBadge:(unsigned long long)arg17 delegate:(id)arg18 dismissDelegate:(id)arg19 profileImageURL:(id)arg20;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)layoutHeaderView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

