//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/PTVBannerPresentableContentViewDelegate-Protocol.h>
#import <PeriscopeViewer/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, POPSpringAnimation, PTVBannerPresentableContentView, UIPanGestureRecognizer;

@interface PTVBannerView : UIView <UIGestureRecognizerDelegate, PTVBannerPresentableContentViewDelegate>
{
    PTVBannerView *_weakSelf;
    UIView *_addedFill;
    _Bool _interacting;
    UIPanGestureRecognizer *_dismissPan;
    POPSpringAnimation *_showContent;
    POPSpringAnimation *_hideContent;
    CDUnknownBlockType _dismissCompletion;
    _Bool _isShowing;
    _Bool _pendingDismiss;
    PTVBannerPresentableContentView *_contentView;
}

@property(retain, nonatomic) PTVBannerPresentableContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool pendingDismiss; // @synthesize pendingDismiss=_pendingDismiss;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (id)accessibilityContents;
- (void)contentViewDidRequestDismiss:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dismissContentView:(CDUnknownBlockType)arg1;
- (void)presentContentViewWithDismissCompletion:(CDUnknownBlockType)arg1;
- (void)containerFrameDidChange:(struct CGRect)arg1;
- (void)animateContentViewToOriginalPosition;
- (void)handlePan:(id)arg1;
- (void)createAnimations;
- (id)initWithContentView:(id)arg1 frame:(struct CGRect)arg2;
- (void)safeAreaInsetsDidChange;
- (void)layoutContentView:(float)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

