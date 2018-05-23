//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1StatusViewEventHandler-Protocol.h>

@class NSString, TFNTwitterAccount, TFNViewController, TFSTwitterScribeContext;

@interface T1LiveVideoPromptPollStatusViewEventHandler : NSObject <T1StatusViewEventHandler>
{
    TFNViewController *_presentingViewController;
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak TFNViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (id)handleStatusViewEvent:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 scribeContext:(id)arg2 account:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

