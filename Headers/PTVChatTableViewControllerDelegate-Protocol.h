//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class PTVChatTableViewController, PTVMessage, UIView;

@protocol PTVChatTableViewControllerDelegate <NSObject>

@optional
- (void)chatTableViewController:(PTVChatTableViewController *)arg1 didSelectShareBroadcastButtonFromBroadcasterAction:(_Bool)arg2;
- (void)chatTableViewControllerDidSelectShareOnTwitterFromScreenshotPrompt:(PTVChatTableViewController *)arg1 sourceViewForActivityViewController:(UIView *)arg2;
- (void)chatTableViewController:(PTVChatTableViewController *)arg1 didTapMessage:(PTVMessage *)arg2;
@end

