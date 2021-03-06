//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVViewController.h>

#import <PeriscopeViewer/PTVChatWarningModalViewDelegate-Protocol.h>
#import <PeriscopeViewer/PTVInteractiveModalControllerDelegate-Protocol.h>

@class NSObject, NSString;
@protocol PTVChatWarningModalViewControllerDelegate, PTVDismissButtonDelegate, PTVLoggedInUserProtocol;

@interface PTVChatWarningModalViewController : PTVViewController <PTVChatWarningModalViewDelegate, PTVInteractiveModalControllerDelegate>
{
    id <PTVDismissButtonDelegate> _dismissDelegate;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    id <PTVChatWarningModalViewControllerDelegate> _delegate;
    NSString *_messageBody;
    NSString *_keyboardLanguage;
    unsigned long long _inheritedInterfaceOrientations;
}

@property(nonatomic) unsigned long long inheritedInterfaceOrientations; // @synthesize inheritedInterfaceOrientations=_inheritedInterfaceOrientations;
@property(readonly, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(readonly, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(nonatomic) __weak id <PTVChatWarningModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)containerView;
- (id)initWithDelegate:(id)arg1 messageBody:(id)arg2 keyboardLanguage:(id)arg3 loggedInUser:(id)arg4;
- (void)chatWarningViewDidPressDontSendMessage;
- (void)chatWarningViewDidPressSendMessage;
- (_Bool)shouldUseInteractiveSpringTransition;
- (unsigned long long)canPresentModalController:(id)arg1;
- (_Bool)shouldBecomeChildViewControllerOf:(id)arg1;
- (void)setDismissDelegate:(id)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

