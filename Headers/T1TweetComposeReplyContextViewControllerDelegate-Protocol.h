//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1TweetComposeReplyContextViewController, TFNTwitterStatus;

@protocol T1TweetComposeReplyContextViewControllerDelegate <NSObject>
- (void)replyContextViewController:(T1TweetComposeReplyContextViewController *)arg1 didUpdateRepliedToStatus:(TFNTwitterStatus *)arg2;
- (void)updateFrameForReplyContextViewController:(T1TweetComposeReplyContextViewController *)arg1 withPreferredHeight:(double)arg2;
- (double)widthForReplyContextViewController:(T1TweetComposeReplyContextViewController *)arg1;
@end

