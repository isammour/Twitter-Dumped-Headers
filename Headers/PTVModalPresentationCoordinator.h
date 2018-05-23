//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVInteractiveDismissalTransitionDelegate-Protocol.h>
#import <PeriscopeViewer/PTVModalPresentationManagerDelegate-Protocol.h>

@class NSString, PTVInteractiveDismissalTransition, PTVStatusWindow, PTVTwitterAuthenticationModel, UIViewController;
@protocol PTVInteractiveModalControllerDelegate, PTVLoggedInUserProtocol, PTVModalPresentationCoordinatorDelegate, PTVTwitterIntegrationDelegate;

@interface PTVModalPresentationCoordinator : NSObject <PTVInteractiveDismissalTransitionDelegate, PTVModalPresentationManagerDelegate>
{
    PTVStatusWindow *_statusWindow;
    _Bool _useLargeChatFont;
    id <PTVModalPresentationCoordinatorDelegate> _delegate;
    id <PTVLoggedInUserProtocol> _loggedInUser;
    UIViewController *_hostController;
    id <PTVTwitterIntegrationDelegate> _twitterIntegrationDelegate;
    PTVTwitterAuthenticationModel *_twitterAuthenticationModel;
    PTVInteractiveDismissalTransition *_interactiveDismissalTransition;
}

@property(retain, nonatomic) PTVInteractiveDismissalTransition *interactiveDismissalTransition; // @synthesize interactiveDismissalTransition=_interactiveDismissalTransition;
@property(retain, nonatomic) PTVTwitterAuthenticationModel *twitterAuthenticationModel; // @synthesize twitterAuthenticationModel=_twitterAuthenticationModel;
@property(nonatomic) __weak id <PTVTwitterIntegrationDelegate> twitterIntegrationDelegate; // @synthesize twitterIntegrationDelegate=_twitterIntegrationDelegate;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) __weak UIViewController *hostController; // @synthesize hostController=_hostController;
@property(readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(nonatomic) __weak id <PTVModalPresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)modalForUserWithID:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldPresentModalForUserWithID:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (id)modalForBroadcast:(id)arg1 watchContext:(id)arg2 inCollection:(id)arg3;
- (_Bool)shouldPresentModalForBroadcast:(id)arg1 watchContext:(id)arg2 inCollection:(id)arg3;
- (void)dismissCurrentModalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentModal;
@property(readonly, nonatomic) PTVStatusWindow *statusWindow;
- (void)presentModalForUser:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (void)presentModalForUser:(id)arg1;
@property(readonly, nonatomic) UIViewController<PTVInteractiveModalControllerDelegate> *currentModal;
- (id)initWithDelegate:(id)arg1 loggedInUser:(id)arg2 hostController:(id)arg3 useLargeChatFont:(_Bool)arg4 twitterIntegrationDelegate:(id)arg5 twitterAuthenticationModel:(id)arg6;
- (void)transitionDidComplete:(id)arg1;
- (void)presentBroadcast:(id)arg1 withWatchContext:(id)arg2 inCollection:(id)arg3;
- (void)presentUserModalForUserId:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (_Bool)presentModal:(id)arg1 withShade:(_Bool)arg2 controlStatusBar:(_Bool)arg3;
- (_Bool)isPresentingInteractiveOrOtherViewController;
- (_Bool)isPresentingInteractiveModal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
