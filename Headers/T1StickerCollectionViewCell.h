//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionViewCell.h>

@class TFNTwitterSticker, UIImageView, UIView;

@interface T1StickerCollectionViewCell : TFNCollectionViewCell
{
    UIImageView *_stickerImageView;
    UIView *_stickerImageHostView;
    UIView *_placeHolderView;
    UIImageView *_checkmarkView;
    TFNTwitterSticker *_sticker;
}

@property(retain, nonatomic) TFNTwitterSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(nonatomic, getter=isCheckmarkVisible) _Bool checkmarkVisible;
- (void)setHighlighted:(_Bool)arg1;
- (void)_animateInStickerImage:(id)arg1;
- (void)setSticker:(id)arg1 accountID:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
