//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1FoundMediaStreamViewController, TFNFoundMediaGroup, TFNFoundMediaItem;

@protocol T1FoundMediaStreamViewControllerDelegate <NSObject>

@optional
- (void)foundMediaStreamViewControllerWillBeginDragging:(T1FoundMediaStreamViewController *)arg1;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didLongPressFoundMediaItem:(TFNFoundMediaItem *)arg2;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didSelectFoundMediaItem:(TFNFoundMediaItem *)arg2;
- (void)foundMediaStreamViewController:(T1FoundMediaStreamViewController *)arg1 didSelectFoundMediaGroup:(TFNFoundMediaGroup *)arg2;
@end

