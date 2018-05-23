//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PTVHorizontalView, PTVLoadingBarsView, PTVWatchBroadcastConnectionStatusMessageView, UIButton;

@interface PTVWatchBroadcastHeaderView : UIView
{
    NSLayoutConstraint *_connectionStatusMessageView_TopConstraint;
    NSLayoutConstraint *_connectionStatusMessageView_NavigationConstraint;
    UIButton *_dismissButton;
    PTVLoadingBarsView *_loadingBarsView;
    PTVWatchBroadcastConnectionStatusMessageView *_connectionStatusMessageView;
    PTVHorizontalView *_navigationViews;
}

@property(retain, nonatomic) PTVHorizontalView *navigationViews; // @synthesize navigationViews=_navigationViews;
@property(readonly, nonatomic) PTVWatchBroadcastConnectionStatusMessageView *connectionStatusMessageView; // @synthesize connectionStatusMessageView=_connectionStatusMessageView;
@property(readonly, nonatomic) PTVLoadingBarsView *loadingBarsView; // @synthesize loadingBarsView=_loadingBarsView;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *navigationContainer;
- (void)updateStatusMessageConstraints;
@property(retain, nonatomic) UIView *centerView;
@property(retain, nonatomic) UIView *leadingView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
