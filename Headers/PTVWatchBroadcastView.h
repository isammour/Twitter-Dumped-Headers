//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/PTVScrollViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVSwipeToDismissViewDelegate-Protocol.h>
#import <PeriscopeViewer/UIGestureRecognizerDelegate-Protocol.h>
#import <PeriscopeViewer/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, PTVSwipeToDismissView, PTVVolumeBarView, PTVWatchBroadcastHeaderView, UILayoutGuide, UISwipeGestureRecognizer;
@protocol PTVDismissButtonDelegate, PTVWatchBroadcastViewDelegate;

@interface PTVWatchBroadcastView : UIView <PTVSwipeToDismissViewDelegate, UIScrollViewDelegate, PTVScrollViewDelegate, UIGestureRecognizerDelegate>
{
    id <PTVWatchBroadcastViewDelegate> _watchBroadcastViewDelegate;
    id <PTVDismissButtonDelegate> _dismiss_delegate;
    PTVSwipeToDismissView *_swipeToDismissView;
    UIView *_videoContainerView;
    PTVVolumeBarView *_volumeBar;
    UIView *_containerViewForNonVideoViews;
    UIView *_videoOverlayView;
    UISwipeGestureRecognizer *_swipeUpGestureRecognizer;
    _Bool _didLayoutSubviews;
    _Bool _isInBackground;
    NSArray *_accessibilityElements;
    NSArray *_volumeBarConstraints;
    _Bool _isLive;
    _Bool _hideNonVideoViews;
    _Bool _videoHasReceivedFrames;
    long long _connectivityStatus;
    PTVWatchBroadcastHeaderView *_headerView;
    UILayoutGuide *_contentAreaGuide;
}

@property(readonly, nonatomic) UILayoutGuide *contentAreaGuide; // @synthesize contentAreaGuide=_contentAreaGuide;
@property(readonly, nonatomic) PTVWatchBroadcastHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool videoHasReceivedFrames; // @synthesize videoHasReceivedFrames=_videoHasReceivedFrames;
@property(nonatomic) long long connectivityStatus; // @synthesize connectivityStatus=_connectivityStatus;
@property(nonatomic) _Bool hideNonVideoViews; // @synthesize hideNonVideoViews=_hideNonVideoViews;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)_updateAccessibilityElementsIfNeeded;
- (void)executeConnectivityStatusState;
- (void)setHeaderViewHidden:(_Bool)arg1 shouldAnimate:(_Bool)arg2;
- (void)updateNonVideoContainerViewAlpha;
- (void)executeStateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)executeState;
- (void)setShouldAllowScrollViewToResetOnDismiss:(_Bool)arg1;
- (void)setScrollContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setScrollDismissalEnabled:(_Bool)arg1;
- (void)setIsInBackground:(_Bool)arg1;
- (_Bool)shouldShowConnectivityStatus;
- (_Bool)shouldEnableSwipeUpGestureRecognizer;
- (void)didSwipeUp:(id)arg1;
- (void)volumeDidUpdate;
- (void)dismissPressed;
- (id)initWithFrame:(struct CGRect)arg1 videoContainerView:(id)arg2 videoOverlayView:(id)arg3 chatSectionContentAreaGuide:(id)arg4 dismissDelegate:(id)arg5 watchBroadcastViewDelegate:(id)arg6;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)swipeToDismissViewDidCompleteSwipe:(id)arg1;
- (void)swipeToDismissViewDidHideInstructions:(id)arg1 animated:(_Bool)arg2;
- (void)swipeToDismissViewDidShowInstructions:(id)arg1 animated:(_Bool)arg2;
- (void)swipeToDismissViewDidUpdateSwipe:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateVolumeViewConstraints:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
