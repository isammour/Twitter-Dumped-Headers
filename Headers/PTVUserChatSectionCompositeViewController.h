//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVChatSectionCompositeViewController.h>

#import <PeriscopeViewer/PTVModalPresentationManagerDelegate-Protocol.h>

@class NSString, PTVBroadcastWatcher;

@interface PTVUserChatSectionCompositeViewController : PTVChatSectionCompositeViewController <PTVModalPresentationManagerDelegate>
{
    PTVUserChatSectionCompositeViewController *_weakSelf;
    PTVBroadcastWatcher *_watcher;
}

@property(readonly, nonatomic) PTVBroadcastWatcher *watcher; // @synthesize watcher=_watcher;
- (void).cxx_destruct;
- (_Bool)endComposingMessage;
- (_Bool)beginComposingMessage;
- (_Bool)isComposingMessage;
- (void)setRetweetButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRetweetButtonImage:(id)arg1 selectedTintColor:(id)arg2;
- (void)highlightPunishmentUX;
- (void)setModerationVotingState:(int)arg1;
- (void)setModerationVotingDuration:(double)arg1;
- (void)setReportType:(unsigned long long)arg1;
- (void)setFlaggedMessage:(id)arg1;
- (id)compositeView;
- (void)presentUserModalForUserId:(id)arg1 configureBlock:(CDUnknownBlockType)arg2;
- (void)presentBroadcast:(id)arg1 withWatchContext:(id)arg2 inCollection:(id)arg3;
- (_Bool)isPresentingInteractiveOrOtherViewController;
- (_Bool)isPresentingInteractiveModal;
- (_Bool)presentModal:(id)arg1 withShade:(_Bool)arg2 controlStatusBar:(_Bool)arg3;
- (void)didSelectComposeMessageWhilePunished;
- (void)presentActionSheet:(id)arg1;
- (void)didTapMessage:(id)arg1;
- (void)replyToMessage:(id)arg1;
- (_Bool)canReply;
- (id)initWithDelegate:(id)arg1 broadcastController:(id)arg2 useLargeChatFont:(_Bool)arg3 watchBroadcastAnalyticsManager:(id)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)participantsBarViewController:(id)arg1 didTapOnParticipant:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

