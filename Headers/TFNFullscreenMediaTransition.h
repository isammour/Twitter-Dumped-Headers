//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNCrossDissolveTransitioningDelegate, TFNFullscreenMediaTransitionViewStructure, TFNUnanimatedTransitioningDelegate, UIColor, UIView, UIViewController;
@protocol TFNFullscreenMediaTransitionPresenter, TFNImageTransitionDelegate;

@interface TFNFullscreenMediaTransition : NSObject
{
    UIViewController *_viewController;
    UIViewController *_sourceViewController;
    TFNUnanimatedTransitioningDelegate *_unanimatedTransitioningDelegate;
    TFNCrossDissolveTransitioningDelegate *_crossDissolveTransitioningDelegate;
    UIView *_backgroundView;
    _Bool _keepPresentingViewInHierarchy;
    _Bool _persistTransitionViewAfterCompletion;
    id <TFNImageTransitionDelegate> _delegate;
    id _object;
    unsigned long long _mode;
    CDUnknownBlockType _willAnimateToSourcePositionBlock;
    UIColor *_backgroundViewColor;
    UIView *_backgroundOverlayView;
    TFNFullscreenMediaTransitionViewStructure *_persistedTransitionViewStructure;
    id <TFNFullscreenMediaTransitionPresenter> _presenter;
    struct CGRect _targetFrame;
}

@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(retain, nonatomic) id <TFNFullscreenMediaTransitionPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) TFNFullscreenMediaTransitionViewStructure *persistedTransitionViewStructure; // @synthesize persistedTransitionViewStructure=_persistedTransitionViewStructure;
@property(retain, nonatomic) UIView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(retain, nonatomic) UIColor *backgroundViewColor; // @synthesize backgroundViewColor=_backgroundViewColor;
@property(copy, nonatomic) CDUnknownBlockType willAnimateToSourcePositionBlock; // @synthesize willAnimateToSourcePositionBlock=_willAnimateToSourcePositionBlock;
@property(nonatomic) _Bool persistTransitionViewAfterCompletion; // @synthesize persistTransitionViewAfterCompletion=_persistTransitionViewAfterCompletion;
@property(nonatomic) _Bool keepPresentingViewInHierarchy; // @synthesize keepPresentingViewInHierarchy=_keepPresentingViewInHierarchy;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak id <TFNImageTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeTransitionView;
- (long long)_presentationInterfaceOrientation;
- (CDUnknownBlockType)_resetStateBlock:(id)arg1;
- (CDUnknownBlockType)_slideBackFromIntermediatePosBlock:(id)arg1;
- (CDUnknownBlockType)_fromFullScreenToIntermediateBlock:(id)arg1 presentingViewControllerSupportedInterfaceOrientations:(unsigned long long)arg2;
- (CDUnknownBlockType)_dismissAndWaitForSourceReadyBlock:(id)arg1 viewController:(id)arg2;
- (CDUnknownBlockType)_presentViewControllerBlock:(id)arg1 viewController:(id)arg2 presentingViewController:(id)arg3;
- (CDUnknownBlockType)_toFullScreenAnimationBlock:(id)arg1;
- (CDUnknownBlockType)_slideToIntermediatePosAnimationBlock:(id)arg1;
- (CDUnknownBlockType)_adjustImageViewFrameAtSourcePositionBlock:(id)arg1;
- (CDUnknownBlockType)_moveViewToSourceBelowToolbarBlock:(id)arg1;
- (CDUnknownBlockType)_prepareTransitionViewFrameBlock:(id)arg1;
- (_Bool)_addVisibleSubviews:(id)arg1 inFrontOfMediaView:(id)arg2 toArray:(id)arg3;
- (void)_dismissWithTransitionStructure:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewController:(id)arg1 fromMediaView:(id)arg2 inFrame:(struct CGRect)arg3 withSourceViewController:(id)arg4 animated:(_Bool)arg5 backgroundView:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)dismissMediaView:(id)arg1 inFrame:(struct CGRect)arg2 animated:(_Bool)arg3 backgroundView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissMediaView:(id)arg1 inFrame:(struct CGRect)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissViewController:(id)arg1 fromFullImage:(id)arg2 inFrame:(struct CGRect)arg3 ofView:(id)arg4 withSourceViewController:(id)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)dismissFromFullImage:(id)arg1 inFrame:(struct CGRect)arg2 ofView:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentViewController:(id)arg1 withTransitionViewStructure:(id)arg2 inSourceViewController:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_prefersStatusBarHidden:(id)arg1;
- (_Bool)_setViewController:(id)arg1 sourceViewController:(id)arg2;
- (void)presentViewController:(id)arg1 fromPreviewImage:(id)arg2 inSourceViewController:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentViewController:(id)arg1 fromPreviewImage:(id)arg2 inSourceViewController:(id)arg3 targetFrame:(struct CGRect)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentViewController:(id)arg1 fromMediaView:(id)arg2 inSourceViewController:(id)arg3 targetFrame:(struct CGRect)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentViewController:(id)arg1 fromMediaView:(id)arg2 inSourceViewController:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)_sourceFrameContentMode;
- (struct CGRect)_sourceFrameContentsRect;
- (struct CGRect)_exclusionFrameInWindow:(id)arg1;
- (struct CGRect)_sourceFrameInWindow:(id)arg1;
@property(readonly, nonatomic) TFNCrossDissolveTransitioningDelegate *crossDissolveTransitioningDelegate;
@property(readonly, nonatomic) TFNUnanimatedTransitioningDelegate *unanimatedTransitioningDelegate;
- (id)_setupDismissViewStructureForImageView:(id)arg1 inImageFrame:(struct CGRect)arg2 withPreviewImage:(id)arg3;
- (id)_setupDismissViewStructureForMediaView:(id)arg1 inMediaViewFrame:(struct CGRect)arg2 withTransitionMediaView:(id)arg3;
- (id)_setupPresentationViewStructureForPreviewImage:(id)arg1;
- (id)_setupPresentationViewStructureForMediaView:(id)arg1;
- (id)_setupTransitionContainer;
- (id)_setupTransitionImageViewForPreviewImage:(id)arg1;
- (id)_setupTransitionView;
- (id)_setupTransitionBackgroundViewWithColor:(id)arg1;
- (id)init;

@end

