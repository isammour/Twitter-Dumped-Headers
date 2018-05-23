//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeViewer/PTVAnimatedTransitionWithShadeCoordinatorComponent-Protocol.h>
#import <PeriscopeViewer/PTVBroadcastOverflowViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVInteractiveSlideTransitionDelegate-Protocol.h>
#import <PeriscopeViewer/UINavigationControllerDelegate-Protocol.h>
#import <PeriscopeViewer/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, PTVBroadcastOverflowAnimatedTransitionWithShadeCoordinator, PTVInteractiveSlideTransition, UINavigationController;
@protocol PTVBroadcastOverflowViewControllerDelegate, PTVOverflowViewControllerAppearanceDelegate;

@interface PTVBroadcastOverflowViewController : UIViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, PTVBroadcastOverflowViewDelegate, PTVInteractiveSlideTransitionDelegate, PTVAnimatedTransitionWithShadeCoordinatorComponent>
{
    PTVBroadcastOverflowAnimatedTransitionWithShadeCoordinator *_animatedTransitionController;
    PTVInteractiveSlideTransition *_interactiveTransitionCoordinator;
    id <PTVBroadcastOverflowViewControllerDelegate> _delegate;
    id <PTVOverflowViewControllerAppearanceDelegate> _appearanceDelegate;
    UIViewController *_rootViewController;
    UINavigationController *_navController;
}

@property(readonly, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <PTVOverflowViewControllerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) __weak id <PTVBroadcastOverflowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBackButtonVisibilityForViewController:(id)arg1 animated:(_Bool)arg2;
- (id)broadcastOverflowView;
- (id)initWithRootViewController:(id)arg1 delegate:(id)arg2 appearanceDelegate:(id)arg3;
- (void)interactiveSlideTransitionDidCancel:(id)arg1;
- (void)interactiveSlideTransitionDidComplete:(id)arg1;
- (void)interactiveSlideTransitionDidUpdate:(id)arg1;
- (void)interactiveSlideTransitionDidBegin:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (double)heightOfViewToBeAnimatedForContainerSize:(struct CGSize)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)broadcastOverflowViewDidSelectBack:(id)arg1;
- (void)broadcastOverflowViewDidSelectDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

