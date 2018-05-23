//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class TSETweetShareConfiguration, UIView;

@interface TSESheetPresentationController : UIPresentationController
{
    double _minimumCompactSizeClassPadding;
    double _minimumRegularSizeClassPadding;
    _Bool _keyboardOnScreen;
    TSETweetShareConfiguration *_configuration;
    UIView *_dimmingView;
    double _keyboardHeight;
}

@property(nonatomic) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) TSETweetShareConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)layoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
@property(readonly, nonatomic) double maximumWidth;
@property(readonly, nonatomic) double maximumHeight;
@property(readonly, nonatomic) double horizontalPadding;
@property(readonly, nonatomic) double minimumBottomPadding;
@property(readonly, nonatomic) double minimumTopPadding;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 configuration:(id)arg3;

@end
