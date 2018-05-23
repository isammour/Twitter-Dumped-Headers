//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVChatSectionCompositeView.h>

#import <PeriscopeViewer/PTVModerationVotingViewDelegate-Protocol.h>
#import <PeriscopeViewer/UITextViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PTVMessage, PTVModerationVotingView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface PTVUserChatSectionCompositeView : PTVChatSectionCompositeView <UITextViewDelegate, PTVModerationVotingViewDelegate>
{
    UIView *_moderationPunishmentProgressBar;
    PTVModerationVotingView *_moderationVotingView;
    UIView *_moderationUnderlayShade;
    UITapGestureRecognizer *_sendHeartTapRecognizer;
    UIPanGestureRecognizer *_dismissKeyboardPanRecognizer;
    _Bool _isPunishmentProgressBarFullWidth;
    NSLayoutConstraint *_moderationViewHeightConstraint;
    _Bool _showingParticipantsBar;
    int _votingState;
    double _votingDuration;
    NSLayoutConstraint *_moderationViewBottomConstraint;
    PTVMessage *_moderationSentenceMessage;
    NSLayoutConstraint *_participantsBarBottomConstraint;
}

@property(readonly, nonatomic) _Bool showingParticipantsBar; // @synthesize showingParticipantsBar=_showingParticipantsBar;
@property(retain, nonatomic) NSLayoutConstraint *participantsBarBottomConstraint; // @synthesize participantsBarBottomConstraint=_participantsBarBottomConstraint;
@property(readonly, nonatomic) PTVMessage *moderationSentenceMessage; // @synthesize moderationSentenceMessage=_moderationSentenceMessage;
@property(retain, nonatomic) NSLayoutConstraint *moderationViewBottomConstraint; // @synthesize moderationViewBottomConstraint=_moderationViewBottomConstraint;
@property(nonatomic) double votingDuration; // @synthesize votingDuration=_votingDuration;
@property(nonatomic) int votingState; // @synthesize votingState=_votingState;
- (void).cxx_destruct;
- (_Bool)endComposingMessage;
- (_Bool)beginComposingMessage;
@property(readonly, nonatomic) _Bool isComposingMessage;
- (void)updateCommentingAbilityState;
- (void)executeModerationUserInteractionState;
- (void)moderationPunishmentUXAlphaState:(_Bool)arg1;
- (_Bool)shouldShowParticipantsBarView;
- (void)alphaState;
- (void)executeState;
- (void)updatePunishmentUXAndProgressBar;
- (void)setReportType:(unsigned long long)arg1;
- (_Bool)isReadOnly;
- (void)setFlaggedMessage:(id)arg1;
- (void)highlightPunishmentUXIfNeeded;
- (void)keyboardWillHideWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)keyboardWillShowWithFrame:(struct CGRect)arg1 curve:(long long)arg2 duration:(float)arg3;
- (void)replyTo:(id)arg1;
@property(readonly, nonatomic) _Bool canReply;
- (void)gestureTapOnCompositeView:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)didPressLearnMore;
- (void)didCastModerationVote:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 broadcastController:(id)arg2 tableView:(id)arg3 participantsBarView:(id)arg4 useLargeChatFont:(_Bool)arg5 delegate:(id)arg6;
- (void)moderationDidPressLearnMore;
- (void)moderationDidPressNotSure;
- (void)moderationDidPressInnocent;
- (void)moderationDidPressGuiltyOfSexualContent;
- (void)moderationDidPressGuiltyOfSpam;
- (void)moderationDidPressGuiltyOfAbuse;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)executeReplayControlState;
- (void)chatSectionBottomBarView:(id)arg1 didSelectSendMessage:(id)arg2 keyboardLanguage:(id)arg3;
- (void)chatSectionBottomBarViewDidEndComposingMessage:(id)arg1;
- (void)chatSectionBottomBarViewDidBeginComposingMessage:(id)arg1;
- (void)layoutModerationView;
- (void)updateParticipantsBarConstraints;
- (void)setShowingParticipantsBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideParticipantsBarAnimated:(_Bool)arg1;
- (void)showParticipantsBarAnimated:(_Bool)arg1;
- (void)updateTableViewBottomConstraint;
- (void)updateConstraints;
- (void)initializeBottomBarWithBroadcastController:(id)arg1 useLargeChatFont:(_Bool)arg2;
- (void)layoutPunishmentProgressBar:(_Bool)arg1;
- (void)layoutSubviews;
- (void)chatControllerDidEndPunishment:(id)arg1;
- (void)chatControllerDidBeginPunishment:(id)arg1;
- (void)chatController:(id)arg1 didChangeChatState:(unsigned long long)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

