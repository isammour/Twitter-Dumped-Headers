//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1MediaGridCell, TFNTwitterMediaPreviewInfo, UILongPressGestureRecognizer;

@protocol T1MediaSearchCellDelegate <NSObject>
- (void)mediaSearchCell:(T1MediaGridCell *)arg1 didLongPress:(UILongPressGestureRecognizer *)arg2 mediaPreviewInfo:(TFNTwitterMediaPreviewInfo *)arg3;
- (void)mediaSearchCell:(T1MediaGridCell *)arg1 didTapMediaPreviewInfo:(TFNTwitterMediaPreviewInfo *)arg2;
@end

