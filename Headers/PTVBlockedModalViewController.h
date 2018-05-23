//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeViewer/PTVInteractiveModalControllerDelegate-Protocol.h>

@class NSObject, NSString;
@protocol PTVLoggedInUserProtocol;

@interface PTVBlockedModalViewController : UIViewController <PTVInteractiveModalControllerDelegate>
{
    NSString *_messageBody;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
}

- (void).cxx_destruct;
- (id)containerView;
- (id)initWithOffendingMessage:(id)arg1 loggedInUser:(id)arg2;
- (_Bool)shouldUseInteractiveSpringTransition;
- (unsigned long long)canPresentModalController:(id)arg1;
- (_Bool)shouldBecomeChildViewControllerOf:(id)arg1;
- (void)setDismissDelegate:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

