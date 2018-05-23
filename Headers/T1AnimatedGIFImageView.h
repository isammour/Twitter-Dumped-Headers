//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNAnimatedGifImageView.h>

@class TFNAnimatedGifImage;

@interface T1AnimatedGIFImageView : TFNAnimatedGifImageView
{
    _Bool _animatingForPreviewEnabled;
    _Bool _fullAnimatedGIFImageReplaced;
    TFNAnimatedGifImage *_replacementAnimatedGIFImage;
}

@property(nonatomic) _Bool fullAnimatedGIFImageReplaced; // @synthesize fullAnimatedGIFImageReplaced=_fullAnimatedGIFImageReplaced;
@property(retain, nonatomic) TFNAnimatedGifImage *replacementAnimatedGIFImage; // @synthesize replacementAnimatedGIFImage=_replacementAnimatedGIFImage;
@property(nonatomic, getter=isAnimatingForPreviewEnabled) _Bool animatingForPreviewEnabled; // @synthesize animatingForPreviewEnabled=_animatingForPreviewEnabled;
- (void).cxx_destruct;
- (void)_replaceAnimatedGIFImageIfNeeded;
- (void)didFinishLooping;
- (void)didContinueLooping;
- (void)_startAnimatingForPreviewing;
- (void)setAnimatedGifImage:(id)arg1;
- (void)setFullAnimatedGIFImage:(id)arg1;
- (void)setPreviewAnimatedGIFImage:(id)arg1;
- (void)setPreviewImage:(id)arg1;

@end

