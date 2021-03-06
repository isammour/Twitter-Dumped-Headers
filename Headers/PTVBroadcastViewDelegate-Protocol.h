//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVDismissButtonDelegate-Protocol.h>

@class NSString, PTVBroadCastView, UITextView;

@protocol PTVBroadcastViewDelegate <PTVDismissButtonDelegate>
- (void)broadcastViewDidPressAcceptGifts;
- (void)broadcastViewDidChangeSelectionOfBroadcastTitleTextView:(UITextView *)arg1;
- (void)broadcastViewDidEditBroadcastTitle;
- (void)broadcastViewDidPressBackToSourceButton;
- (void)broadcastViewDidPressExternalCameraButton;
- (void)broadcastViewDidChangeChatType:(unsigned long long)arg1;
- (void)broadcastViewDidPressShareFacebook;
- (void)broadcastViewDidPressShareTwitter;
- (void)broadcastViewDidPressAudienceSelector;
- (void)startBroadcastWithStatus:(NSString *)arg1 locationShared:(_Bool)arg2;
- (_Bool)locationServicesChangedTo:(_Bool)arg1;
- (void)broadcastViewDidTapScreen:(struct CGPoint)arg1;
- (void)broadcastViewDidTapForOverlay:(_Bool)arg1;
- (void)broadcastViewDidPressMute:(_Bool)arg1;
- (void)broadcastViewDidPressLeaveBroadcastingButton:(PTVBroadCastView *)arg1;
- (void)broadcastViewDidPressStopBroadcastingButton:(PTVBroadCastView *)arg1;
- (void)broadcastViewDidPressFlipCamera:(unsigned long long)arg1;

@optional
- (void)broadCastViewDidSwipeUp:(PTVBroadCastView *)arg1;
- (_Bool)broadcastViewShouldAcceptDismissGesture;
@end

