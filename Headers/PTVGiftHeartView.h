//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PTVGiftHeartSpriteLayer, PTVGiftStyle, UIImage;

@interface PTVGiftHeartView : UIView
{
    struct CGSize _defaultLayerSize;
    PTVGiftHeartSpriteLayer *_heartLayer;
}

- (void).cxx_destruct;
- (void)pauseAtOffset;
- (void)resumeAnimation;
- (void)setHeartLayer:(id)arg1;
- (id)initWithGiftStyle:(id)arg1;
@property(retain, nonatomic) PTVGiftStyle *giftStyle;
@property(nonatomic) long long participantIndex;
@property(retain, nonatomic) UIImage *avatar;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;

@end

