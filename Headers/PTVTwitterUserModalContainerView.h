//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PTVTwitterIntegrationUserModalView;
@protocol PTVDismissButtonDelegate;

@interface PTVTwitterUserModalContainerView : UIView <UIGestureRecognizerDelegate>
{
    PTVTwitterUserModalContainerView *_weakSelf;
    _Bool _isLoggedInUser;
    id <PTVDismissButtonDelegate> _dismissDelegate;
    PTVTwitterIntegrationUserModalView *_modalView;
}

@property(readonly, nonatomic) PTVTwitterIntegrationUserModalView *modalView; // @synthesize modalView=_modalView;
@property(nonatomic) __weak id <PTVDismissButtonDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void).cxx_destruct;
@property(nonatomic) long long interfaceOrientation;
- (void)setAccessoryView:(id)arg1;
- (void)setIsLoggedInUser:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithContainer:(struct CGRect)arg1 displayName:(id)arg2 username:(id)arg3 description:(id)arg4 isLoggedInUser:(_Bool)arg5 isVerified:(_Bool)arg6 isBluebirdUser:(_Bool)arg7 twitterUsername:(id)arg8 delegate:(id)arg9 dismissDelegate:(id)arg10 profileImageURL:(id)arg11 accessoryView:(id)arg12;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutHeaderView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

