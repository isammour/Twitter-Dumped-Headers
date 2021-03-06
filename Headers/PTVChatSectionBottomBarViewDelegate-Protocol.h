//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSString, PTVChatSectionBottomBarView;

@protocol PTVChatSectionBottomBarViewDelegate <NSObject>

@optional
- (void)chatSectionBottomBarView:(PTVChatSectionBottomBarView *)arg1 didSelectSendMessage:(NSString *)arg2 keyboardLanguage:(NSString *)arg3;
- (void)chatSectionBottomBarViewDidChangeMessage:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidEndComposingMessage:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidBeginComposingMessage:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectComposeMessage:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectShowChat:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectGiftHeartActionItem:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectShareBroadcast:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectToggleRetweetBroadcast:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectShowOverflowMenu:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectParticipantsControl:(PTVChatSectionBottomBarView *)arg1;
- (void)chatSectionBottomBarViewDidSelectWatchLive:(PTVChatSectionBottomBarView *)arg1;
@end

