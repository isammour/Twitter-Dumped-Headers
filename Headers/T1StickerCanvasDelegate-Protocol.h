//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1StickerCanvas, TFNTwitterSticker;

@protocol T1StickerCanvasDelegate <NSObject>

@optional
- (void)stickerCanvasDidChangeOrdering:(T1StickerCanvas *)arg1;
- (void)stickerCanvas:(T1StickerCanvas *)arg1 didFinishEditingSticker:(TFNTwitterSticker *)arg2;
- (void)stickerCanvas:(T1StickerCanvas *)arg1 didStartEditingSticker:(TFNTwitterSticker *)arg2;
- (void)stickerCanvasDidTapBlankArea:(T1StickerCanvas *)arg1;
- (void)stickerCanvas:(T1StickerCanvas *)arg1 didLongPressSticker:(TFNTwitterSticker *)arg2;
- (void)stickerCanvas:(T1StickerCanvas *)arg1 didTapSticker:(TFNTwitterSticker *)arg2;
@end

