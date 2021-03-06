//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PTVDividerView, UIButton;
@protocol PTVBroadcastOverflowViewDelegate;

@interface PTVBroadcastOverflowView : UIView
{
    UIView *_contentContainerView;
    PTVDividerView *_dividerView;
    UIView *_navigationContainerView;
    UIButton *_dismissButton;
    UIButton *_backButton;
    id <PTVBroadcastOverflowViewDelegate> _delegate;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <PTVBroadcastOverflowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backButtonPressed;
- (void)setBackButtonTransitionProgress:(double)arg1;
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDismissButtonTitle:(id)arg1;
- (void)dismissButtonPressed;
- (id)initWithDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

