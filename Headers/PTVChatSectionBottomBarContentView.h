//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PTVBroadcastController, PTVChatSectionMessageComposerView, PTVParticipantsBarView, UIButton, UILabel;

@interface PTVChatSectionBottomBarContentView : UIView
{
    PTVChatSectionBottomBarContentView *_weakSelf;
    PTVBroadcastController *_broadcastController;
    UILabel *_timeLabel;
    UIButton *_chatHiddenButton;
    PTVChatSectionMessageComposerView *_messageComposerView;
    PTVParticipantsBarView *_participantsBarView;
    long long _contentViewState;
}

@property(readonly, nonatomic) long long contentViewState; // @synthesize contentViewState=_contentViewState;
@property(retain, nonatomic) PTVParticipantsBarView *participantsBarView; // @synthesize participantsBarView=_participantsBarView;
@property(readonly, nonatomic) PTVChatSectionMessageComposerView *messageComposerView; // @synthesize messageComposerView=_messageComposerView;
@property(readonly, nonatomic) UIButton *chatHiddenButton; // @synthesize chatHiddenButton=_chatHiddenButton;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
- (void).cxx_destruct;
- (void)insertContentView:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (id)insertContentViewForState:(long long)arg1;
- (id)viewForContentViewState:(long long)arg1;
- (void)setContentViewState:(long long)arg1 animated:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithBroadcastController:(id)arg1 useLargeChatFont:(_Bool)arg2;

@end

