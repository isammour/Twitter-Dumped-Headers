//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1StickerCategoryViewController, TFNTwitterSticker, TFNTwitterStickerWithVariants;

@protocol T1StickerCategoryViewControllerDelegate <NSObject>
- (TFNTwitterSticker *)stickerCategoryViewController:(T1StickerCategoryViewController *)arg1 preferredVariantForStickerWithVariants:(TFNTwitterStickerWithVariants *)arg2;
- (void)stickerCategoryViewController:(T1StickerCategoryViewController *)arg1 didSelectPreferredVariant:(TFNTwitterSticker *)arg2 fromStickerWithVariants:(TFNTwitterStickerWithVariants *)arg3;
- (void)stickerCategoryViewController:(T1StickerCategoryViewController *)arg1 didSelectSticker:(TFNTwitterSticker *)arg2;
@end
