//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class T1DirectMessageComposeViewController, TFNTwitterCardData, TFNTwitterSticker, TFNTwitterStickerCategory, UIView, UIViewController;

@protocol T1DirectMessageComposeViewControllerAttachmentDelegate
- (void)directMessageComposeViewController:(T1DirectMessageComposeViewController *)arg1 didSelectSticker:(TFNTwitterSticker *)arg2 fromCategory:(TFNTwitterStickerCategory *)arg3;
- (void)directMessageComposeViewController:(T1DirectMessageComposeViewController *)arg1 didRemoveCardAttachment:(TFNTwitterCardData *)arg2;
- (void)directMessageComposeViewController:(T1DirectMessageComposeViewController *)arg1 didAddCardAttachment:(TFNTwitterCardData *)arg2;
- (void)directMessageComposeViewControllerDidTapSendLocationButton:(T1DirectMessageComposeViewController *)arg1;
- (void)directMessageComposeViewController:(T1DirectMessageComposeViewController *)arg1 presentFullScreenViewController:(UIViewController *)arg2 sourceView:(UIView *)arg3 enableSnapshot:(_Bool)arg4 animated:(_Bool)arg5 completion:(void (^)(void))arg6;
@end

