//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageConversationHostViewController.h>

#import <T1Twitter/T1DirectMessageComposeViewControllerAttachmentDelegate-Protocol.h>

@interface T1DirectMessageConversationHostViewController (T1Twitter1) <T1DirectMessageComposeViewControllerAttachmentDelegate>
- (void)directMessageComposeViewController:(id)arg1 didSelectSticker:(id)arg2 fromCategory:(id)arg3;
- (void)directMessageComposeViewController:(id)arg1 didRemoveCardAttachment:(id)arg2;
- (void)directMessageComposeViewController:(id)arg1 didAddCardAttachment:(id)arg2;
- (void)directMessageComposeViewControllerDidTapSendLocationButton:(id)arg1;
- (void)directMessageComposeViewController:(id)arg1 presentFullScreenViewController:(id)arg2 sourceView:(id)arg3 enableSnapshot:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
@end

