//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVShareSheetControllerDelegate-Protocol.h>

@class PTVBroadcastShareSheetController;

@protocol PTVBroadcastShareSheetControllerDelegate <PTVShareSheetControllerDelegate>

@optional
- (void)broadcastShareSheetControllerDidShareURLViaDefaultShareSheet:(PTVBroadcastShareSheetController *)arg1;
- (void)broadcastShareSheetControllerDidSelectRetweet:(PTVBroadcastShareSheetController *)arg1;
- (void)broadcastShareSheetControllerDidSelectShareOnTwitter:(PTVBroadcastShareSheetController *)arg1;
@end
